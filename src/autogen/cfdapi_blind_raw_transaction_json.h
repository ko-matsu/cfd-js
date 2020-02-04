// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_blind_raw_transaction_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_BLIND_RAW_TRANSACTION_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_BLIND_RAW_TRANSACTION_JSON_H_

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
// BlindTxInRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (BlindTxInRequest) class
 */
class BlindTxInRequest
  : public cfd::core::JsonClassBase<BlindTxInRequest> {
 public:
  BlindTxInRequest() {
    CollectFieldName();
  }
  virtual ~BlindTxInRequest() {
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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.blind_factor_);
  }
  /**
   * @brief Set json object to blindFactor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBlindFactorString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_blind_factor_);
  }
  /**
   * @brief Set json object to assetBlindFactor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetBlindFactorString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  BlindTxInRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using BlindTxInRequestMapTable =
    cfd::core::JsonTableMap<BlindTxInRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const BlindTxInRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static BlindTxInRequestMapTable json_mapper;
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
// BlindTxOutRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (BlindTxOutRequest) class
 */
class BlindTxOutRequest
  : public cfd::core::JsonClassBase<BlindTxOutRequest> {
 public:
  BlindTxOutRequest() {
    CollectFieldName();
  }
  virtual ~BlindTxOutRequest() {
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
      const BlindTxOutRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.index_);
  }
  /**
   * @brief Set json object to index field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIndexString(  // line separate
      BlindTxOutRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.index_, json_value);
  }

  /**
   * @brief Get of blindPubkey
   * @return blindPubkey
   */
  std::string GetBlindPubkey() const {
    return blind_pubkey_;
  }
  /**
   * @brief Set to blindPubkey
   * @param[in] blind_pubkey    setting value.
   */
  void SetBlindPubkey(  // line separate
    const std::string& blind_pubkey) {  // NOLINT
    this->blind_pubkey_ = blind_pubkey;
  }
  /**
   * @brief Get data type of blindPubkey
   * @return Data type of blindPubkey
   */
  static std::string GetBlindPubkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of blindPubkey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBlindPubkeyString(  // line separate
      const BlindTxOutRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.blind_pubkey_);
  }
  /**
   * @brief Set json object to blindPubkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBlindPubkeyString(  // line separate
      BlindTxOutRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.blind_pubkey_, json_value);
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
      const BlindTxOutRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  BlindTxOutRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using BlindTxOutRequestMapTable =
    cfd::core::JsonTableMap<BlindTxOutRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const BlindTxOutRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static BlindTxOutRequestMapTable json_mapper;
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
   * @brief JsonAPI(blindPubkey) value
   */
  std::string blind_pubkey_ = "";
};

// ------------------------------------------------------------------------
// BlindIssuanceRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (BlindIssuanceRequest) class
 */
class BlindIssuanceRequest
  : public cfd::core::JsonClassBase<BlindIssuanceRequest> {
 public:
  BlindIssuanceRequest() {
    CollectFieldName();
  }
  virtual ~BlindIssuanceRequest() {
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
      const BlindIssuanceRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      BlindIssuanceRequest& obj,  // NOLINT
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
      const BlindIssuanceRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      BlindIssuanceRequest& obj,  // NOLINT
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
      const BlindIssuanceRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_blinding_key_);
  }
  /**
   * @brief Set json object to assetBlindingKey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetBlindingKeyString(  // line separate
      BlindIssuanceRequest& obj,  // NOLINT
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
      const BlindIssuanceRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.token_blinding_key_);
  }
  /**
   * @brief Set json object to tokenBlindingKey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTokenBlindingKeyString(  // line separate
      BlindIssuanceRequest& obj,  // NOLINT
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
      const BlindIssuanceRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  BlindIssuanceRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using BlindIssuanceRequestMapTable =
    cfd::core::JsonTableMap<BlindIssuanceRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const BlindIssuanceRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static BlindIssuanceRequestMapTable json_mapper;
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
// BlindRawTransactionRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (BlindRawTransactionRequest) class
 */
class BlindRawTransactionRequest
  : public cfd::core::JsonClassBase<BlindRawTransactionRequest> {
 public:
  BlindRawTransactionRequest() {
    CollectFieldName();
  }
  virtual ~BlindRawTransactionRequest() {
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
      const BlindRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_);
  }
  /**
   * @brief Set json object to tx field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxString(  // line separate
      BlindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tx_, json_value);
  }

  /**
   * @brief Get of txins.
   * @return txins
   */
  JsonObjectVector<BlindTxInRequest, BlindTxInRequestStruct>& GetTxins() {  // NOLINT
    return txins_;
  }
  /**
   * @brief Set to txins.
   * @param[in] txins    setting value.
   */
  void SetTxins(  // line separate
      const JsonObjectVector<BlindTxInRequest, BlindTxInRequestStruct>& txins) {  // NOLINT
    this->txins_ = txins;
  }
  /**
   * @brief Get data type of txins.
   * @return Data type of txins.
   */
  static std::string GetTxinsFieldType() {
    return "JsonObjectVector<BlindTxInRequest, BlindTxInRequestStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of txins field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxinsString(  // line separate
      const BlindRawTransactionRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.txins_.Serialize();
  }
  /**
   * @brief Set json object to txins field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetTxinsString(  // line separate
      BlindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txins_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of txouts.
   * @return txouts
   */
  JsonObjectVector<BlindTxOutRequest, BlindTxOutRequestStruct>& GetTxouts() {  // NOLINT
    return txouts_;
  }
  /**
   * @brief Set to txouts.
   * @param[in] txouts    setting value.
   */
  void SetTxouts(  // line separate
      const JsonObjectVector<BlindTxOutRequest, BlindTxOutRequestStruct>& txouts) {  // NOLINT
    this->txouts_ = txouts;
  }
  /**
   * @brief Get data type of txouts.
   * @return Data type of txouts.
   */
  static std::string GetTxoutsFieldType() {
    return "JsonObjectVector<BlindTxOutRequest, BlindTxOutRequestStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of txouts field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxoutsString(  // line separate
      const BlindRawTransactionRequest& obj) {  // NOLINT
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
      BlindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txouts_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of issuances.
   * @return issuances
   */
  JsonObjectVector<BlindIssuanceRequest, BlindIssuanceRequestStruct>& GetIssuances() {  // NOLINT
    return issuances_;
  }
  /**
   * @brief Set to issuances.
   * @param[in] issuances    setting value.
   */
  void SetIssuances(  // line separate
      const JsonObjectVector<BlindIssuanceRequest, BlindIssuanceRequestStruct>& issuances) {  // NOLINT
    this->issuances_ = issuances;
  }
  /**
   * @brief Get data type of issuances.
   * @return Data type of issuances.
   */
  static std::string GetIssuancesFieldType() {
    return "JsonObjectVector<BlindIssuanceRequest, BlindIssuanceRequestStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of issuances field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetIssuancesString(  // line separate
      const BlindRawTransactionRequest& obj) {  // NOLINT
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
      BlindRawTransactionRequest& obj,  // NOLINT
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
      const BlindRawTransactionRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  BlindRawTransactionRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using BlindRawTransactionRequestMapTable =
    cfd::core::JsonTableMap<BlindRawTransactionRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const BlindRawTransactionRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static BlindRawTransactionRequestMapTable json_mapper;
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
   * @brief JsonAPI(txins) value
   */
  JsonObjectVector<BlindTxInRequest, BlindTxInRequestStruct> txins_;  // NOLINT
  /**
   * @brief JsonAPI(txouts) value
   */
  JsonObjectVector<BlindTxOutRequest, BlindTxOutRequestStruct> txouts_;  // NOLINT
  /**
   * @brief JsonAPI(issuances) value
   */
  JsonObjectVector<BlindIssuanceRequest, BlindIssuanceRequestStruct> issuances_;  // NOLINT
};

// ------------------------------------------------------------------------
// BlindRawTransactionResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (BlindRawTransactionResponse) class
 */
class BlindRawTransactionResponse
  : public cfd::core::JsonClassBase<BlindRawTransactionResponse> {
 public:
  BlindRawTransactionResponse() {
    CollectFieldName();
  }
  virtual ~BlindRawTransactionResponse() {
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
      const BlindRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      BlindRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
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
      const BlindRawTransactionResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  BlindRawTransactionResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using BlindRawTransactionResponseMapTable =
    cfd::core::JsonTableMap<BlindRawTransactionResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const BlindRawTransactionResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static BlindRawTransactionResponseMapTable json_mapper;
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
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_BLIND_RAW_TRANSACTION_JSON_H_
