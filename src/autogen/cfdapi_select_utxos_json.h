// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_select_utxos_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_SELECT_UTXOS_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_SELECT_UTXOS_JSON_H_

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
// UtxoJsonData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (UtxoJsonData) class
 */
class UtxoJsonData
  : public cfd::core::JsonClassBase<UtxoJsonData> {
 public:
  UtxoJsonData() {
    CollectFieldName();
  }
  virtual ~UtxoJsonData() {
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
      const UtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      UtxoJsonData& obj,  // NOLINT
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
      const UtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      UtxoJsonData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
  }

  /**
   * @brief Get of amount
   * @return amount
   */
  int64_t GetAmount() const {
    return amount_;
  }
  /**
   * @brief Set to amount
   * @param[in] amount    setting value.
   */
  void SetAmount(  // line separate
    const int64_t& amount) {  // NOLINT
    this->amount_ = amount;
  }
  /**
   * @brief Get data type of amount
   * @return Data type of amount
   */
  static std::string GetAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of amount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAmountString(  // line separate
      const UtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      UtxoJsonData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.amount_, json_value);
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
      const UtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      UtxoJsonData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
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
      const UtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.descriptor_);
  }
  /**
   * @brief Set json object to descriptor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDescriptorString(  // line separate
      UtxoJsonData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.descriptor_, json_value);
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
      const UtxoJsonDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  UtxoJsonDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using UtxoJsonDataMapTable =
    cfd::core::JsonTableMap<UtxoJsonData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const UtxoJsonDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static UtxoJsonDataMapTable json_mapper;
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
   * @brief JsonAPI(amount) value
   */
  int64_t amount_ = 0;
  /**
   * @brief JsonAPI(asset) value
   */
  std::string asset_ = "";
  /**
   * @brief JsonAPI(descriptor) value
   */
  std::string descriptor_ = "";
};

// ------------------------------------------------------------------------
// TargetAmountMapData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (TargetAmountMapData) class
 */
class TargetAmountMapData
  : public cfd::core::JsonClassBase<TargetAmountMapData> {
 public:
  TargetAmountMapData() {
    CollectFieldName();
  }
  virtual ~TargetAmountMapData() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

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
      const TargetAmountMapData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      TargetAmountMapData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
  }

  /**
   * @brief Get of amount
   * @return amount
   */
  int64_t GetAmount() const {
    return amount_;
  }
  /**
   * @brief Set to amount
   * @param[in] amount    setting value.
   */
  void SetAmount(  // line separate
    const int64_t& amount) {  // NOLINT
    this->amount_ = amount;
  }
  /**
   * @brief Get data type of amount
   * @return Data type of amount
   */
  static std::string GetAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of amount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAmountString(  // line separate
      const TargetAmountMapData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      TargetAmountMapData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.amount_, json_value);
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
      const TargetAmountMapDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  TargetAmountMapDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using TargetAmountMapDataMapTable =
    cfd::core::JsonTableMap<TargetAmountMapData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const TargetAmountMapDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static TargetAmountMapDataMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(asset) value
   */
  std::string asset_ = "";
  /**
   * @brief JsonAPI(amount) value
   */
  int64_t amount_ = 0;
};

// ------------------------------------------------------------------------
// CoinSelectionFeeInfomationField
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CoinSelectionFeeInfomationField) class
 */
class CoinSelectionFeeInfomationField
  : public cfd::core::JsonClassBase<CoinSelectionFeeInfomationField> {
 public:
  CoinSelectionFeeInfomationField() {
    CollectFieldName();
  }
  virtual ~CoinSelectionFeeInfomationField() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

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
      const CoinSelectionFeeInfomationField& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_fee_amount_);
  }
  /**
   * @brief Set json object to txFeeAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxFeeAmountString(  // line separate
      CoinSelectionFeeInfomationField& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tx_fee_amount_, json_value);
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
      const CoinSelectionFeeInfomationField& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fee_rate_);
  }
  /**
   * @brief Set json object to feeRate field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFeeRateString(  // line separate
      CoinSelectionFeeInfomationField& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fee_rate_, json_value);
  }

  /**
   * @brief Get of longTermFeeRate
   * @return longTermFeeRate
   */
  double GetLongTermFeeRate() const {
    return long_term_fee_rate_;
  }
  /**
   * @brief Set to longTermFeeRate
   * @param[in] long_term_fee_rate    setting value.
   */
  void SetLongTermFeeRate(  // line separate
    const double& long_term_fee_rate) {  // NOLINT
    this->long_term_fee_rate_ = long_term_fee_rate;
  }
  /**
   * @brief Get data type of longTermFeeRate
   * @return Data type of longTermFeeRate
   */
  static std::string GetLongTermFeeRateFieldType() {
    return "double";
  }
  /**
   * @brief Get json string of longTermFeeRate field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetLongTermFeeRateString(  // line separate
      const CoinSelectionFeeInfomationField& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.long_term_fee_rate_);
  }
  /**
   * @brief Set json object to longTermFeeRate field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLongTermFeeRateString(  // line separate
      CoinSelectionFeeInfomationField& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.long_term_fee_rate_, json_value);
  }

  /**
   * @brief Get of knapsackMinChange
   * @return knapsackMinChange
   */
  int64_t GetKnapsackMinChange() const {
    return knapsack_min_change_;
  }
  /**
   * @brief Set to knapsackMinChange
   * @param[in] knapsack_min_change    setting value.
   */
  void SetKnapsackMinChange(  // line separate
    const int64_t& knapsack_min_change) {  // NOLINT
    this->knapsack_min_change_ = knapsack_min_change;
  }
  /**
   * @brief Get data type of knapsackMinChange
   * @return Data type of knapsackMinChange
   */
  static std::string GetKnapsackMinChangeFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of knapsackMinChange field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetKnapsackMinChangeString(  // line separate
      const CoinSelectionFeeInfomationField& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.knapsack_min_change_);
  }
  /**
   * @brief Set json object to knapsackMinChange field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetKnapsackMinChangeString(  // line separate
      CoinSelectionFeeInfomationField& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.knapsack_min_change_, json_value);
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
      const CoinSelectionFeeInfomationField& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fee_asset_);
  }
  /**
   * @brief Set json object to feeAsset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFeeAssetString(  // line separate
      CoinSelectionFeeInfomationField& obj,  // NOLINT
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
      const CoinSelectionFeeInfomationFieldStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CoinSelectionFeeInfomationFieldStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CoinSelectionFeeInfomationFieldMapTable =
    cfd::core::JsonTableMap<CoinSelectionFeeInfomationField>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CoinSelectionFeeInfomationFieldMapTable& GetJsonMapper() const {  // NOLINT
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
  static CoinSelectionFeeInfomationFieldMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(txFeeAmount) value
   */
  int64_t tx_fee_amount_ = 0;
  /**
   * @brief JsonAPI(feeRate) value
   */
  double fee_rate_ = 20;
  /**
   * @brief JsonAPI(longTermFeeRate) value
   */
  double long_term_fee_rate_ = 20;
  /**
   * @brief JsonAPI(knapsackMinChange) value
   */
  int64_t knapsack_min_change_ = -1;
  /**
   * @brief JsonAPI(feeAsset) value
   */
  std::string fee_asset_ = "";
};

// ------------------------------------------------------------------------
// SelectUtxosRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (SelectUtxosRequest) class
 */
class SelectUtxosRequest
  : public cfd::core::JsonClassBase<SelectUtxosRequest> {
 public:
  SelectUtxosRequest() {
    CollectFieldName();
  }
  virtual ~SelectUtxosRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of utxos.
   * @return utxos
   */
  JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct>& GetUtxos() {  // NOLINT
    return utxos_;
  }
  /**
   * @brief Set to utxos.
   * @param[in] utxos    setting value.
   */
  void SetUtxos(  // line separate
      const JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct>& utxos) {  // NOLINT
    this->utxos_ = utxos;
  }
  /**
   * @brief Get data type of utxos.
   * @return Data type of utxos.
   */
  static std::string GetUtxosFieldType() {
    return "JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of utxos field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetUtxosString(  // line separate
      const SelectUtxosRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.utxos_.Serialize();
  }
  /**
   * @brief Set json object to utxos field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetUtxosString(  // line separate
      SelectUtxosRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.utxos_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of targetAmount
   * @return targetAmount
   */
  int64_t GetTargetAmount() const {
    return target_amount_;
  }
  /**
   * @brief Set to targetAmount
   * @param[in] target_amount    setting value.
   */
  void SetTargetAmount(  // line separate
    const int64_t& target_amount) {  // NOLINT
    this->target_amount_ = target_amount;
  }
  /**
   * @brief Get data type of targetAmount
   * @return Data type of targetAmount
   */
  static std::string GetTargetAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of targetAmount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTargetAmountString(  // line separate
      const SelectUtxosRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.target_amount_);
  }
  /**
   * @brief Set json object to targetAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTargetAmountString(  // line separate
      SelectUtxosRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.target_amount_, json_value);
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
      const SelectUtxosRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief Set json object to isElements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsElementsString(  // line separate
      SelectUtxosRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
  }

  /**
   * @brief Get of targets.
   * @return targets
   */
  JsonObjectVector<TargetAmountMapData, TargetAmountMapDataStruct>& GetTargets() {  // NOLINT
    return targets_;
  }
  /**
   * @brief Set to targets.
   * @param[in] targets    setting value.
   */
  void SetTargets(  // line separate
      const JsonObjectVector<TargetAmountMapData, TargetAmountMapDataStruct>& targets) {  // NOLINT
    this->targets_ = targets;
  }
  /**
   * @brief Get data type of targets.
   * @return Data type of targets.
   */
  static std::string GetTargetsFieldType() {
    return "JsonObjectVector<TargetAmountMapData, TargetAmountMapDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of targets field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTargetsString(  // line separate
      const SelectUtxosRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.targets_.Serialize();
  }
  /**
   * @brief Set json object to targets field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetTargetsString(  // line separate
      SelectUtxosRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.targets_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of feeInfo.
   * @return feeInfo
   */
  CoinSelectionFeeInfomationField& GetFeeInfo() {  // NOLINT
    return fee_info_;
  }
  /**
   * @brief Set to feeInfo.
   * @param[in] fee_info    setting value.
   */
  void SetFeeInfo(  // line separate
      const CoinSelectionFeeInfomationField& fee_info) {  // NOLINT
    this->fee_info_ = fee_info;
  }
  /**
   * @brief Get data type of feeInfo.
   * @return Data type of feeInfo.
   */
  static std::string GetFeeInfoFieldType() {
    return "CoinSelectionFeeInfomationField";  // NOLINT
  }
  /**
   * @brief Get json string of feeInfo field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetFeeInfoString(  // line separate
      const SelectUtxosRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.fee_info_.Serialize();
  }
  /**
   * @brief Set json object to feeInfo field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetFeeInfoString(  // line separate
      SelectUtxosRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.fee_info_.DeserializeUniValue(json_value);
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
      const SelectUtxosRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  SelectUtxosRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using SelectUtxosRequestMapTable =
    cfd::core::JsonTableMap<SelectUtxosRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const SelectUtxosRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static SelectUtxosRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(utxos) value
   */
  JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct> utxos_;  // NOLINT
  /**
   * @brief JsonAPI(targetAmount) value
   */
  int64_t target_amount_ = 0;
  /**
   * @brief JsonAPI(isElements) value
   */
  bool is_elements_ = false;
  /**
   * @brief JsonAPI(targets) value
   */
  JsonObjectVector<TargetAmountMapData, TargetAmountMapDataStruct> targets_;  // NOLINT
  /**
   * @brief JsonAPI(feeInfo) value
   */
  CoinSelectionFeeInfomationField fee_info_;  // NOLINT
};

// ------------------------------------------------------------------------
// SelectUtxosResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (SelectUtxosResponse) class
 */
class SelectUtxosResponse
  : public cfd::core::JsonClassBase<SelectUtxosResponse> {
 public:
  SelectUtxosResponse() {
    CollectFieldName();
  }
  virtual ~SelectUtxosResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of utxos.
   * @return utxos
   */
  JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct>& GetUtxos() {  // NOLINT
    return utxos_;
  }
  /**
   * @brief Set to utxos.
   * @param[in] utxos    setting value.
   */
  void SetUtxos(  // line separate
      const JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct>& utxos) {  // NOLINT
    this->utxos_ = utxos;
  }
  /**
   * @brief Get data type of utxos.
   * @return Data type of utxos.
   */
  static std::string GetUtxosFieldType() {
    return "JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of utxos field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetUtxosString(  // line separate
      const SelectUtxosResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.utxos_.Serialize();
  }
  /**
   * @brief Set json object to utxos field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetUtxosString(  // line separate
      SelectUtxosResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.utxos_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of selectedAmount
   * @return selectedAmount
   */
  int64_t GetSelectedAmount() const {
    return selected_amount_;
  }
  /**
   * @brief Set to selectedAmount
   * @param[in] selected_amount    setting value.
   */
  void SetSelectedAmount(  // line separate
    const int64_t& selected_amount) {  // NOLINT
    this->selected_amount_ = selected_amount;
  }
  /**
   * @brief Get data type of selectedAmount
   * @return Data type of selectedAmount
   */
  static std::string GetSelectedAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of selectedAmount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSelectedAmountString(  // line separate
      const SelectUtxosResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.selected_amount_);
  }
  /**
   * @brief Set json object to selectedAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSelectedAmountString(  // line separate
      SelectUtxosResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.selected_amount_, json_value);
  }

  /**
   * @brief Get of selectedAmounts.
   * @return selectedAmounts
   */
  JsonObjectVector<TargetAmountMapData, TargetAmountMapDataStruct>& GetSelectedAmounts() {  // NOLINT
    return selected_amounts_;
  }
  /**
   * @brief Set to selectedAmounts.
   * @param[in] selected_amounts    setting value.
   */
  void SetSelectedAmounts(  // line separate
      const JsonObjectVector<TargetAmountMapData, TargetAmountMapDataStruct>& selected_amounts) {  // NOLINT
    this->selected_amounts_ = selected_amounts;
  }
  /**
   * @brief Get data type of selectedAmounts.
   * @return Data type of selectedAmounts.
   */
  static std::string GetSelectedAmountsFieldType() {
    return "JsonObjectVector<TargetAmountMapData, TargetAmountMapDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of selectedAmounts field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetSelectedAmountsString(  // line separate
      const SelectUtxosResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.selected_amounts_.Serialize();
  }
  /**
   * @brief Set json object to selectedAmounts field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetSelectedAmountsString(  // line separate
      SelectUtxosResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.selected_amounts_.DeserializeUniValue(json_value);
  }

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
      const SelectUtxosResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fee_amount_);
  }
  /**
   * @brief Set json object to feeAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFeeAmountString(  // line separate
      SelectUtxosResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fee_amount_, json_value);
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
      const SelectUtxosResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.utxo_fee_amount_);
  }
  /**
   * @brief Set json object to utxoFeeAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetUtxoFeeAmountString(  // line separate
      SelectUtxosResponse& obj,  // NOLINT
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
      const SelectUtxosResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  SelectUtxosResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using SelectUtxosResponseMapTable =
    cfd::core::JsonTableMap<SelectUtxosResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const SelectUtxosResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static SelectUtxosResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(utxos) value
   */
  JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct> utxos_;  // NOLINT
  /**
   * @brief JsonAPI(selectedAmount) value
   */
  int64_t selected_amount_ = 0;
  /**
   * @brief JsonAPI(selectedAmounts) value
   */
  JsonObjectVector<TargetAmountMapData, TargetAmountMapDataStruct> selected_amounts_;  // NOLINT
  /**
   * @brief JsonAPI(feeAmount) value
   */
  int64_t fee_amount_ = 0;
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

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_SELECT_UTXOS_JSON_H_
