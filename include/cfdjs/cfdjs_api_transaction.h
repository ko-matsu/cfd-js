// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_api_transaction.h
 *
 * @brief Definition JSON struct api for bitcoin transaction.
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_API_TRANSACTION_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_API_TRANSACTION_H_

#include <string>
#include <vector>

#include "cfd/cfd_address.h"
#include "cfdcore/cfdcore_script.h"
#include "cfdjs/cfdjs_api_common.h"
#include "cfdjs/cfdjs_struct.h"

namespace cfd {
namespace js {
namespace api {

using cfd::AddressFactory;

/**
 * @brief JSON struct api for bitcoin transaction.
 */
class CFD_JS_API_EXPORT TransactionStructApi {
 public:
  /**
   * @brief Create the elemens transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct CreateRawTransaction(
      const CreateRawTransactionRequestStruct& request);

  /**
   * @brief Add the tx input/output for elements transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct AddRawTransaction(
      const AddRawTransactionRequestStruct& request);

  /**
   * @brief Decode transaction from hex.
   * @param[in] request     request parameter.
   * @return response.
   */
  static DecodeRawTransactionResponseStruct DecodeRawTransaction(
      const DecodeRawTransactionRequestStruct& request);

  /**
   * @brief Get the witness stack count.
   * @param[in] request     request parameter.
   * @return response.
   */
  static GetWitnessStackNumResponseStruct GetWitnessStackNum(
      const GetWitnessStackNumRequestStruct& request);

  /**
   * @brief Add sign data.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct AddSign(
      const AddSignRequestStruct& request);

  /**
   * @brief Add the multisig sign.
   * @details The order of the signatures to be added is automatically
   * aligned by the correspondence between the pubkey in the redeem script
   * and the relatedPubkey in signParam.
   * If relatedPubkey is not set, add signatures in the order of signParam
   * after adding signatures with relatedPubkey.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct AddMultisigSign(
      const AddMultisigSignRequestStruct& request);

  /**
   * @brief Sign with privkey.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct SignWithPrivkey(
      const SignWithPrivkeyRequestStruct& request);

  /**
   * @brief Add pubkey hash sign.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct AddPubkeyHashSign(
      const AddPubkeyHashSignRequestStruct& request);

  /**
   * @brief Add script hash sign data.
   * @param[in] request     tx and sign data.
   * @return transaction data.
   */
  static RawTransactionResponseStruct AddScriptHashSign(
      const AddScriptHashSignRequestStruct& request);

  /**
   * @brief Update the witness stack.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct UpdateWitnessStack(
      const UpdateWitnessStackRequestStruct& request);

  /**
   * @brief Update sequence number.
   * @param[in] request     request parameter.
   * @return transaction hex.
   */
  static RawTransactionResponseStruct UpdateTxInSequence(
      const UpdateTxInSequenceRequestStruct& request);

  /**
   * @brief Create signature hash.
   * @param[in] request     creating signature hash data.
   * @return signature hash data.
   */
  static CreateSignatureHashResponseStruct CreateSignatureHash(
      const CreateSignatureHashRequestStruct& request);

  /**
   * @brief Implements getting sighash api for JSON.
   * @param[in] request     request data.
   * @return response data.
   */
  static CreateSignatureHashResponseStruct GetSighash(
      const GetSighashRequestStruct& request);

  /**
   * @brief Implements taproot sign api for JSON.
   * @param[in] request     request data.
   * @return response data.
   */
  static RawTransactionResponseStruct AddTaprootSchnorrSign(
      const AddTaprootSchnorrSignRequestStruct& request);

  /**
   * @brief Implements tapscript sign api for JSON.
   * @param[in] request     request data.
   * @return response data.
   */
  static RawTransactionResponseStruct AddTapscriptSign(
      const AddTapscriptSignRequestStruct& request);

  /**
   * @brief Verify ECDSA signature.
   * @param[in] request     signature verification data.
   * @return response of signature verification.
   */
  static VerifySignatureResponseStruct VerifySignature(
      const VerifySignatureRequestStruct& request);

  /**
   * @brief Verify sign.
   * @param[in] request     sign verification data.
   * @return response of sign verification.
   */
  static VerifySignResponseStruct VerifySign(
      const VerifySignRequestStruct& request);

  /**
   * @brief Update the transaction amount.
   * @param[in] request   transaction and changing amount data struct.
   * @return Updating transaction struct.
   */
  static RawTransactionResponseStruct UpdateTxOutAmount(
      const UpdateTxOutAmountRequestStruct& request);

  /**
   * @brief Split the transaction output.
   * @param[in] request   transaction and changing amount data struct.
   * @return transaction struct.
   */
  static RawTransactionResponseStruct SplitTxOut(
      const SplitTxOutRequestStruct& request);

  /**
   * @brief Get the transaction input index data.
   * @param[in] request   getting txin index struct.
   * @return index data struct.
   */
  static GetIndexDataStruct GetTxInIndex(
      const GetTxInIndexRequestStruct& request);

  /**
   * @brief Get the transaction output index data.
   * @param[in] request   getting txout index struct.
   * @return index data struct.
   */
  static GetIndexDataStruct GetTxOutIndex(
      const GetTxOutIndexRequestStruct& request);

  /**
   * @brief Convert from locking script.
   * @param[in] factory     address factory
   * @param[in] script      locking script
   * @param[out] script_type    script type
   * @param[out] require_num    multisig require num
   * @return address list
   */
  static std::vector<Address> ConvertFromLockingScript(
      const AddressFactory& factory, const Script& script,
      std::string* script_type, int64_t* require_num);

 private:
  TransactionStructApi();
};

}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_API_TRANSACTION_H_
