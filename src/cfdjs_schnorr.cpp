// Copyright 2020 CryptoGarage
/**
 * @file cfdjs_schnorr.cpp
 *
 * @brief cfd-apiで利用するTransaction作成の実装ファイル
 */
#include "cfdjs_schnorr.h"  // NOLINT

#include <string>

#include "cfdcore/cfdcore_schnorrsig.h"
#include "cfdcore/cfdcore_util.h"
#include "cfdjs_internal.h"  // NOLINT

using cfd::core::ByteData256;
using cfd::core::HashUtil;
using cfd::core::Privkey;
using cfd::core::SchnorrPubkey;
using cfd::core::SchnorrSignature;
using cfd::core::SchnorrUtil;

namespace cfd {
namespace js {
namespace api {
namespace json {

SchnorrPubkeyDataStruct SchnorrApi::GetSchnorrPubkeyFromPrivkey(
    const GetSchnorrPubkeyFromPrivkeyRequestStruct& request) {
  auto call_func = [](const GetSchnorrPubkeyFromPrivkeyRequestStruct& request)
      -> SchnorrPubkeyDataStruct {
    SchnorrPubkeyDataStruct response;

    Privkey privkey(request.privkey);
    auto pubkey = SchnorrPubkey::FromPrivkey(privkey);
    response.pubkey = pubkey.GetData().GetHex();
    return response;
  };

  SchnorrPubkeyDataStruct result;
  result = ExecuteStructApi<
      GetSchnorrPubkeyFromPrivkeyRequestStruct, SchnorrPubkeyDataStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

/**
 * @brief Return a ByteData256 object from a string and hash it before if requested
 *
 * @param input the message as a string
 * @param is_hashed whether to has the message
 * @return ByteData256
 */
static ByteData256 GetMessage(std::string input, bool is_hashed) {
  if (!is_hashed) {
    return HashUtil::Sha256(input);
  } else {
    return ByteData256(input);
  }
}

SchnorrSignResponseStruct SchnorrApi::SchnorrSign(
    const SchnorrSignRequestStruct& request) {
  auto call_func = [](const SchnorrSignRequestStruct& request)
      -> SchnorrSignResponseStruct {
    SchnorrSignResponseStruct response;
    Privkey privkey(request.privkey);
    ByteData256 message = GetMessage(request.message, request.is_hashed);

    if (request.is_nonce) {
      Privkey nonce(request.nonce_or_aux);
      response.hex = SchnorrUtil::SignWithNonce(message, privkey, nonce)
                         .GetData()
                         .GetHex();
    } else {
      ByteData256 aux(request.nonce_or_aux);
      response.hex =
          SchnorrUtil::Sign(message, privkey, aux).GetData().GetHex();
    }

    return response;
  };

  SchnorrSignResponseStruct result;
  result =
      ExecuteStructApi<SchnorrSignRequestStruct, SchnorrSignResponseStruct>(
          request, call_func, std::string(__FUNCTION__));
  return result;
}

SchnorrVerifyResponseStruct SchnorrApi::SchnorrVerify(
    const SchnorrVerifyRequestStruct& request) {
  auto call_func = [](const SchnorrVerifyRequestStruct& request)
      -> SchnorrVerifyResponseStruct {
    SchnorrVerifyResponseStruct response;
    SchnorrPubkey pubkey(request.pubkey);
    SchnorrSignature signature(request.signature);
    ByteData256 message = GetMessage(request.message, request.is_hashed);

    response.valid = SchnorrUtil::Verify(signature, message, pubkey);

    return response;
  };
  SchnorrVerifyResponseStruct result;
  result = ExecuteStructApi<
      SchnorrVerifyRequestStruct, SchnorrVerifyResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}
}  // namespace json

}  // namespace api
}  // namespace js
}  // namespace cfd
