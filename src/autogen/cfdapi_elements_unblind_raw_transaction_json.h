// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_unblind_raw_transaction_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_UNBLIND_RAW_TRANSACTION_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_UNBLIND_RAW_TRANSACTION_JSON_H_

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
// UnblindTxOut
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (UnblindTxOut) class
 */
class UnblindTxOut
  : public cfd::core::JsonClassBase<UnblindTxOut> {
 public:
  UnblindTxOut() {
    CollectFieldName();
  }
  virtual ~UnblindTxOut() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of index
   * @return index
   */
  uint32_t GetIndex() const {
    return index_;
  }
  /**
   * @brief Set to index
   * @param[in] index    setting value.
   */
  void SetIndex(  // line separate
    const uint32_t& index) {  // NOLINT
    this->index_ = index;
  }
  /**
   * @brief Get data type of index
   * @return Data type of index
   */
  static std::string GetIndexFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of index field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIndexString(  // line separate
      const UnblindTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.index_);
  }
  /**
   * @brief Set json object to index field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIndexString(  // line separate
      UnblindTxOut& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.index_, json_value);
  }

  /**
   * @brief Get of blindingKey
   * @return blindingKey
   */
  std::string GetBlindingKey() const {
    return blinding_key_;
  }
  /**
   * @brief Set to blindingKey
   * @param[in] blinding_key    setting value.
   */
  void SetBlindingKey(  // line separate
    const std::string& blinding_key) {  // NOLINT
    this->blinding_key_ = blinding_key;
  }
  /**
   * @brief Get data type of blindingKey
   * @return Data type of blindingKey
   */
  static std::string GetBlindingKeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of blindingKey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBlindingKeyString(  // line separate
      const UnblindTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.blinding_key_);
  }
  /**
   * @brief Set json object to blindingKey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBlindingKeyString(  // line separate
      UnblindTxOut& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.blinding_key_, json_value);
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
      const UnblindTxOutStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  UnblindTxOutStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using UnblindTxOutMapTable =
    cfd::core::JsonTableMap<UnblindTxOut>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const UnblindTxOutMapTable& GetJsonMapper() const {  // NOLINT
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
  static UnblindTxOutMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(index) value
   */
  uint32_t index_ = 0;
  /**
   * @brief JsonAPI(blindingKey) value
   */
  std::string blinding_key_ = "";
};

// ------------------------------------------------------------------------
// UnblindIssuance
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (UnblindIssuance) class
 */
class UnblindIssuance
  : public cfd::core::JsonClassBase<UnblindIssuance> {
 public:
  UnblindIssuance() {
    CollectFieldName();
  }
  virtual ~UnblindIssuance() {
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
      const UnblindIssuance& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      UnblindIssuance& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.txid_, json_value);
  }

  /**
   * @brief Get of vout
   * @return vout
   */
  int64_t GetVout() const {
    return vout_;
  }
  /**
   * @brief Set to vout
   * @param[in] vout    setting value.
   */
  void SetVout(  // line separate
    const int64_t& vout) {  // NOLINT
    this->vout_ = vout;
  }
  /**
   * @brief Get data type of vout
   * @return Data type of vout
   */
  static std::string GetVoutFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of vout field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetVoutString(  // line separate
      const UnblindIssuance& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      UnblindIssuance& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
  }

  /**
   * @brief Get of assetBlindingKey
   * @return assetBlindingKey
   */
  std::string GetAssetBlindingKey() const {
    return asset_blinding_key_;
  }
  /**
   * @brief Set to assetBlindingKey
   * @param[in] asset_blinding_key    setting value.
   */
  void SetAssetBlindingKey(  // line separate
    const std::string& asset_blinding_key) {  // NOLINT
    this->asset_blinding_key_ = asset_blinding_key;
  }
  /**
   * @brief Get data type of assetBlindingKey
   * @return Data type of assetBlindingKey
   */
  static std::string GetAssetBlindingKeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of assetBlindingKey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAssetBlindingKeyString(  // line separate
      const UnblindIssuance& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_blinding_key_);
  }
  /**
   * @brief Set json object to assetBlindingKey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetBlindingKeyString(  // line separate
      UnblindIssuance& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_blinding_key_, json_value);
  }

  /**
   * @brief Get of tokenBlindingKey
   * @return tokenBlindingKey
   */
  std::string GetTokenBlindingKey() const {
    return token_blinding_key_;
  }
  /**
   * @brief Set to tokenBlindingKey
   * @param[in] token_blinding_key    setting value.
   */
  void SetTokenBlindingKey(  // line separate
    const std::string& token_blinding_key) {  // NOLINT
    this->token_blinding_key_ = token_blinding_key;
  }
  /**
   * @brief Get data type of tokenBlindingKey
   * @return Data type of tokenBlindingKey
   */
  static std::string GetTokenBlindingKeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of tokenBlindingKey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTokenBlindingKeyString(  // line separate
      const UnblindIssuance& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.token_blinding_key_);
  }
  /**
   * @brief Set json object to tokenBlindingKey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTokenBlindingKeyString(  // line separate
      UnblindIssuance& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.token_blinding_key_, json_value);
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
      const UnblindIssuanceStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  UnblindIssuanceStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using UnblindIssuanceMapTable =
    cfd::core::JsonTableMap<UnblindIssuance>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const UnblindIssuanceMapTable& GetJsonMapper() const {  // NOLINT
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
  static UnblindIssuanceMapTable json_mapper;
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
  int64_t vout_ = 0;
  /**
   * @brief JsonAPI(assetBlindingKey) value
   */
  std::string asset_blinding_key_ = "";
  /**
   * @brief JsonAPI(tokenBlindingKey) value
   */
  std::string token_blinding_key_ = "";
};

// ------------------------------------------------------------------------
// UnblindRawTransactionRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (UnblindRawTransactionRequest) class
 */
class UnblindRawTransactionRequest
  : public cfd::core::JsonClassBase<UnblindRawTransactionRequest> {
 public:
  UnblindRawTransactionRequest() {
    CollectFieldName();
  }
  virtual ~UnblindRawTransactionRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

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
      const UnblindRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_);
  }
  /**
   * @brief Set json object to tx field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxString(  // line separate
      UnblindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tx_, json_value);
  }

  /**
   * @brief Get of txouts.
   * @return txouts
   */
  JsonObjectVector<UnblindTxOut, UnblindTxOutStruct>& GetTxouts() {  // NOLINT
    return txouts_;
  }
  /**
   * @brief Set to txouts.
   * @param[in] txouts    setting value.
   */
  void SetTxouts(  // line separate
      const JsonObjectVector<UnblindTxOut, UnblindTxOutStruct>& txouts) {  // NOLINT
    this->txouts_ = txouts;
  }
  /**
   * @brief Get data type of txouts.
   * @return Data type of txouts.
   */
  static std::string GetTxoutsFieldType() {
    return "JsonObjectVector<UnblindTxOut, UnblindTxOutStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of txouts field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxoutsString(  // line separate
      const UnblindRawTransactionRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.txouts_.Serialize();
  }
  /**
   * @brief Set json object to txouts field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetTxoutsString(  // line separate
      UnblindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txouts_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of issuances.
   * @return issuances
   */
  JsonObjectVector<UnblindIssuance, UnblindIssuanceStruct>& GetIssuances() {  // NOLINT
    return issuances_;
  }
  /**
   * @brief Set to issuances.
   * @param[in] issuances    setting value.
   */
  void SetIssuances(  // line separate
      const JsonObjectVector<UnblindIssuance, UnblindIssuanceStruct>& issuances) {  // NOLINT
    this->issuances_ = issuances;
  }
  /**
   * @brief Get data type of issuances.
   * @return Data type of issuances.
   */
  static std::string GetIssuancesFieldType() {
    return "JsonObjectVector<UnblindIssuance, UnblindIssuanceStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of issuances field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetIssuancesString(  // line separate
      const UnblindRawTransactionRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.issuances_.Serialize();
  }
  /**
   * @brief Set json object to issuances field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetIssuancesString(  // line separate
      UnblindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.issuances_.DeserializeUniValue(json_value);
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
      const UnblindRawTransactionRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  UnblindRawTransactionRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using UnblindRawTransactionRequestMapTable =
    cfd::core::JsonTableMap<UnblindRawTransactionRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const UnblindRawTransactionRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static UnblindRawTransactionRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(tx) value
   */
  std::string tx_ = "";
  /**
   * @brief JsonAPI(txouts) value
   */
  JsonObjectVector<UnblindTxOut, UnblindTxOutStruct> txouts_;  // NOLINT
  /**
   * @brief JsonAPI(issuances) value
   */
  JsonObjectVector<UnblindIssuance, UnblindIssuanceStruct> issuances_;  // NOLINT
};

// ------------------------------------------------------------------------
// UnblindOutput
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (UnblindOutput) class
 */
class UnblindOutput
  : public cfd::core::JsonClassBase<UnblindOutput> {
 public:
  UnblindOutput() {
    CollectFieldName();
  }
  virtual ~UnblindOutput() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of index
   * @return index
   */
  uint32_t GetIndex() const {
    return index_;
  }
  /**
   * @brief Set to index
   * @param[in] index    setting value.
   */
  void SetIndex(  // line separate
    const uint32_t& index) {  // NOLINT
    this->index_ = index;
  }
  /**
   * @brief Get data type of index
   * @return Data type of index
   */
  static std::string GetIndexFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of index field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIndexString(  // line separate
      const UnblindOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.index_);
  }
  /**
   * @brief Set json object to index field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIndexString(  // line separate
      UnblindOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.index_, json_value);
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
      const UnblindOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      UnblindOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
  }

  /**
   * @brief Get of blindFactor
   * @return blindFactor
   */
  std::string GetBlindFactor() const {
    return blind_factor_;
  }
  /**
   * @brief Set to blindFactor
   * @param[in] blind_factor    setting value.
   */
  void SetBlindFactor(  // line separate
    const std::string& blind_factor) {  // NOLINT
    this->blind_factor_ = blind_factor;
  }
  /**
   * @brief Get data type of blindFactor
   * @return Data type of blindFactor
   */
  static std::string GetBlindFactorFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of blindFactor field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBlindFactorString(  // line separate
      const UnblindOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.blind_factor_);
  }
  /**
   * @brief Set json object to blindFactor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBlindFactorString(  // line separate
      UnblindOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.blind_factor_, json_value);
  }

  /**
   * @brief Get of assetBlindFactor
   * @return assetBlindFactor
   */
  std::string GetAssetBlindFactor() const {
    return asset_blind_factor_;
  }
  /**
   * @brief Set to assetBlindFactor
   * @param[in] asset_blind_factor    setting value.
   */
  void SetAssetBlindFactor(  // line separate
    const std::string& asset_blind_factor) {  // NOLINT
    this->asset_blind_factor_ = asset_blind_factor;
  }
  /**
   * @brief Get data type of assetBlindFactor
   * @return Data type of assetBlindFactor
   */
  static std::string GetAssetBlindFactorFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of assetBlindFactor field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAssetBlindFactorString(  // line separate
      const UnblindOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_blind_factor_);
  }
  /**
   * @brief Set json object to assetBlindFactor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetBlindFactorString(  // line separate
      UnblindOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_blind_factor_, json_value);
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
      const UnblindOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      UnblindOutput& obj,  // NOLINT
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
      const UnblindOutputStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  UnblindOutputStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using UnblindOutputMapTable =
    cfd::core::JsonTableMap<UnblindOutput>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const UnblindOutputMapTable& GetJsonMapper() const {  // NOLINT
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
  static UnblindOutputMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(index) value
   */
  uint32_t index_ = 0;
  /**
   * @brief JsonAPI(asset) value
   */
  std::string asset_ = "";
  /**
   * @brief JsonAPI(blindFactor) value
   */
  std::string blind_factor_ = "";
  /**
   * @brief JsonAPI(assetBlindFactor) value
   */
  std::string asset_blind_factor_ = "";
  /**
   * @brief JsonAPI(amount) value
   */
  int64_t amount_ = 0;
};

// ------------------------------------------------------------------------
// UnblindIssuanceOutput
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (UnblindIssuanceOutput) class
 */
class UnblindIssuanceOutput
  : public cfd::core::JsonClassBase<UnblindIssuanceOutput> {
 public:
  UnblindIssuanceOutput() {
    CollectFieldName();
  }
  virtual ~UnblindIssuanceOutput() {
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
      const UnblindIssuanceOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      UnblindIssuanceOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.txid_, json_value);
  }

  /**
   * @brief Get of vout
   * @return vout
   */
  int64_t GetVout() const {
    return vout_;
  }
  /**
   * @brief Set to vout
   * @param[in] vout    setting value.
   */
  void SetVout(  // line separate
    const int64_t& vout) {  // NOLINT
    this->vout_ = vout;
  }
  /**
   * @brief Get data type of vout
   * @return Data type of vout
   */
  static std::string GetVoutFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of vout field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetVoutString(  // line separate
      const UnblindIssuanceOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      UnblindIssuanceOutput& obj,  // NOLINT
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
      const UnblindIssuanceOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      UnblindIssuanceOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
  }

  /**
   * @brief Get of assetamount
   * @return assetamount
   */
  int64_t GetAssetamount() const {
    return assetamount_;
  }
  /**
   * @brief Set to assetamount
   * @param[in] assetamount    setting value.
   */
  void SetAssetamount(  // line separate
    const int64_t& assetamount) {  // NOLINT
    this->assetamount_ = assetamount;
  }
  /**
   * @brief Get data type of assetamount
   * @return Data type of assetamount
   */
  static std::string GetAssetamountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of assetamount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAssetamountString(  // line separate
      const UnblindIssuanceOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.assetamount_);
  }
  /**
   * @brief Set json object to assetamount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetamountString(  // line separate
      UnblindIssuanceOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.assetamount_, json_value);
  }

  /**
   * @brief Get of token
   * @return token
   */
  std::string GetToken() const {
    return token_;
  }
  /**
   * @brief Set to token
   * @param[in] token    setting value.
   */
  void SetToken(  // line separate
    const std::string& token) {  // NOLINT
    this->token_ = token;
  }
  /**
   * @brief Get data type of token
   * @return Data type of token
   */
  static std::string GetTokenFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of token field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTokenString(  // line separate
      const UnblindIssuanceOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.token_);
  }
  /**
   * @brief Set json object to token field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTokenString(  // line separate
      UnblindIssuanceOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.token_, json_value);
  }

  /**
   * @brief Get of tokenamount
   * @return tokenamount
   */
  int64_t GetTokenamount() const {
    return tokenamount_;
  }
  /**
   * @brief Set to tokenamount
   * @param[in] tokenamount    setting value.
   */
  void SetTokenamount(  // line separate
    const int64_t& tokenamount) {  // NOLINT
    this->tokenamount_ = tokenamount;
  }
  /**
   * @brief Get data type of tokenamount
   * @return Data type of tokenamount
   */
  static std::string GetTokenamountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of tokenamount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTokenamountString(  // line separate
      const UnblindIssuanceOutput& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tokenamount_);
  }
  /**
   * @brief Set json object to tokenamount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTokenamountString(  // line separate
      UnblindIssuanceOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tokenamount_, json_value);
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
      const UnblindIssuanceOutputStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  UnblindIssuanceOutputStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using UnblindIssuanceOutputMapTable =
    cfd::core::JsonTableMap<UnblindIssuanceOutput>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const UnblindIssuanceOutputMapTable& GetJsonMapper() const {  // NOLINT
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
  static UnblindIssuanceOutputMapTable json_mapper;
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
  int64_t vout_ = 0;
  /**
   * @brief JsonAPI(asset) value
   */
  std::string asset_ = "";
  /**
   * @brief JsonAPI(assetamount) value
   */
  int64_t assetamount_ = 0;
  /**
   * @brief JsonAPI(token) value
   */
  std::string token_ = "";
  /**
   * @brief JsonAPI(tokenamount) value
   */
  int64_t tokenamount_ = 0;
};

// ------------------------------------------------------------------------
// UnblindRawTransactionResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (UnblindRawTransactionResponse) class
 */
class UnblindRawTransactionResponse
  : public cfd::core::JsonClassBase<UnblindRawTransactionResponse> {
 public:
  UnblindRawTransactionResponse() {
    CollectFieldName();
  }
  virtual ~UnblindRawTransactionResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of hex
   * @return hex
   */
  std::string GetHex() const {
    return hex_;
  }
  /**
   * @brief Set to hex
   * @param[in] hex    setting value.
   */
  void SetHex(  // line separate
    const std::string& hex) {  // NOLINT
    this->hex_ = hex;
  }
  /**
   * @brief Get data type of hex
   * @return Data type of hex
   */
  static std::string GetHexFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of hex field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetHexString(  // line separate
      const UnblindRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      UnblindRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief Get of outputs.
   * @return outputs
   */
  JsonObjectVector<UnblindOutput, UnblindOutputStruct>& GetOutputs() {  // NOLINT
    return outputs_;
  }
  /**
   * @brief Set to outputs.
   * @param[in] outputs    setting value.
   */
  void SetOutputs(  // line separate
      const JsonObjectVector<UnblindOutput, UnblindOutputStruct>& outputs) {  // NOLINT
    this->outputs_ = outputs;
  }
  /**
   * @brief Get data type of outputs.
   * @return Data type of outputs.
   */
  static std::string GetOutputsFieldType() {
    return "JsonObjectVector<UnblindOutput, UnblindOutputStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of outputs field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetOutputsString(  // line separate
      const UnblindRawTransactionResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.outputs_.Serialize();
  }
  /**
   * @brief Set json object to outputs field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetOutputsString(  // line separate
      UnblindRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.outputs_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of issuanceOutputs.
   * @return issuanceOutputs
   */
  JsonObjectVector<UnblindIssuanceOutput, UnblindIssuanceOutputStruct>& GetIssuanceOutputs() {  // NOLINT
    return issuance_outputs_;
  }
  /**
   * @brief Set to issuanceOutputs.
   * @param[in] issuance_outputs    setting value.
   */
  void SetIssuanceOutputs(  // line separate
      const JsonObjectVector<UnblindIssuanceOutput, UnblindIssuanceOutputStruct>& issuance_outputs) {  // NOLINT
    this->issuance_outputs_ = issuance_outputs;
  }
  /**
   * @brief Get data type of issuanceOutputs.
   * @return Data type of issuanceOutputs.
   */
  static std::string GetIssuanceOutputsFieldType() {
    return "JsonObjectVector<UnblindIssuanceOutput, UnblindIssuanceOutputStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of issuanceOutputs field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetIssuanceOutputsString(  // line separate
      const UnblindRawTransactionResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.issuance_outputs_.Serialize();
  }
  /**
   * @brief Set json object to issuanceOutputs field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetIssuanceOutputsString(  // line separate
      UnblindRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.issuance_outputs_.DeserializeUniValue(json_value);
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
      const UnblindRawTransactionResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  UnblindRawTransactionResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using UnblindRawTransactionResponseMapTable =
    cfd::core::JsonTableMap<UnblindRawTransactionResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const UnblindRawTransactionResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static UnblindRawTransactionResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(hex) value
   */
  std::string hex_ = "";
  /**
   * @brief JsonAPI(outputs) value
   */
  JsonObjectVector<UnblindOutput, UnblindOutputStruct> outputs_;  // NOLINT
  /**
   * @brief JsonAPI(issuanceOutputs) value
   */
  JsonObjectVector<UnblindIssuanceOutput, UnblindIssuanceOutputStruct> issuance_outputs_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_UNBLIND_RAW_TRANSACTION_JSON_H_
