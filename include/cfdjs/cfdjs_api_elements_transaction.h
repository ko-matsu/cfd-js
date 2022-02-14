// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_api_elements_transaction.h
 *
 * @brief definition for elements transaction operation api.
 *
 * Provide json format API.
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_API_ELEMENTS_TRANSACTION_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_API_ELEMENTS_TRANSACTION_H_
#ifndef CFD_DISABLE_ELEMENTS

#include <string>
#include <vector>

#include "cfdjs/cfdjs_api_common.h"
#include "cfdjs/cfdjs_struct.h"

/**
 * @brief cfdapi namespace
 */
namespace cfd {
namespace js {
namespace api {

/**
 * @brief elements transaction api class.
 */
class CFD_JS_API_EXPORT ElementsTransactionStructApi {
 public:
  /**
   * @brief Create the elemens transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct CreateRawTransaction(
      const ElementsCreateRawTransactionRequestStruct& request);

  /**
   * @brief Add the tx input/output for elements transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static ElementsAddRawTransactionResponseStruct AddRawTransaction(
      const ElementsAddRawTransactionRequestStruct& request);

  /**
   * @brief Decode transaction from hex.
   * @param[in] request     request parameter.
   * @return response.
   */
  static ElementsDecodeRawTransactionResponseStruct DecodeRawTransaction(
      const ElementsDecodeRawTransactionRequestStruct& request);

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
   * @brief Add script hash sign.
   * @param[in] request     request parameter.
   * @return response.
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
   * @brief Create signature hash (under segwit v0).
   * @param[in] request     request parameter.
   * @return response.
   */
  static CreateSignatureHashResponseStruct CreateSignatureHash(
      const CreateElementsSignatureHashRequestStruct& request);

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
   * @brief Verify signature.
   * @param[in] request     request parameter.
   * @return response.
   */
  static VerifySignatureResponseStruct VerifySignature(
      const VerifySignatureRequestStruct& request);

  /**
   * @brief Verify sign.
   * @param[in] request     request parameter.
   * @return response.
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
   * @brief Blind the transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static BlindTransactionResponseStruct BlindTransaction(
      const BlindRawTransactionRequestStruct& request);

  /**
   * @brief Unblind the transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static UnblindRawTransactionResponseStruct UnblindTransaction(
      const UnblindRawTransactionRequestStruct& request);

  /**
   * @brief Set the issuance asset for transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static SetRawIssueAssetResponseStruct SetRawIssueAsset(
      const SetRawIssueAssetRequestStruct& request);

  /**
   * @brief Set the reissuance asset for transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static SetRawReissueAssetResponseStruct SetRawReissueAsset(
      const SetRawReissueAssetRequestStruct& request);

  /**
   * @brief Create the pegin transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct CreateRawPeginTransaction(  // NOLINT
      const CreateRawPeginRequestStruct& request);

  /**
   * @brief Update pegin witness stack.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct UpdatePeginWitnessStack(
      const UpdateWitnessStackRequestStruct& request);

  /**
   * @brief Create the pegout transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static CreateRawPegoutResponseStruct CreateRawPegoutTransaction(
      const CreateRawPegoutRequestStruct& request);

  /**
   * @brief Get the issuance blinding key.
   * @param[in] request     request parameter.
   * @return response.
   */
  static BlindingKeyResponseStruct GetIssuanceBlindingKey(
      const GetIssuanceBlindingKeyRequestStruct& request);

  /**
   * @brief Get the default blinding key.
   * @param[in] request     request parameter.
   * @return response.
   */
  static BlindingKeyResponseStruct GetDefaultBlindingKey(
      const GetDefaultBlindingKeyRequestStruct& request);

  /**
   * @brief Create the burn asset transaction.
   * @param[in] request     request parameter.
   * @return response.
   */
  static RawTransactionResponseStruct CreateDestroyAmountTransaction(
      const CreateDestroyAmountRequestStruct& request);

  /**
   * @brief Serialize ledger format data.
   * @param[in] request     request parameter.
   * @return response.
   */
  static SerializeLedgerFormatResponseStruct SerializeLedgerFormat(
      const SerializeLedgerFormatRequestStruct& request);

  /**
   * @brief Get the commitment data.
   * @param[in] request     request parameter.
   * @return response.
   */
  static GetCommitmentResponseStruct GetCommitment(
      const GetCommitmentRequestStruct& request);

  /**
   * @brief Get the unblind data.
   * @param[in] request     request data.
   * @return unblind data.
   */
  static UnblindOutputStruct GetUnblindData(
      const GetUnblindDataRequestStruct& request);
};

}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_DISABLE_ELEMENTS
#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_API_ELEMENTS_TRANSACTION_H_
