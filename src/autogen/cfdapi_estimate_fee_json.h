// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_estimate_fee_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ESTIMATE_FEE_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ESTIMATE_FEE_JSON_H_

#include <set>
#include <string>
#include <vector>

#include "cfdcore/cfdcore_json_mapping_base.h"

#include "cfdjs/cfdjs_struct.h"

namespace cfd {
namespace js {
namespace api {
namespace json {

using cfd::core::JsonClassBase;
using cfd::core::JsonObjectVector;
using cfd::core::JsonValueVector;
using cfd::core::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// SelectUtxoData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (SelectUtxoData) class
 */
class SelectUtxoData
  : public cfd::core::JsonClassBase<SelectUtxoData> {
 public:
  SelectUtxoData() {
    CollectFieldName();
  }
  virtual ~SelectUtxoData() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of txid
   * @return txid
   */
  std::string GetTxid() const {
    return txid_;
  }
  /**
   * @brief Set to txid
   * @param[in] txid    setting value.
   */
  void SetTxid(  // line separate
    const std::string& txid) {  // NOLINT
    this->txid_ = txid;
  }
  /**
   * @brief Get data type of txid
   * @return Data type of txid
   */
  static std::string GetTxidFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of txid field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTxidString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.txid_, json_value);
  }

  /**
   * @brief Get of vout
   * @return vout
   */
  uint32_t GetVout() const {
    return vout_;
  }
  /**
   * @brief Set to vout
   * @param[in] vout    setting value.
   */
  void SetVout(  // line separate
    const uint32_t& vout) {  // NOLINT
    this->vout_ = vout;
  }
  /**
   * @brief Get data type of vout
   * @return Data type of vout
   */
  static std::string GetVoutFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of vout field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetVoutString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
  }

  /**
   * @brief Get of asset
   * @return asset
   */
  std::string GetAsset() const {
    return asset_;
  }
  /**
   * @brief Set to asset
   * @param[in] asset    setting value.
   */
  void SetAsset(  // line separate
    const std::string& asset) {  // NOLINT
    this->asset_ = asset;
  }
  /**
   * @brief Get data type of asset
   * @return Data type of asset
   */
  static std::string GetAssetFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of asset field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAssetString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
  }

  /**
   * @brief Get of redeemScript
   * @return redeemScript
   */
  std::string GetRedeemScript() const {
    return redeem_script_;
  }
  /**
   * @brief Set to redeemScript
   * @param[in] redeem_script    setting value.
   */
  void SetRedeemScript(  // line separate
    const std::string& redeem_script) {  // NOLINT
    this->redeem_script_ = redeem_script;
  }
  /**
   * @brief Get data type of redeemScript
   * @return Data type of redeemScript
   */
  static std::string GetRedeemScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of redeemScript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetRedeemScriptString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief Set json object to redeemScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRedeemScriptString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.redeem_script_, json_value);
  }

  /**
   * @brief Get of descriptor
   * @return descriptor
   */
  std::string GetDescriptor() const {
    return descriptor_;
  }
  /**
   * @brief Set to descriptor
   * @param[in] descriptor    setting value.
   */
  void SetDescriptor(  // line separate
    const std::string& descriptor) {  // NOLINT
    this->descriptor_ = descriptor;
  }
  /**
   * @brief Get data type of descriptor
   * @return Data type of descriptor
   */
  static std::string GetDescriptorFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of descriptor field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetDescriptorString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.descriptor_);
  }
  /**
   * @brief Set json object to descriptor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDescriptorString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.descriptor_, json_value);
  }

  /**
   * @brief Get of isIssuance
   * @return isIssuance
   */
  bool GetIsIssuance() const {
    return is_issuance_;
  }
  /**
   * @brief Set to isIssuance
   * @param[in] is_issuance    setting value.
   */
  void SetIsIssuance(  // line separate
    const bool& is_issuance) {  // NOLINT
    this->is_issuance_ = is_issuance;
  }
  /**
   * @brief Get data type of isIssuance
   * @return Data type of isIssuance
   */
  static std::string GetIsIssuanceFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isIssuance field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsIssuanceString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_issuance_);
  }
  /**
   * @brief Set json object to isIssuance field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsIssuanceString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_issuance_, json_value);
  }

  /**
   * @brief Get of isBlindIssuance
   * @return isBlindIssuance
   */
  bool GetIsBlindIssuance() const {
    return is_blind_issuance_;
  }
  /**
   * @brief Set to isBlindIssuance
   * @param[in] is_blind_issuance    setting value.
   */
  void SetIsBlindIssuance(  // line separate
    const bool& is_blind_issuance) {  // NOLINT
    this->is_blind_issuance_ = is_blind_issuance;
  }
  /**
   * @brief Get data type of isBlindIssuance
   * @return Data type of isBlindIssuance
   */
  static std::string GetIsBlindIssuanceFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isBlindIssuance field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsBlindIssuanceString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_blind_issuance_);
  }
  /**
   * @brief Set json object to isBlindIssuance field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsBlindIssuanceString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_blind_issuance_, json_value);
  }

  /**
   * @brief Get of isPegin
   * @return isPegin
   */
  bool GetIsPegin() const {
    return is_pegin_;
  }
  /**
   * @brief Set to isPegin
   * @param[in] is_pegin    setting value.
   */
  void SetIsPegin(  // line separate
    const bool& is_pegin) {  // NOLINT
    this->is_pegin_ = is_pegin;
  }
  /**
   * @brief Get data type of isPegin
   * @return Data type of isPegin
   */
  static std::string GetIsPeginFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isPegin field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsPeginString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_pegin_);
  }
  /**
   * @brief Set json object to isPegin field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsPeginString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_pegin_, json_value);
  }

  /**
   * @brief Get of peginBtcTxSize
   * @return peginBtcTxSize
   */
  int64_t GetPeginBtcTxSize() const {
    return pegin_btc_tx_size_;
  }
  /**
   * @brief Set to peginBtcTxSize
   * @param[in] pegin_btc_tx_size    setting value.
   */
  void SetPeginBtcTxSize(  // line separate
    const int64_t& pegin_btc_tx_size) {  // NOLINT
    this->pegin_btc_tx_size_ = pegin_btc_tx_size;
  }
  /**
   * @brief Get data type of peginBtcTxSize
   * @return Data type of peginBtcTxSize
   */
  static std::string GetPeginBtcTxSizeFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of peginBtcTxSize field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetPeginBtcTxSizeString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.pegin_btc_tx_size_);
  }
  /**
   * @brief Set json object to peginBtcTxSize field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetPeginBtcTxSizeString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.pegin_btc_tx_size_, json_value);
  }

  /**
   * @brief Get of fedpegScript
   * @return fedpegScript
   */
  std::string GetFedpegScript() const {
    return fedpeg_script_;
  }
  /**
   * @brief Set to fedpegScript
   * @param[in] fedpeg_script    setting value.
   */
  void SetFedpegScript(  // line separate
    const std::string& fedpeg_script) {  // NOLINT
    this->fedpeg_script_ = fedpeg_script;
  }
  /**
   * @brief Get data type of fedpegScript
   * @return Data type of fedpegScript
   */
  static std::string GetFedpegScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of fedpegScript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetFedpegScriptString(  // line separate
      const SelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fedpeg_script_);
  }
  /**
   * @brief Set json object to fedpegScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFedpegScriptString(  // line separate
      SelectUtxoData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fedpeg_script_, json_value);
  }

  /**
   * @brief Set ignore item.
   * @param[in] key   ignore target key name.
   */
  void SetIgnoreItem(const std::string& key) {
    ignore_items.insert(key);
  }

  /**
   * @brief Convert struct to class.
   * @param[in] data   struct data.
   */
  void ConvertFromStruct(
      const SelectUtxoDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  SelectUtxoDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using SelectUtxoDataMapTable =
    cfd::core::JsonTableMap<SelectUtxoData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const SelectUtxoDataMapTable& GetJsonMapper() const {  // NOLINT
    return json_mapper;
  }
  /**
   * @brief Get item lists of JSON mapping.
   * Fetch a list of target variable names in the order of definition.
   * @return Item lists of JSON mapping.
   * @see cfd::core::JsonClassBase::GetJsonItemList()
   */
  virtual const std::vector<std::string>& GetJsonItemList() const {
    return item_list;
  }
  /**
   * @brief Get ignore item lists of JSON mnapping.
   * Ignore the target variable at Serialize.
   * @return Item list of JSON mapping.
   * @see cfd::core::JsonClassBase::GetIgnoreItem()
   */
  virtual const std::set<std::string>& GetIgnoreItem() const {
    return ignore_items;
  }

 private:
 /**
  * @brief JsonFunctionMap table
  */
  static SelectUtxoDataMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(txid) value
   */
  std::string txid_ = "";
  /**
   * @brief JsonAPI(vout) value
   */
  uint32_t vout_ = 0;
  /**
   * @brief JsonAPI(asset) value
   */
  std::string asset_ = "";
  /**
   * @brief JsonAPI(redeemScript) value
   */
  std::string redeem_script_ = "";
  /**
   * @brief JsonAPI(descriptor) value
   */
  std::string descriptor_ = "";
  /**
   * @brief JsonAPI(isIssuance) value
   */
  bool is_issuance_ = false;
  /**
   * @brief JsonAPI(isBlindIssuance) value
   */
  bool is_blind_issuance_ = false;
  /**
   * @brief JsonAPI(isPegin) value
   */
  bool is_pegin_ = false;
  /**
   * @brief JsonAPI(peginBtcTxSize) value
   */
  int64_t pegin_btc_tx_size_ = 0;
  /**
   * @brief JsonAPI(fedpegScript) value
   */
  std::string fedpeg_script_ = "";
};

// ------------------------------------------------------------------------
// EstimateFeeRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (EstimateFeeRequest) class
 */
class EstimateFeeRequest
  : public cfd::core::JsonClassBase<EstimateFeeRequest> {
 public:
  EstimateFeeRequest() {
    CollectFieldName();
  }
  virtual ~EstimateFeeRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of selectUtxos.
   * @return selectUtxos
   */
  JsonObjectVector<SelectUtxoData, SelectUtxoDataStruct>& GetSelectUtxos() {  // NOLINT
    return select_utxos_;
  }
  /**
   * @brief Set to selectUtxos.
   * @param[in] select_utxos    setting value.
   */
  void SetSelectUtxos(  // line separate
      const JsonObjectVector<SelectUtxoData, SelectUtxoDataStruct>& select_utxos) {  // NOLINT
    this->select_utxos_ = select_utxos;
  }
  /**
   * @brief Get data type of selectUtxos.
   * @return Data type of selectUtxos.
   */
  static std::string GetSelectUtxosFieldType() {
    return "JsonObjectVector<SelectUtxoData, SelectUtxoDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of selectUtxos field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetSelectUtxosString(  // line separate
      const EstimateFeeRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.select_utxos_.Serialize();
  }
  /**
   * @brief Set json object to selectUtxos field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetSelectUtxosString(  // line separate
      EstimateFeeRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.select_utxos_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of feeRate
   * @return feeRate
   */
  double GetFeeRate() const {
    return fee_rate_;
  }
  /**
   * @brief Set to feeRate
   * @param[in] fee_rate    setting value.
   */
  void SetFeeRate(  // line separate
    const double& fee_rate) {  // NOLINT
    this->fee_rate_ = fee_rate;
  }
  /**
   * @brief Get data type of feeRate
   * @return Data type of feeRate
   */
  static std::string GetFeeRateFieldType() {
    return "double";
  }
  /**
   * @brief Get json string of feeRate field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetFeeRateString(  // line separate
      const EstimateFeeRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fee_rate_);
  }
  /**
   * @brief Set json object to feeRate field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFeeRateString(  // line separate
      EstimateFeeRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fee_rate_, json_value);
  }

  /**
   * @brief Get of tx
   * @return tx
   */
  std::string GetTx() const {
    return tx_;
  }
  /**
   * @brief Set to tx
   * @param[in] tx    setting value.
   */
  void SetTx(  // line separate
    const std::string& tx) {  // NOLINT
    this->tx_ = tx;
  }
  /**
   * @brief Get data type of tx
   * @return Data type of tx
   */
  static std::string GetTxFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of tx field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTxString(  // line separate
      const EstimateFeeRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_);
  }
  /**
   * @brief Set json object to tx field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxString(  // line separate
      EstimateFeeRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tx_, json_value);
  }

  /**
   * @brief Get of isElements
   * @return isElements
   */
  bool GetIsElements() const {
    return is_elements_;
  }
  /**
   * @brief Set to isElements
   * @param[in] is_elements    setting value.
   */
  void SetIsElements(  // line separate
    const bool& is_elements) {  // NOLINT
    this->is_elements_ = is_elements;
  }
  /**
   * @brief Get data type of isElements
   * @return Data type of isElements
   */
  static std::string GetIsElementsFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isElements field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsElementsString(  // line separate
      const EstimateFeeRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief Set json object to isElements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsElementsString(  // line separate
      EstimateFeeRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
  }

  /**
   * @brief Get of isBlind
   * @return isBlind
   */
  bool GetIsBlind() const {
    return is_blind_;
  }
  /**
   * @brief Set to isBlind
   * @param[in] is_blind    setting value.
   */
  void SetIsBlind(  // line separate
    const bool& is_blind) {  // NOLINT
    this->is_blind_ = is_blind;
  }
  /**
   * @brief Get data type of isBlind
   * @return Data type of isBlind
   */
  static std::string GetIsBlindFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isBlind field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsBlindString(  // line separate
      const EstimateFeeRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_blind_);
  }
  /**
   * @brief Set json object to isBlind field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsBlindString(  // line separate
      EstimateFeeRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_blind_, json_value);
  }

  /**
   * @brief Get of feeAsset
   * @return feeAsset
   */
  std::string GetFeeAsset() const {
    return fee_asset_;
  }
  /**
   * @brief Set to feeAsset
   * @param[in] fee_asset    setting value.
   */
  void SetFeeAsset(  // line separate
    const std::string& fee_asset) {  // NOLINT
    this->fee_asset_ = fee_asset;
  }
  /**
   * @brief Get data type of feeAsset
   * @return Data type of feeAsset
   */
  static std::string GetFeeAssetFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of feeAsset field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetFeeAssetString(  // line separate
      const EstimateFeeRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fee_asset_);
  }
  /**
   * @brief Set json object to feeAsset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFeeAssetString(  // line separate
      EstimateFeeRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fee_asset_, json_value);
  }

  /**
   * @brief Set ignore item.
   * @param[in] key   ignore target key name.
   */
  void SetIgnoreItem(const std::string& key) {
    ignore_items.insert(key);
  }

  /**
   * @brief Convert struct to class.
   * @param[in] data   struct data.
   */
  void ConvertFromStruct(
      const EstimateFeeRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  EstimateFeeRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using EstimateFeeRequestMapTable =
    cfd::core::JsonTableMap<EstimateFeeRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const EstimateFeeRequestMapTable& GetJsonMapper() const {  // NOLINT
    return json_mapper;
  }
  /**
   * @brief Get item lists of JSON mapping.
   * Fetch a list of target variable names in the order of definition.
   * @return Item lists of JSON mapping.
   * @see cfd::core::JsonClassBase::GetJsonItemList()
   */
  virtual const std::vector<std::string>& GetJsonItemList() const {
    return item_list;
  }
  /**
   * @brief Get ignore item lists of JSON mnapping.
   * Ignore the target variable at Serialize.
   * @return Item list of JSON mapping.
   * @see cfd::core::JsonClassBase::GetIgnoreItem()
   */
  virtual const std::set<std::string>& GetIgnoreItem() const {
    return ignore_items;
  }

 private:
 /**
  * @brief JsonFunctionMap table
  */
  static EstimateFeeRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(selectUtxos) value
   */
  JsonObjectVector<SelectUtxoData, SelectUtxoDataStruct> select_utxos_;  // NOLINT
  /**
   * @brief JsonAPI(feeRate) value
   */
  double fee_rate_ = 1;
  /**
   * @brief JsonAPI(tx) value
   */
  std::string tx_ = "";
  /**
   * @brief JsonAPI(isElements) value
   */
  bool is_elements_ = false;
  /**
   * @brief JsonAPI(isBlind) value
   */
  bool is_blind_ = true;
  /**
   * @brief JsonAPI(feeAsset) value
   */
  std::string fee_asset_ = "";
};

// ------------------------------------------------------------------------
// EstimateFeeResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (EstimateFeeResponse) class
 */
class EstimateFeeResponse
  : public cfd::core::JsonClassBase<EstimateFeeResponse> {
 public:
  EstimateFeeResponse() {
    CollectFieldName();
  }
  virtual ~EstimateFeeResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of feeAmount
   * @return feeAmount
   */
  int64_t GetFeeAmount() const {
    return fee_amount_;
  }
  /**
   * @brief Set to feeAmount
   * @param[in] fee_amount    setting value.
   */
  void SetFeeAmount(  // line separate
    const int64_t& fee_amount) {  // NOLINT
    this->fee_amount_ = fee_amount;
  }
  /**
   * @brief Get data type of feeAmount
   * @return Data type of feeAmount
   */
  static std::string GetFeeAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of feeAmount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetFeeAmountString(  // line separate
      const EstimateFeeResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fee_amount_);
  }
  /**
   * @brief Set json object to feeAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFeeAmountString(  // line separate
      EstimateFeeResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fee_amount_, json_value);
  }

  /**
   * @brief Get of txFeeAmount
   * @return txFeeAmount
   */
  int64_t GetTxFeeAmount() const {
    return tx_fee_amount_;
  }
  /**
   * @brief Set to txFeeAmount
   * @param[in] tx_fee_amount    setting value.
   */
  void SetTxFeeAmount(  // line separate
    const int64_t& tx_fee_amount) {  // NOLINT
    this->tx_fee_amount_ = tx_fee_amount;
  }
  /**
   * @brief Get data type of txFeeAmount
   * @return Data type of txFeeAmount
   */
  static std::string GetTxFeeAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of txFeeAmount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTxFeeAmountString(  // line separate
      const EstimateFeeResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_fee_amount_);
  }
  /**
   * @brief Set json object to txFeeAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxFeeAmountString(  // line separate
      EstimateFeeResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tx_fee_amount_, json_value);
  }

  /**
   * @brief Get of utxoFeeAmount
   * @return utxoFeeAmount
   */
  int64_t GetUtxoFeeAmount() const {
    return utxo_fee_amount_;
  }
  /**
   * @brief Set to utxoFeeAmount
   * @param[in] utxo_fee_amount    setting value.
   */
  void SetUtxoFeeAmount(  // line separate
    const int64_t& utxo_fee_amount) {  // NOLINT
    this->utxo_fee_amount_ = utxo_fee_amount;
  }
  /**
   * @brief Get data type of utxoFeeAmount
   * @return Data type of utxoFeeAmount
   */
  static std::string GetUtxoFeeAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of utxoFeeAmount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetUtxoFeeAmountString(  // line separate
      const EstimateFeeResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.utxo_fee_amount_);
  }
  /**
   * @brief Set json object to utxoFeeAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetUtxoFeeAmountString(  // line separate
      EstimateFeeResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.utxo_fee_amount_, json_value);
  }

  /**
   * @brief Set ignore item.
   * @param[in] key   ignore target key name.
   */
  void SetIgnoreItem(const std::string& key) {
    ignore_items.insert(key);
  }

  /**
   * @brief Convert struct to class.
   * @param[in] data   struct data.
   */
  void ConvertFromStruct(
      const EstimateFeeResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  EstimateFeeResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using EstimateFeeResponseMapTable =
    cfd::core::JsonTableMap<EstimateFeeResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const EstimateFeeResponseMapTable& GetJsonMapper() const {  // NOLINT
    return json_mapper;
  }
  /**
   * @brief Get item lists of JSON mapping.
   * Fetch a list of target variable names in the order of definition.
   * @return Item lists of JSON mapping.
   * @see cfd::core::JsonClassBase::GetJsonItemList()
   */
  virtual const std::vector<std::string>& GetJsonItemList() const {
    return item_list;
  }
  /**
   * @brief Get ignore item lists of JSON mnapping.
   * Ignore the target variable at Serialize.
   * @return Item list of JSON mapping.
   * @see cfd::core::JsonClassBase::GetIgnoreItem()
   */
  virtual const std::set<std::string>& GetIgnoreItem() const {
    return ignore_items;
  }

 private:
 /**
  * @brief JsonFunctionMap table
  */
  static EstimateFeeResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(feeAmount) value
   */
  int64_t fee_amount_ = 0;
  /**
   * @brief JsonAPI(txFeeAmount) value
   */
  int64_t tx_fee_amount_ = 0;
  /**
   * @brief JsonAPI(utxoFeeAmount) value
   */
  int64_t utxo_fee_amount_ = 0;
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ESTIMATE_FEE_JSON_H_
