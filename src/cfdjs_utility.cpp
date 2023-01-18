// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_utility.cpp
 *
 * @brief Implementation files for common classes used by cfd-api.
 */
#include <string>
#include <vector>

#include "cfd/cfd_common.h"
#include "cfd_js_api_json_autogen.h"  // NOLINT
#include "cfdcore/cfdcore_address.h"
#include "cfdcore/cfdcore_bytedata.h"
#include "cfdcore/cfdcore_exception.h"
#include "cfdcore/cfdcore_key.h"
#include "cfdcore/cfdcore_logger.h"
#include "cfdcore/cfdcore_util.h"
#include "cfdjs/cfdjs_api_utility.h"
#include "cfdjs_internal.h"          // NOLINT
#include "cfdjs_transaction_base.h"  // NOLINT

namespace cfd {
namespace js {
namespace api {

using cfd::GetSupportedFunction;
using cfd::LibraryFunction;
using cfd::core::ByteData;
using cfd::core::ByteData160;
using cfd::core::ByteData256;
using cfd::core::CfdError;
using cfd::core::CfdException;
using cfd::core::CryptoUtil;
using cfd::core::HashUtil;
using cfd::core::SigHashType;
using cfd::core::logger::warn;

GetSupportedFunctionResponseStruct UtilStructApi::GetSupportedFunction() {
  auto call_func = []() -> GetSupportedFunctionResponseStruct {
    GetSupportedFunctionResponseStruct result;
    uint64_t support_function = cfd::GetSupportedFunction();
    result.bitcoin = false;
    if (support_function & LibraryFunction::kEnableBitcoin) {
      result.bitcoin = true;
    }
    result.elements = false;
    if (support_function & LibraryFunction::kEnableElements) {
      result.elements = true;
    }
    return result;
  };

  GetSupportedFunctionResponseStruct result;
  result = ExecuteResponseStructApi<GetSupportedFunctionResponseStruct>(
      call_func, std::string(__FUNCTION__));
  return result;
}

ConvertAesResponseStruct UtilStructApi::ConvertAes(
    const ConvertAesRequestStruct& request) {
  auto call_func =
      [](const ConvertAesRequestStruct& request) -> ConvertAesResponseStruct {
    ConvertAesResponseStruct result;
    ByteData data;

    if (request.is_encrypt) {
      data = CryptoUtil::EncryptAes256Cbc(
          ByteData(request.key), ByteData(request.iv), ByteData(request.data));
    } else {  // decrypto
      data = CryptoUtil::DecryptAes256Cbc(
          ByteData(request.key), ByteData(request.iv), ByteData(request.data));
    }

    result.hex = data.GetHex();
    return result;
  };

  ConvertAesResponseStruct result;
  result = ExecuteStructApi<ConvertAesRequestStruct, ConvertAesResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

EncodeBase58ResponseStruct UtilStructApi::EncodeBase58(
    const EncodeBase58RequestStruct& request) {
  auto call_func = [](const EncodeBase58RequestStruct& request)
      -> EncodeBase58ResponseStruct {
    EncodeBase58ResponseStruct result;
    if (request.has_checksum) {
      result.data = CryptoUtil::EncodeBase58Check(ByteData(request.hex));
    } else {
      result.data = CryptoUtil::EncodeBase58(ByteData(request.hex));
    }
    return result;
  };

  EncodeBase58ResponseStruct result;
  result =
      ExecuteStructApi<EncodeBase58RequestStruct, EncodeBase58ResponseStruct>(
          request, call_func, std::string(__FUNCTION__));
  return result;
}

DecodeBase58ResponseStruct UtilStructApi::DecodeBase58(
    const DecodeBase58RequestStruct& request) {
  auto call_func = [](const DecodeBase58RequestStruct& request)
      -> DecodeBase58ResponseStruct {
    DecodeBase58ResponseStruct result;
    ByteData data;
    if (request.has_checksum) {
      data = CryptoUtil::DecodeBase58Check(request.data);
    } else {
      data = CryptoUtil::DecodeBase58(request.data);
    }
    result.hex = data.GetHex();
    return result;
  };

  DecodeBase58ResponseStruct result;
  result =
      ExecuteStructApi<DecodeBase58RequestStruct, DecodeBase58ResponseStruct>(
          request, call_func, std::string(__FUNCTION__));
  return result;
}

Base64DataStruct UtilStructApi::EncodeBase64(const HexDataStruct& request) {
  auto call_func = [](const HexDataStruct& request) -> Base64DataStruct {
    Base64DataStruct result;
    result.base64 = CryptoUtil::EncodeBase64(ByteData(request.hex));
    return result;
  };

  Base64DataStruct result;
  result = ExecuteStructApi<HexDataStruct, Base64DataStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

HexDataStruct UtilStructApi::DecodeBase64(const Base64DataStruct& request) {
  auto call_func = [](const Base64DataStruct& request) -> HexDataStruct {
    HexDataStruct result;
    ByteData data = CryptoUtil::DecodeBase64(request.base64);
    if ((!request.base64.empty()) && data.IsEmpty()) {
      warn(CFD_LOG_SOURCE, "Failed to parameter. Decode base64 error.");
      throw CfdException(
          CfdError::kCfdIllegalArgumentError, "Decode base64 error.");
    }
    result.hex = data.GetHex();
    return result;
  };

  HexDataStruct result;
  result = ExecuteStructApi<Base64DataStruct, HexDataStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

HexDataStruct UtilStructApi::HashMessage(
    const HashMessageRequestStruct& request) {
  auto call_func =
      [](const HashMessageRequestStruct& request) -> HexDataStruct {
    HexDataStruct result;
    std::string algorithm = request.algorithm;
    std::string message = request.message;
    if (algorithm == "hash160") {
      ByteData160 data;
      if (request.has_text) {
        data = HashUtil::Hash160(message);
      } else {
        data = HashUtil::Hash160(ByteData(message));
      }
      result.hex = data.GetHex();
    } else if (algorithm == "ripemd160") {
      ByteData160 data;
      if (request.has_text) {
        data = HashUtil::Ripemd160(message);
      } else {
        data = HashUtil::Ripemd160(ByteData(message));
      }
      result.hex = data.GetHex();
    } else if (algorithm == "sha256") {
      ByteData256 data;
      if (request.has_text) {
        data = HashUtil::Sha256(message);
      } else {
        data = HashUtil::Sha256(ByteData(message));
      }
      result.hex = data.GetHex();
    } else if (algorithm == "hash256") {
      ByteData256 data;
      if (request.has_text) {
        data = HashUtil::Sha256D(message);
      } else {
        data = HashUtil::Sha256D(ByteData(message));
      }
      result.hex = data.GetHex();
    } else {
      warn(CFD_LOG_SOURCE, "Failed to parameter. algorithm is unknown.");
      throw CfdException(
          CfdError::kCfdIllegalArgumentError,
          "Failed to parameter. algorithm is unknown.");
    }
    return result;
  };

  HexDataStruct result;
  result = ExecuteStructApi<HashMessageRequestStruct, HexDataStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

EncodeSignatureByDerResponseStruct UtilStructApi::EncodeSignatureByDer(
    const EncodeSignatureByDerRequestStruct& request) {
  auto call_func = [](const EncodeSignatureByDerRequestStruct& request)
      -> EncodeSignatureByDerResponseStruct {
    EncodeSignatureByDerResponseStruct result;

    SigHashType sighash_type = TransactionStructApiBase::ConvertSigHashType(
        request.sighash_type, request.sighash_anyone_can_pay,
        request.sighash_rangeproof);
    const ByteData der_signature =
        CryptoUtil::ConvertSignatureToDer(request.signature, sighash_type);

    result.signature = der_signature.GetHex();
    return result;
  };

  EncodeSignatureByDerResponseStruct result;
  result = ExecuteStructApi<
      EncodeSignatureByDerRequestStruct, EncodeSignatureByDerResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

SignatureDataResponseStruct UtilStructApi::DecodeDerSignatureToRaw(
    const DecodeDerSignatureToRawRequestStruct& request) {
  auto call_func = [](const DecodeDerSignatureToRawRequestStruct& request)
      -> SignatureDataResponseStruct {
    SignatureDataResponseStruct result;
    auto signature_bytes = ByteData(request.signature);
    const ByteData raw_signature =
        CryptoUtil::ConvertSignatureFromDer(signature_bytes, nullptr);

    result.signature = raw_signature.GetHex();
    return result;
  };

  SignatureDataResponseStruct result;
  result = ExecuteStructApi<
      DecodeDerSignatureToRawRequestStruct, SignatureDataResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

VoidFunctionResponseStruct UtilStructApi::SetCustomPrefix(
    const SetCustomPrefixRequestStruct& request) {
  static auto call_func = [](const SetCustomPrefixRequestStruct& request)
      -> VoidFunctionResponseStruct {
    using cfd::core::kPrefixBlindP2pkh;
    using cfd::core::kPrefixBlindP2sh;
    using cfd::core::kPrefixBlindBech32Hrp;
    using cfd::core::kBip49Ypub;
    using cfd::core::kBip49Yprv;
    using cfd::core::kBip84Zpub;
    using cfd::core::kBip84Zprv;
    using cfd::core::AddressFormatData;
    using cfd::core::KeyFormatData;

    std::string addr_custom_json;
    for (const auto& data : request.address_json_datas) {
      json::AddressPrefixCustomizeData addr_obj;
      addr_obj.ConvertFromStruct(data);
      if (data.blinded.empty()) addr_obj.SetIgnoreItem(kPrefixBlindP2pkh);
      if (data.blinded_p2sh.empty()) addr_obj.SetIgnoreItem(kPrefixBlindP2sh);
      if (data.blech32.empty()) addr_obj.SetIgnoreItem(kPrefixBlindBech32Hrp);
      if (!addr_custom_json.empty()) addr_custom_json += ",";
      addr_custom_json += addr_obj.Serialize();
    }
    if (!addr_custom_json.empty()) {
      addr_custom_json = "[" + addr_custom_json + "]";
      auto list = AddressFormatData::ConvertListFromJson(addr_custom_json);
      cfd::core::SetCustomAddressFormatList(list);
    }

    std::string key_custom_json;
    for (const auto& data : request.key_json_datas) {
      json::KeyPrefixCustomizeData key_obj;
      key_obj.ConvertFromStruct(data);
      if (data.bip49ypub.empty()) key_obj.SetIgnoreItem(kBip49Ypub);
      if (data.bip49yprv.empty()) key_obj.SetIgnoreItem(kBip49Yprv);
      if (data.bip84zpub.empty()) key_obj.SetIgnoreItem(kBip84Zpub);
      if (data.bip84zprv.empty()) key_obj.SetIgnoreItem(kBip84Zprv);
      if (!key_custom_json.empty()) key_custom_json += ",";
      key_custom_json += key_obj.Serialize();
    }
    if (!key_custom_json.empty()) {
      key_custom_json = "[" + key_custom_json + "]";
      auto list = KeyFormatData::ConvertListFromJson(key_custom_json);
      cfd::core::SetCustomKeyFormatList(list);
    }

    VoidFunctionResponseStruct result;
    result.success = true;
    return result;
  };

  VoidFunctionResponseStruct result;
  result = ExecuteStructApi<
      SetCustomPrefixRequestStruct, VoidFunctionResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

VoidFunctionResponseStruct UtilStructApi::ClearCustomPrefix() {
  auto call_func = []() -> VoidFunctionResponseStruct {
    cfd::core::ClearCustomAddressFormatList();
    cfd::core::ClearCustomKeyFormatList();
    VoidFunctionResponseStruct result;
    result.success = true;
    return result;
  };

  VoidFunctionResponseStruct result;
  result = ExecuteResponseStructApi<VoidFunctionResponseStruct>(
      call_func, std::string(__FUNCTION__));
  return result;
}

// Define the entity (Define on CPP side to prevent duplicate definition)
InnerErrorResponseStruct ConvertCfdExceptionToStruct(
    const CfdException& cfde) {
  InnerErrorResponseStruct result;
  result.code = cfde.GetErrorCode();
  result.type = cfde.GetErrorType();
  result.message = cfde.what();
  return result;
}

ByteData256 GetMessage(std::string input, bool is_hashed) {
  if (!is_hashed) {
    return HashUtil::Sha256(input);
  } else {
    return ByteData256(input);
  }
}

}  // namespace api
}  // namespace js
}  // namespace cfd
