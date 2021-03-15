// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_address.cpp
 *
 * @brief This file implements the address manipulation class for Bitcoin.
 */
#include <string>
#include <vector>

#include "cfd/cfd_address.h"
#include "cfd/cfdapi_address.h"
#include "cfdcore/cfdcore_descriptor.h"
#include "cfdcore/cfdcore_hdwallet.h"
#include "cfdcore/cfdcore_util.h"
#include "cfdjs/cfdjs_api_address.h"
#include "cfdjs_address_base.h"  // NOLINT
#include "cfdjs_internal.h"      // NOLINT

namespace cfd {
namespace js {
namespace api {

using cfd::AddressFactory;
using cfd::core::Address;
using cfd::core::CfdError;
using cfd::core::CfdException;
using cfd::core::Descriptor;
using cfd::core::DescriptorKeyInfo;
using cfd::core::DescriptorScriptType;
using cfd::core::ExtPrivkey;
using cfd::core::ExtPubkey;
using cfd::core::NetType;
using cfd::core::Privkey;
using cfd::core::Pubkey;
using cfd::core::StringUtil;

/**
 * @brief check child key contain extkey.
 * @param[in] target_key   check target key string.
 * @param[in] ext_privkey  ext-privkey.
 * @param[in] ext_pubkey   ext-pubkey.
 * @param[in] child_path   bip32 derive path.
 * @throw CfdException  contain extkey not found.
 */
static void CheckContainKey(
    const std::string& target_key, const ExtPrivkey* ext_privkey,
    const ExtPubkey* ext_pubkey, const std::string& child_path) {
  ExtPrivkey child_priv;
  ExtPubkey child_pub;
  Privkey privkey;

  if (ext_privkey != nullptr) {
    if (child_path.empty()) {
      child_priv = *ext_privkey;
    } else {
      child_priv = ext_privkey->DerivePrivkey(child_path);
    }

    if (target_key == child_priv.ToString()) {
      return;
    }
    privkey = child_priv.GetPrivkey();
    child_pub = child_priv.GetExtPubkey();
  }

  if (ext_pubkey != nullptr) {
    if (child_path.empty()) {
      child_pub = *ext_pubkey;
    } else {
      child_pub = ext_pubkey->DerivePubkey(child_path);
    }
  }
  if (target_key == child_pub.ToString()) {
    return;
  }

  if (privkey.IsValid()) {
    std::string wif_main = privkey.ConvertWif(NetType::kMainnet);
    std::string wif_test = privkey.ConvertWif(NetType::kTestnet);
    if ((target_key == wif_main) || (target_key == wif_test) ||
        (target_key == privkey.GetHex())) {
      return;
    }
  }

  Pubkey pubkey = child_pub.GetPubkey();
  if (target_key != pubkey.GetHex()) {
    throw CfdException(
        CfdError::kCfdIllegalArgumentError,
        "Invalid parent key. derived key from parent and key unmatch.");
  }
}

CreateAddressResponseStruct AddressStructApi::CreateAddress(
    const CreateAddressRequestStruct& request) {
  auto call_func = [](const CreateAddressRequestStruct& request)
      -> CreateAddressResponseStruct {  // NOLINT
    NetType net_type = ConvertNetType(request.network);
    AddressFactory api(net_type);
    return AddressApiBase::CreateAddress(request, &api);
  };

  CreateAddressResponseStruct result;
  result = ExecuteStructApi<
      CreateAddressRequestStruct, CreateAddressResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

CreateMultisigResponseStruct AddressStructApi::CreateMultisig(
    const CreateMultisigRequestStruct& request) {
  auto call_func = [](const CreateMultisigRequestStruct& request)
      -> CreateMultisigResponseStruct {  // NOLINT
    NetType net_type = ConvertNetType(request.network);
    AddressFactory factory(net_type);
    return AddressApiBase::CreateMultisig(request, &factory);
  };

  CreateMultisigResponseStruct result;
  result = ExecuteStructApi<
      CreateMultisigRequestStruct, CreateMultisigResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

GetAddressesFromMultisigResponseStruct
AddressStructApi::GetAddressesFromMultisig(
    const GetAddressesFromMultisigRequestStruct& request) {
  auto call_func = [](const GetAddressesFromMultisigRequestStruct& request)
      -> GetAddressesFromMultisigResponseStruct {  // NOLINT
    NetType net_type = ConvertNetType(request.network);
    AddressFactory api(net_type);
    return AddressApiBase::GetAddressesFromMultisig(request, &api);
  };

  GetAddressesFromMultisigResponseStruct result;
  result = ExecuteStructApi<
      GetAddressesFromMultisigRequestStruct,
      GetAddressesFromMultisigResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

GetAddressInfoResponseStruct AddressStructApi::GetAddressInfo(
    const GetAddressInfoRequestStruct& request) {
  auto call_func = [](const GetAddressInfoRequestStruct& request)
      -> GetAddressInfoResponseStruct {  // NOLINT
    AddressFactory factory;
    Address addr;
    auto response = AddressApiBase::GetAddressInfo(request, &factory, &addr);
    response.network = ConvertNetTypeString(addr.GetNetType());
    return response;
  };

  GetAddressInfoResponseStruct result;
  result = ExecuteStructApi<
      GetAddressInfoRequestStruct, GetAddressInfoResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

ParseDescriptorResponseStruct AddressStructApi::ParseDescriptor(
    const ParseDescriptorRequestStruct& request) {
  auto call_func = [](const ParseDescriptorRequestStruct& request)
      -> ParseDescriptorResponseStruct {  // NOLINT
    NetType net_type = ConvertNetType(request.network);
    AddressFactory api(net_type);
    return AddressApiBase::ParseDescriptor(request, &api);
  };

  ParseDescriptorResponseStruct result;
  result = ExecuteStructApi<
      ParseDescriptorRequestStruct, ParseDescriptorResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

OutputDescriptorResponseStruct AddressStructApi::CreateDescriptor(
    const CreateDescriptorRequestStruct& request) {
  auto call_func = [](const CreateDescriptorRequestStruct& request)
      -> OutputDescriptorResponseStruct {  // NOLINT
    OutputDescriptorResponseStruct response;

    std::vector<std::string> types =
        StringUtil::Split(request.script_type, "-");
    std::vector<DescriptorScriptType> type_list;
    for (const auto& type : types) {
      std::string temp_type = type;
      if (temp_type.find("p2") == 0) {
        temp_type = temp_type.substr(2);
      }
      AddressApiBase::AppendDescriptorType(temp_type, &type_list);
    }
    std::vector<DescriptorKeyInfo> key_info_list;
    for (const auto& key_info : request.key_info_list) {
      std::string parent_info;
      if (!key_info.parent_extkey.empty()) {
        std::string hdkey_top;
        if (key_info.parent_extkey.size() > 4) {
          hdkey_top = key_info.parent_extkey.substr(1, 3);
        }
        std::string checked_path;
        std::vector<std::string> child_path =
            StringUtil::Split(key_info.key, "/");
        if (hdkey_top == "prv") {
          ExtPrivkey ext_privkey(key_info.parent_extkey);
          parent_info = DescriptorKeyInfo::GetExtPrivkeyInformation(
              ext_privkey, key_info.key_path_from_parent);
          CheckContainKey(
              child_path[0], &ext_privkey, nullptr,
              key_info.key_path_from_parent);
        } else {
          ExtPubkey ext_pubkey(key_info.parent_extkey);
          parent_info = DescriptorKeyInfo::GetExtPubkeyInformation(
              ext_pubkey, key_info.key_path_from_parent);
          CheckContainKey(
              child_path[0], nullptr, &ext_pubkey,
              key_info.key_path_from_parent);
        }
      }
      key_info_list.emplace_back(DescriptorKeyInfo(key_info.key, parent_info));
    }

    Descriptor descriptor = Descriptor::CreateDescriptor(
        type_list, key_info_list, request.require_num);

    response.descriptor = descriptor.ToString();
    return response;
  };

  OutputDescriptorResponseStruct result;
  result = ExecuteStructApi<
      CreateDescriptorRequestStruct, OutputDescriptorResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

OutputDescriptorResponseStruct AddressStructApi::AppendDescriptorChecksum(
    const AppendDescriptorChecksumRequestStruct& request) {
  auto call_func = [](const AppendDescriptorChecksumRequestStruct& request)
      -> OutputDescriptorResponseStruct {  // NOLINT
    OutputDescriptorResponseStruct response;

    Descriptor descriptor = Descriptor::Parse(request.descriptor);

    response.descriptor = descriptor.ToString();
    return response;
  };

  OutputDescriptorResponseStruct result;
  result = ExecuteStructApi<
      AppendDescriptorChecksumRequestStruct, OutputDescriptorResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

TapScriptInfoStruct AddressStructApi::GetTapScriptTreeInfo(
    const GetTapScriptTreeInfoRequestStruct& request) {
  auto call_func = [](const GetTapScriptTreeInfoRequestStruct& request)
      -> TapScriptInfoStruct {  // NOLINT
    NetType net_type = ConvertNetType(request.network);
    AddressFactory api(net_type);
    return AddressApiBase::GetTapScriptTreeInfo(request, &api);
  };

  TapScriptInfoStruct result;
  result =
      ExecuteStructApi<GetTapScriptTreeInfoRequestStruct, TapScriptInfoStruct>(
          request, call_func, std::string(__FUNCTION__));
  return result;
}

TapScriptInfoStruct AddressStructApi::GetTapScriptTreeInfoByControlBlock(
    const TapScriptInfoByControlRequestStruct& request) {
  auto call_func = [](const TapScriptInfoByControlRequestStruct& request)
      -> TapScriptInfoStruct {  // NOLINT
    NetType net_type = ConvertNetType(request.network);
    AddressFactory api(net_type);
    return AddressApiBase::GetTapScriptTreeInfoByControlBlock(request, &api);
  };

  TapScriptInfoStruct result;
  result = ExecuteStructApi<
      TapScriptInfoByControlRequestStruct, TapScriptInfoStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

TapScriptInfoStruct AddressStructApi::GetTapScriptTreeFromString(
    const TapScriptFromStringRequestStruct& request) {
  auto call_func = [](const TapScriptFromStringRequestStruct& request)
      -> TapScriptInfoStruct {  // NOLINT
    NetType net_type = ConvertNetType(request.network);
    AddressFactory api(net_type);
    return AddressApiBase::GetTapScriptTreeFromString(request, &api);
  };

  TapScriptInfoStruct result;
  result =
      ExecuteStructApi<TapScriptFromStringRequestStruct, TapScriptInfoStruct>(
          request, call_func, std::string(__FUNCTION__));
  return result;
}

NetType AddressStructApi::ConvertNetType(const std::string& network_type) {
  NetType net_type;
  if (network_type == "mainnet") {
    net_type = NetType::kMainnet;
  } else if (network_type == "testnet") {
    net_type = NetType::kTestnet;
  } else if (network_type == "regtest") {
    net_type = NetType::kRegtest;
  } else {
    warn(
        CFD_LOG_SOURCE,
        "Failed to ConvertNetType. Invalid network_type passed:  "
        "network_type={}",  // NOLINT
        network_type);
    throw CfdException(
        CfdError::kCfdIllegalArgumentError,
        "Invalid network_type passed. network_type must be \"mainnet\""
        " or \"testnet\" or \"regtest\".");
  }
  return net_type;
}

std::string AddressStructApi::ConvertNetTypeString(NetType network_type) {
  std::string result;
  if (network_type == NetType::kMainnet) {
    result = "mainnet";
  } else if (network_type == NetType::kTestnet) {
    result = "testnet";
  } else if (network_type == NetType::kRegtest) {
    result = "regtest";
  } else {
    warn(
        CFD_LOG_SOURCE,
        "Failed to ConvertNetTypeString. Invalid network_type passed:  "
        "network_type={}",  // NOLINT
        network_type);
    throw CfdException(
        CfdError::kCfdIllegalArgumentError,
        "Invalid network_type passed. network_type must be \"kMainnet\""
        " or \"kTestnet\" or \"kRegtest\".");
  }
  return result;
}

}  // namespace api
}  // namespace js
}  // namespace cfd
