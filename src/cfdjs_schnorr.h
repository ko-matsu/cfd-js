// Copyright 2020 CryptoGarage
/**
 * @file cfdjs_schnorr.h
 *
 * @brief cfd-apiで利用するTransaction作成のクラス定義
 *
 * JSON形式のAPIを提供する.
 */
#ifndef CFD_JS_SRC_CFDJS_SCHNORR_H_
#define CFD_JS_SRC_CFDJS_SCHNORR_H_

#include "cfd_js_api_json_autogen.h"  // NOLINT

namespace cfd {
namespace js {
namespace api {
namespace json {

/**
 * @brief Class containing static functions to work with Schnorr signatures.
 *
 */
class SchnorrApi {
 public:
  /**
   * @brief Get a SchnorrPubkey from a Privkey object
   *
   * @param request the request
   * @return SchnorrPubkeyDataStruct
   */
  static SchnorrPubkeyDataStruct GetSchnorrPubkeyFromPrivkey(
      const GetSchnorrPubkeyFromPrivkeyRequestStruct& request);

  /**
   * @brief Obtain a Schnorr signature.
   *
   * @param request the request
   * @return SchnorrSignResponseStruct
   */
  static SchnorrSignResponseStruct SchnorrSign(
      const SchnorrSignRequestStruct& request);

  /**
   * @brief Verify a Schnorr signature.
   *
   * @param request the request
   * @return SchnorrVerifyResponseStruct
   */
  static SchnorrVerifyResponseStruct SchnorrVerify(
      const SchnorrVerifyRequestStruct& request);
};

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDJS_SCHNORR_H_
