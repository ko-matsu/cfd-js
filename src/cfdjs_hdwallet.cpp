// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_hdwallet.cpp
 *
 * @brief Implementation file of the HDWallet API class used by cfd-api
 */
#include <limits>
#include <string>
#include <vector>

#include "cfdcore/cfdcore_bytedata.h"
#include "cfdcore/cfdcore_hdwallet.h"
#include "cfdcore/cfdcore_key.h"
#include "cfdcore/cfdcore_util.h"
#include "cfdjs/cfdjs_api_address.h"
#include "cfdjs/cfdjs_api_hdwallet.h"
#include "cfdjs_internal.h"  // NOLINT

namespace cfd {
namespace js {
namespace api {

using cfd::api::ExtKeyType;
using cfd::core::Bip32FormatType;
using cfd::core::ByteData;
using cfd::core::ByteData256;
using cfd::core::CfdError;
using cfd::core::CfdException;
using cfd::core::ExtPrivkey;
using cfd::core::ExtPubkey;
using cfd::core::HDWallet;
using cfd::core::KeyData;
using cfd::core::NetType;
using cfd::core::Privkey;
using cfd::core::Pubkey;
using cfd::core::StringUtil;

//////////////////////////////////
/// Internal file functions.
//////////////////////////////////
/**
 * @brief Convert to bip32 format type.
 * @param[in] type_str    bip32 format type string.
 * @return bip32 format type.
 */
Bip32FormatType ConvertToBip32FormatType(const std::string type_str) {
  auto lower_type = StringUtil::ToLower(type_str);
  if (lower_type == "bip32") {
    return Bip32FormatType::kNormal;
  } else if (lower_type == "bip49") {
    return Bip32FormatType::kBip49;
  } else if (lower_type == "bip84") {
    return Bip32FormatType::kBip84;
  } else {
    warn(
        CFD_LOG_SOURCE,
        "Failed to bip32FormatType. Invalid value: bip32FormatType={}",
        type_str);
    throw CfdException(
        CfdError::kCfdIllegalArgumentError,
        "Invalid bip32FormatType passed. bip32FormatType must be "
        "\"bip32\" or \"bip49\" or \"bip84\".");
  }
}

/**
 * @brief check extkey network type.
 * @param[in] input_net_type      input network type
 * @param[in] extkey_net_type     extkey network type
 */
static void CheckExtkeyNetworkType(
    NetType input_net_type, NetType extkey_net_type) {
  bool is_mainnet = (input_net_type == NetType::kMainnet);
  bool is_key_mainnet = (extkey_net_type == NetType::kMainnet);
  if (is_mainnet != is_key_mainnet) {
    warn(
        CFD_LOG_SOURCE, "network unmatch. {},{}", input_net_type,
        extkey_net_type);
    throw CfdException(
        CfdError::kCfdIllegalArgumentError, "extkey networkType unmatch.");
  }
}

/**
 * @brief Derive extkey by path string.
 * @param[in] extkey      extkey
 * @param[in] path        path string.
 * @param[in] key_type    extkey type.
 * @param[in] net_type    input network type
 * @return derived extkey
 */
static std::string DeriveExtkeyByPathString(
    const std::string extkey, const std::string& path, ExtKeyType key_type,
    NetType net_type) {
  std::string result;
  if (path.empty()) {
    warn(CFD_LOG_SOURCE, "child_number_list empty.");
    throw CfdException(
        CfdError::kCfdIllegalArgumentError, "child_number_list empty.");
  }
  KeyData key_data(extkey);
  if (key_data.HasExtPrivkey()) {
    ExtPrivkey privkey(extkey);
    CheckExtkeyNetworkType(net_type, privkey.GetNetworkType());
    if (key_type == ExtKeyType::kExtPrivkey) {
      result = privkey.DerivePrivkey(path).ToString();
    } else {
      result = privkey.DerivePubkey(path).ToString();
    }
  } else {
    ExtPubkey pubkey(extkey);
    CheckExtkeyNetworkType(net_type, pubkey.GetNetworkType());
    if (key_type == ExtKeyType::kExtPrivkey) {
      warn(
          CFD_LOG_SOURCE,
          "Illegal extkey_type. Cannot create privkey from pubkey.");
      throw CfdException(
          CfdError::kCfdIllegalArgumentError,
          "Illegal extkey_type. Cannot create privkey from pubkey.");
    }
    result = pubkey.DerivePubkey(path).ToString();
  }
  return result;
}

/**
 * @brief Derive extkey by path array.
 * @param[in] extkey      extkey
 * @param[in] path        path array.
 * @param[in] key_type    extkey type.
 * @param[in] net_type    input network type
 * @return derived extkey
 */
static std::string DeriveExtkeyByPath(
    const std::string extkey, const std::vector<uint32_t>& path,
    ExtKeyType key_type, NetType net_type) {
  std::string result;
  if (path.empty()) {
    warn(CFD_LOG_SOURCE, "child_number_list empty.");
    throw CfdException(
        CfdError::kCfdIllegalArgumentError, "child_number_list empty.");
  }
  KeyData key_data(extkey);
  if (key_data.HasExtPrivkey()) {
    ExtPrivkey privkey(extkey);
    CheckExtkeyNetworkType(net_type, privkey.GetNetworkType());
    if (key_type == ExtKeyType::kExtPrivkey) {
      result = privkey.DerivePrivkey(path).ToString();
    } else {
      result = privkey.DerivePubkey(path).ToString();
    }
  } else {
    ExtPubkey pubkey(extkey);
    CheckExtkeyNetworkType(net_type, pubkey.GetNetworkType());
    if (key_type == ExtKeyType::kExtPrivkey) {
      warn(
          CFD_LOG_SOURCE,
          "Illegal extkey_type. Cannot create privkey from pubkey.");
      throw CfdException(
          CfdError::kCfdIllegalArgumentError,
          "Illegal extkey_type. Cannot create privkey from pubkey.");
    }
    result = pubkey.DerivePubkey(path).ToString();
  }
  return result;
}

//////////////////////////////////
/// HDWalletStructApi
//////////////////////////////////
GetMnemonicWordlistResponseStruct HDWalletStructApi::GetMnemonicWordlist(
    const GetMnemonicWordlistRequestStruct& request) {
  auto call_func = [](const GetMnemonicWordlistRequestStruct& request)
      -> GetMnemonicWordlistResponseStruct {
    GetMnemonicWordlistResponseStruct response;
    response.wordlist = HDWallet::GetMnemonicWordlist(request.language);
    return response;
  };

  GetMnemonicWordlistResponseStruct result;
  result = ExecuteStructApi<
      GetMnemonicWordlistRequestStruct, GetMnemonicWordlistResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

ConvertMnemonicToSeedResponseStruct HDWalletStructApi::ConvertMnemonicToSeed(
    const ConvertMnemonicToSeedRequestStruct& request) {
  auto call_func = [](const ConvertMnemonicToSeedRequestStruct& request)
      -> ConvertMnemonicToSeedResponseStruct {
    ConvertMnemonicToSeedResponseStruct response;
    std::vector<std::string> mnemonic = request.mnemonic;
    std::string passphrase = request.passphrase;
    bool strict_check = request.strict_check;
    std::string language = StringUtil::ToLower(request.language);
    bool use_ideographic_space =
        ((language == "jp") && request.use_ideographic_space);

    if (strict_check && language.empty()) {
      throw CfdException(
          CfdError::kCfdIllegalArgumentError,
          "Failed to ConvertMnemonicToSeed. If check mnemonic strictly, need "
          "to set language.");
    }
    if (strict_check && (!HDWallet::CheckValidMnemonic(mnemonic, language))) {
      throw CfdException(
          CfdError::kCfdIllegalArgumentError,
          "Failed to ConvertMnemonicToSeed. Mnemonic strict check error.");
    }
    if (!language.empty()) {
      response.entropy =
          HDWallet::ConvertMnemonicToEntropy(mnemonic, language).GetHex();
    } else {
      response.ignore_items.insert("entropy");
    }
    HDWallet wallet(mnemonic, passphrase, use_ideographic_space);
    response.seed = wallet.GetSeed().GetHex();
    return response;
  };

  ConvertMnemonicToSeedResponseStruct result;
  result = ExecuteStructApi<
      ConvertMnemonicToSeedRequestStruct, ConvertMnemonicToSeedResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

ConvertEntropyToMnemonicResponseStruct
HDWalletStructApi::ConvertEntropyToMnemonic(
    const ConvertEntropyToMnemonicRequestStruct& request) {
  auto call_func = [](const ConvertEntropyToMnemonicRequestStruct& request)
      -> ConvertEntropyToMnemonicResponseStruct {
    ConvertEntropyToMnemonicResponseStruct response;
    ByteData entropy(request.entropy);
    std::string language = request.language;

    try {
      response.mnemonic =
          HDWallet::ConvertEntropyToMnemonic(entropy, language);
    } catch (const CfdException& e) {
      warn(
          CFD_LOG_SOURCE, "Failed to GetMnemonicWordlist. error: [{}]",
          e.what());
      throw CfdException(
          CfdError::kCfdIllegalArgumentError,
          "Failed to ConvertEntropyToMnemonic. " + std::string(e.what()));
    }
    return response;
  };

  ConvertEntropyToMnemonicResponseStruct result;
  result = ExecuteStructApi<
      ConvertEntropyToMnemonicRequestStruct,
      ConvertEntropyToMnemonicResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

CreateExtkeyResponseStruct HDWalletStructApi::CreateExtkeyFromSeed(
    const CreateExtkeyFromSeedRequestStruct& request) {
  auto call_func = [](const CreateExtkeyFromSeedRequestStruct& request)
      -> CreateExtkeyResponseStruct {
    CreateExtkeyResponseStruct response;
    ByteData seed(request.seed);
    const NetType net_type = AddressStructApi::ConvertNetType(request.network);
    ExtKeyType key_type = ConvertExtKeyType(request.extkey_type);
    auto bip32_format = ConvertToBip32FormatType(request.bip32_format_type);

    ExtPrivkey privkey(seed, net_type, bip32_format);
    if (key_type == ExtKeyType::kExtPrivkey) {
      response.extkey = privkey.ToString();
    } else {
      response.extkey = privkey.GetExtPubkey().ToString();
    }
    return response;
  };

  CreateExtkeyResponseStruct result;
  result = ExecuteStructApi<
      CreateExtkeyFromSeedRequestStruct, CreateExtkeyResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

CreateExtkeyResponseStruct HDWalletStructApi::CreateExtkeyFromParent(
    const CreateExtkeyFromParentRequestStruct& request) {
  auto call_func = [](const CreateExtkeyFromParentRequestStruct& request)
      -> CreateExtkeyResponseStruct {
    CreateExtkeyResponseStruct response;
    const NetType net_type = AddressStructApi::ConvertNetType(request.network);
    ExtKeyType key_type = ConvertExtKeyType(request.extkey_type);
    uint32_t child_num = request.child_number;
    if (request.hardened) child_num |= ExtPrivkey::kHardenedKey;
    std::vector<uint32_t> path = {child_num};

    response.extkey =
        DeriveExtkeyByPath(request.extkey, path, key_type, net_type);
    return response;
  };

  CreateExtkeyResponseStruct result;
  result = ExecuteStructApi<
      CreateExtkeyFromParentRequestStruct, CreateExtkeyResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

CreateExtkeyResponseStruct HDWalletStructApi::CreateExtkeyFromParentPath(
    const CreateExtkeyFromParentPathRequestStruct& request) {
  auto call_func = [](const CreateExtkeyFromParentPathRequestStruct& request)
      -> CreateExtkeyResponseStruct {
    CreateExtkeyResponseStruct response;
    const NetType net_type = AddressStructApi::ConvertNetType(request.network);
    ExtKeyType key_type = ConvertExtKeyType(request.extkey_type);
    if (request.path.empty()) {
      response.extkey = DeriveExtkeyByPath(
          request.extkey, request.child_number_array, key_type, net_type);
    } else {
      response.extkey = DeriveExtkeyByPathString(
          request.extkey, request.path, key_type, net_type);
    }

    return response;
  };

  CreateExtkeyResponseStruct result;
  result = ExecuteStructApi<
      CreateExtkeyFromParentPathRequestStruct, CreateExtkeyResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

CreateExtkeyResponseStruct HDWalletStructApi::CreateExtkeyFromParentKey(
    const CreateExtkeyFromParentKeyRequestStruct& request) {
  auto call_func = [](const CreateExtkeyFromParentKeyRequestStruct& request)
      -> CreateExtkeyResponseStruct {
    CreateExtkeyResponseStruct response;
    const NetType net_type = AddressStructApi::ConvertNetType(request.network);
    ExtKeyType key_type = ConvertExtKeyType(request.extkey_type);
    uint32_t child_num = request.child_number;
    if (request.hardened) child_num |= 0x80000000U;
    auto bip32_format = ConvertToBip32FormatType(request.bip32_format_type);

    if (key_type == ExtKeyType::kExtPrivkey) {
      Privkey privkey;
      if (Privkey::HasWif(request.parent_key)) {
        privkey = Privkey::FromWif(request.parent_key, net_type);
      } else {
        privkey = Privkey(request.parent_key);
      }
      ExtPrivkey extprivkey(
          net_type, privkey, ByteData256(request.parent_chain_code),
          request.parent_depth, child_num, bip32_format);
      response.extkey = extprivkey.ToString();
    } else {
      ExtPubkey extpubkey(
          net_type, Pubkey(request.parent_key),
          ByteData256(request.parent_chain_code), request.parent_depth,
          child_num, bip32_format);
      response.extkey = extpubkey.ToString();
    }

    return response;
  };

  CreateExtkeyResponseStruct result;
  result = ExecuteStructApi<
      CreateExtkeyFromParentKeyRequestStruct, CreateExtkeyResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

CreateExtkeyResponseStruct HDWalletStructApi::CreateExtkey(
    const CreateExtkeyRequestStruct& request) {
  auto call_func = [](const CreateExtkeyRequestStruct& request)
      -> CreateExtkeyResponseStruct {
    CreateExtkeyResponseStruct response;
    const NetType net_type = AddressStructApi::ConvertNetType(request.network);
    ExtKeyType key_type = ConvertExtKeyType(request.extkey_type);
    uint32_t child_num = request.child_number;
    auto bip32_format = ConvertToBip32FormatType(request.bip32_format_type);

    if (request.hardened) child_num |= 0x80000000U;

    if (key_type == ExtKeyType::kExtPrivkey) {
      Privkey privkey;
      if (request.key.size() == (Privkey::kPrivkeySize * 2)) {
        privkey = Privkey(request.key);
      } else {
        privkey = Privkey::FromWif(request.key, net_type);
      }
      if (request.parent_key.empty()) {
        ExtPrivkey extprivkey(
            net_type, ByteData(request.parent_fingerprint), privkey,
            ByteData256(request.chain_code), request.depth, child_num,
            bip32_format);
        response.extkey = extprivkey.ToString();
      } else {
        Privkey parent_privkey;
        if (request.parent_key.size() == (Privkey::kPrivkeySize * 2)) {
          parent_privkey = Privkey(request.parent_key);
        } else {
          parent_privkey = Privkey::FromWif(request.parent_key, net_type);
        }
        ExtPrivkey extprivkey(
            net_type, parent_privkey, privkey, ByteData256(request.chain_code),
            request.depth, child_num, bip32_format);
        response.extkey = extprivkey.ToString();
      }
    } else {
      if (request.parent_key.empty()) {
        ExtPubkey extpubkey(
            net_type, ByteData(request.parent_fingerprint),
            Pubkey(request.key), ByteData256(request.chain_code),
            request.depth, child_num, bip32_format);
        response.extkey = extpubkey.ToString();
      } else {
        ExtPubkey extpubkey(
            net_type, Pubkey(request.parent_key), Pubkey(request.key),
            ByteData256(request.chain_code), request.depth, child_num,
            bip32_format);
        response.extkey = extpubkey.ToString();
      }
    }

    return response;
  };

  CreateExtkeyResponseStruct result;
  result =
      ExecuteStructApi<CreateExtkeyRequestStruct, CreateExtkeyResponseStruct>(
          request, call_func, std::string(__FUNCTION__));
  return result;
}

CreateExtkeyResponseStruct HDWalletStructApi::CreateExtPubkey(
    const CreateExtPubkeyRequestStruct& request) {
  auto call_func = [](const CreateExtPubkeyRequestStruct& request)
      -> CreateExtkeyResponseStruct {
    CreateExtkeyResponseStruct response;
    const NetType net_type = AddressStructApi::ConvertNetType(request.network);

    ExtPrivkey privkey(request.extkey);
    CheckExtkeyNetworkType(net_type, privkey.GetNetworkType());
    response.extkey = privkey.GetExtPubkey().ToString();
    return response;
  };

  CreateExtkeyResponseStruct result;
  result = ExecuteStructApi<
      CreateExtPubkeyRequestStruct, CreateExtkeyResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

GetExtkeyInfoResponseStruct HDWalletStructApi::GetExtkeyInfo(
    const GetExtkeyInfoRequestStruct& request) {
  auto call_func = [](const GetExtkeyInfoRequestStruct& request)
      -> GetExtkeyInfoResponseStruct {
    GetExtkeyInfoResponseStruct response;

    try {
      ExtPrivkey privkey(request.extkey);
      response.network =
          AddressStructApi::ConvertNetTypeString(privkey.GetNetworkType());
      response.version = privkey.GetVersionData().GetHex();
      response.depth = privkey.GetDepth();
      response.fingerprint = privkey.GetFingerprintData().GetHex();
      response.chain_code = privkey.GetChainCode().GetHex();
      response.child_number = privkey.GetChildNum();
      response.key_type = "extprivkey";
      return response;
    } catch (...) {
      // fall-through
    }

    ExtPubkey pubkey(request.extkey);
    response.network =
        AddressStructApi::ConvertNetTypeString(pubkey.GetNetworkType());
    response.version = pubkey.GetVersionData().GetHex();
    response.depth = pubkey.GetDepth();
    response.fingerprint = pubkey.GetFingerprintData().GetHex();
    response.chain_code = pubkey.GetChainCode().GetHex();
    response.child_number = pubkey.GetChildNum();
    response.key_type = "extpubkey";
    return response;
  };

  GetExtkeyInfoResponseStruct result;
  result = ExecuteStructApi<
      GetExtkeyInfoRequestStruct, GetExtkeyInfoResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

GetPrivkeyFromExtkeyResponseStruct HDWalletStructApi::GetPrivkeyFromExtkey(
    const GetPrivkeyFromExtkeyRequestStruct& request) {
  auto call_func = [](const GetPrivkeyFromExtkeyRequestStruct& request)
      -> GetPrivkeyFromExtkeyResponseStruct {
    GetPrivkeyFromExtkeyResponseStruct response;
    const NetType net_type = AddressStructApi::ConvertNetType(request.network);

    ExtPrivkey ext_privkey(request.extkey);
    NetType key_net_type = ext_privkey.GetNetworkType();
    bool is_mainnet = (net_type == NetType::kMainnet);
    bool is_key_mainnet = (key_net_type == NetType::kMainnet);
    if (is_mainnet != is_key_mainnet) {
      warn(CFD_LOG_SOURCE, "network unmatch. {},{}", net_type, key_net_type);
      throw CfdException(
          CfdError::kCfdIllegalArgumentError, "extkey networkType unmatch.");
    }

    if (request.wif) {
      response.privkey =
          ext_privkey.GetPrivkey().ConvertWif(net_type, request.is_compressed);
    } else {
      response.privkey = ext_privkey.GetPrivkey().GetHex();
    }
    return response;
  };

  GetPrivkeyFromExtkeyResponseStruct result;
  result = ExecuteStructApi<
      GetPrivkeyFromExtkeyRequestStruct, GetPrivkeyFromExtkeyResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

PubkeyDataStruct HDWalletStructApi::GetPubkeyFromExtkey(
    const GetPubkeyFromExtkeyRequestStruct& request) {
  auto call_func =
      [](const GetPubkeyFromExtkeyRequestStruct& request) -> PubkeyDataStruct {
    PubkeyDataStruct response;
    NetType net_type = AddressStructApi::ConvertNetType(request.network);
    NetType key_net_type;

    KeyData key_data(request.extkey);
    if (key_data.HasExtPrivkey()) {
      ExtPrivkey ext_privkey(request.extkey);
      response.pubkey = ext_privkey.GetExtPubkey().GetPubkey().GetHex();
      key_net_type = ext_privkey.GetNetworkType();
    } else {
      ExtPubkey ext_pubkey(request.extkey);
      response.pubkey = ext_pubkey.GetPubkey().GetHex();
      key_net_type = ext_pubkey.GetNetworkType();
    }
    bool is_mainnet = (net_type == NetType::kMainnet);
    bool is_key_mainnet = (key_net_type == NetType::kMainnet);
    if (is_mainnet != is_key_mainnet) {
      warn(CFD_LOG_SOURCE, "network unmatch. {},{}", net_type, key_net_type);
      throw CfdException(
          CfdError::kCfdIllegalArgumentError, "extkey networkType unmatch.");
    }
    return response;
  };

  PubkeyDataStruct result;
  result =
      ExecuteStructApi<GetPubkeyFromExtkeyRequestStruct, PubkeyDataStruct>(
          request, call_func, std::string(__FUNCTION__));
  return result;
}

ExtKeyType HDWalletStructApi::ConvertExtKeyType(const std::string& key_type) {
  ExtKeyType result;
  auto lower_type = StringUtil::ToLower(key_type);
  if (lower_type == "extprivkey") {
    result = ExtKeyType::kExtPrivkey;
  } else if (lower_type == "extpubkey") {
    result = ExtKeyType::kExtPubkey;
  } else {
    warn(
        CFD_LOG_SOURCE,
        "Failed to ExtKeyType. Invalid extkeyType passed: "
        "extkey_type={}",  // NOLINT
        key_type);
    throw CfdException(
        CfdError::kCfdIllegalArgumentError,
        "Invalid extkeyType passed. extkeyType must be "
        "\"extPrivkey\" or \"extPubkey\".");
  }
  return result;
}

}  // namespace api
}  // namespace js
}  // namespace cfd
