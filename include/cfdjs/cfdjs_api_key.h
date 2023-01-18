// Copyright 2020 CryptoGarage
/**
 * @file cfdjs_api_key.h
 *
 * @brief Define key class used in cfd-api.
 *
 * Provide struct format API.
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_API_KEY_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_API_KEY_H_

#include <string>

#include "cfdjs/cfdjs_api_common.h"
#include "cfdjs/cfdjs_struct.h"

/**
 * @brief cfdapi namespace
 */
namespace cfd {
namespace js {
namespace api {

/**
 * @brief key api class.
 */
class CFD_JS_API_EXPORT KeyStructApi {
 public:
  /**
   * @brief Generate the public key and private key.
   * @param[in] request     request parameter.
   * @return response.
   */
  static CreateKeyPairResponseStruct CreateKeyPair(
      const CreateKeyPairRequestStruct& request);

  /**
   * @brief Create the ec signature.
   * @param[in] request     request parameter.
   * @return ec signature
   */
  static SignatureDataResponseStruct CalculateEcSignature(
      const CalculateEcSignatureRequestStruct& request);

  /**
   * @brief Verify signature.
   * @param[in] request     request parameter.
   * @return verify result
   */
  static VerifySignatureResponseStruct VerifySignature(
      const VerifySignatureWithPubkeyRequestStruct& request);

  /**
   * @brief Get privkey's hex from WIF.
   * @param[in] request  parameter into WIF.
   * @return hex, networkType, isCompressed.
   */
  static PrivkeyHexDataStruct GetPrivkeyFromWif(
      const PrivkeyWifDataStruct& request);

  /**
   * @brief Get WIF from privkey's hex.
   * @param[in] request  pribkey hex, networkType, isCompressed.
   * @return WIF
   */
  static PrivkeyWifDataStruct GetPrivkeyWif(
      const PrivkeyHexDataStruct& request);

  /**
   * @brief Get the tweaked public key based on the JSON parameter information.
   * @param[in] request     Request structure
   * @return Response structure containing pubkey
   */
  static OutputPrivkeyDataStruct TweakAddPrivkey(
      const TweakPrivkeyDataStruct& request);

  /**
   * @brief Get the tweaked public key based on the JSON parameter information.
   * @param[in] request     Request structure
   * @return Response structure containing pubkey
   */
  static OutputPrivkeyDataStruct TweakMulPrivkey(
      const TweakPrivkeyDataStruct& request);

  /**
   * @brief Get the negated public key based on the JSON parameter information.
   * @param[in] request     Request structure
   * @return Response structure containing pubkey
   */
  static OutputPrivkeyDataStruct NegatePrivkey(
      const PrivkeyDataStruct& request);

  /**
   * @brief Get a public key from a private key.
   * @param[in] request     request parameter.
   * @return response.
   */
  static PubkeyDataStruct GetPubkeyFromPrivkey(
      const GetPubkeyFromPrivkeyRequestStruct& request);

  /**
   * @brief Get a x-only public key from a private key.
   * @param[in] request     request parameter.
   * @return response.
   */
  static SchnorrPubkeyDataStruct GetSchnorrPubkeyFromPrivkey(
      const GetSchnorrPubkeyFromPrivkeyRequestStruct& request);

  /**
   * @brief Get a compressed public key.
   * @param[in] request     request parameter.
   * @return response.
   */
  static PubkeyDataStruct GetCompressedPubkey(const PubkeyDataStruct& request);

  /**
   * @brief Get the uncompressed public key based on the JSON parameter information.
   * @param[in] request     Request structure
   * @return Response structure containing pubkey
   */
  static PubkeyDataStruct GetUncompressedPubkey(
      const PubkeyDataStruct& request);

  /**
   * @brief Get the combined public key based on the JSON parameter information.
   * @param[in] request     Request structure
   * @return Response structure containing pubkey
   */
  static PubkeyDataStruct CombinePubkey(const PubkeyListDataStruct& request);

  /**
   * @brief Get the tweaked public key based on the JSON parameter information.
   * @param[in] request     Request structure
   * @return Response structure containing pubkey
   */
  static PubkeyDataStruct TweakAddPubkey(const TweakPubkeyDataStruct& request);

  /**
   * @brief Get the tweaked public key based on the JSON parameter information.
   * @param[in] request     Request structure
   * @return Response structure containing pubkey
   */
  static PubkeyDataStruct TweakMulPubkey(const TweakPubkeyDataStruct& request);

  /**
   * @brief Get the negated public key based on the JSON parameter information.
   * @param[in] request     Request structure
   * @return Response structure containing pubkey
   */
  static PubkeyDataStruct NegatePubkey(const PubkeyDataStruct& request);

  /**
   * @brief Sign message.
   * @param[in] request     Request structure
   * @return Response structure
   */
  static SignMessageResponseStruct SignMessage(
      const SignMessageRequestStruct& request);

  /**
   * @brief Verify message.
   * @param[in] request     Request structure
   * @return Response structure
   */
  static VerifyMessageResponseStruct VerifyMessage(
      const VerifyMessageRequestStruct& request);

 private:
  KeyStructApi();
};

}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_API_KEY_H_
