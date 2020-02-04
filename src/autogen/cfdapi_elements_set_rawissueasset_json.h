// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_set_rawissueasset_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_SET_RAWISSUEASSET_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_SET_RAWISSUEASSET_JSON_H_

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
// IssuanceDataRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (IssuanceDataRequest) class
 */
class IssuanceDataRequest
  : public cfd::core::JsonClassBase<IssuanceDataRequest> {
 public:
  IssuanceDataRequest() {
    CollectFieldName();
  }
  virtual ~IssuanceDataRequest() {
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
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
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
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
  }

  /**
   * @brief Get of assetAmount
   * @return assetAmount
   */
  int64_t GetAssetAmount() const {
    return asset_amount_;
  }
  /**
   * @brief Set to assetAmount
   * @param[in] asset_amount    setting value.
   */
  void SetAssetAmount(  // line separate
    const int64_t& asset_amount) {  // NOLINT
    this->asset_amount_ = asset_amount;
  }
  /**
   * @brief Get data type of assetAmount
   * @return Data type of assetAmount
   */
  static std::string GetAssetAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of assetAmount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAssetAmountString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_amount_);
  }
  /**
   * @brief Set json object to assetAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetAmountString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_amount_, json_value);
  }

  /**
   * @brief Get of assetAddress
   * @return assetAddress
   */
  std::string GetAssetAddress() const {
    return asset_address_;
  }
  /**
   * @brief Set to assetAddress
   * @param[in] asset_address    setting value.
   */
  void SetAssetAddress(  // line separate
    const std::string& asset_address) {  // NOLINT
    this->asset_address_ = asset_address;
  }
  /**
   * @brief Get data type of assetAddress
   * @return Data type of assetAddress
   */
  static std::string GetAssetAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of assetAddress field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAssetAddressString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_address_);
  }
  /**
   * @brief Set json object to assetAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetAddressString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_address_, json_value);
  }

  /**
   * @brief Get of tokenAmount
   * @return tokenAmount
   */
  int64_t GetTokenAmount() const {
    return token_amount_;
  }
  /**
   * @brief Set to tokenAmount
   * @param[in] token_amount    setting value.
   */
  void SetTokenAmount(  // line separate
    const int64_t& token_amount) {  // NOLINT
    this->token_amount_ = token_amount;
  }
  /**
   * @brief Get data type of tokenAmount
   * @return Data type of tokenAmount
   */
  static std::string GetTokenAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of tokenAmount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTokenAmountString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.token_amount_);
  }
  /**
   * @brief Set json object to tokenAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTokenAmountString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.token_amount_, json_value);
  }

  /**
   * @brief Get of tokenAddress
   * @return tokenAddress
   */
  std::string GetTokenAddress() const {
    return token_address_;
  }
  /**
   * @brief Set to tokenAddress
   * @param[in] token_address    setting value.
   */
  void SetTokenAddress(  // line separate
    const std::string& token_address) {  // NOLINT
    this->token_address_ = token_address;
  }
  /**
   * @brief Get data type of tokenAddress
   * @return Data type of tokenAddress
   */
  static std::string GetTokenAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of tokenAddress field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTokenAddressString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.token_address_);
  }
  /**
   * @brief Set json object to tokenAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTokenAddressString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.token_address_, json_value);
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
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_blind_);
  }
  /**
   * @brief Set json object to isBlind field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsBlindString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_blind_, json_value);
  }

  /**
   * @brief Get of contractHash
   * @return contractHash
   */
  std::string GetContractHash() const {
    return contract_hash_;
  }
  /**
   * @brief Set to contractHash
   * @param[in] contract_hash    setting value.
   */
  void SetContractHash(  // line separate
    const std::string& contract_hash) {  // NOLINT
    this->contract_hash_ = contract_hash;
  }
  /**
   * @brief Get data type of contractHash
   * @return Data type of contractHash
   */
  static std::string GetContractHashFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of contractHash field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetContractHashString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.contract_hash_);
  }
  /**
   * @brief Set json object to contractHash field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetContractHashString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.contract_hash_, json_value);
  }

  /**
   * @brief Get of isRemoveNonce
   * @return isRemoveNonce
   */
  bool GetIsRemoveNonce() const {
    return is_remove_nonce_;
  }
  /**
   * @brief Set to isRemoveNonce
   * @param[in] is_remove_nonce    setting value.
   */
  void SetIsRemoveNonce(  // line separate
    const bool& is_remove_nonce) {  // NOLINT
    this->is_remove_nonce_ = is_remove_nonce;
  }
  /**
   * @brief Get data type of isRemoveNonce
   * @return Data type of isRemoveNonce
   */
  static std::string GetIsRemoveNonceFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isRemoveNonce field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsRemoveNonceString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_remove_nonce_);
  }
  /**
   * @brief Set json object to isRemoveNonce field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsRemoveNonceString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_remove_nonce_, json_value);
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
      const IssuanceDataRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  IssuanceDataRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using IssuanceDataRequestMapTable =
    cfd::core::JsonTableMap<IssuanceDataRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const IssuanceDataRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static IssuanceDataRequestMapTable json_mapper;
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
   * @brief JsonAPI(assetAmount) value
   */
  int64_t asset_amount_ = 0;
  /**
   * @brief JsonAPI(assetAddress) value
   */
  std::string asset_address_ = "";
  /**
   * @brief JsonAPI(tokenAmount) value
   */
  int64_t token_amount_ = 0;
  /**
   * @brief JsonAPI(tokenAddress) value
   */
  std::string token_address_ = "";
  /**
   * @brief JsonAPI(isBlind) value
   */
  bool is_blind_ = true;
  /**
   * @brief JsonAPI(contractHash) value
   */
  std::string contract_hash_ = "";
  /**
   * @brief JsonAPI(isRemoveNonce) value
   */
  bool is_remove_nonce_ = false;
};

// ------------------------------------------------------------------------
// SetRawIssueAssetRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (SetRawIssueAssetRequest) class
 */
class SetRawIssueAssetRequest
  : public cfd::core::JsonClassBase<SetRawIssueAssetRequest> {
 public:
  SetRawIssueAssetRequest() {
    CollectFieldName();
  }
  virtual ~SetRawIssueAssetRequest() {
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
      const SetRawIssueAssetRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_);
  }
  /**
   * @brief Set json object to tx field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxString(  // line separate
      SetRawIssueAssetRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tx_, json_value);
  }

  /**
   * @brief Get of isRandomSortTxOut
   * @return isRandomSortTxOut
   */
  bool GetIsRandomSortTxOut() const {
    return is_random_sort_tx_out_;
  }
  /**
   * @brief Set to isRandomSortTxOut
   * @param[in] is_random_sort_tx_out    setting value.
   */
  void SetIsRandomSortTxOut(  // line separate
    const bool& is_random_sort_tx_out) {  // NOLINT
    this->is_random_sort_tx_out_ = is_random_sort_tx_out;
  }
  /**
   * @brief Get data type of isRandomSortTxOut
   * @return Data type of isRandomSortTxOut
   */
  static std::string GetIsRandomSortTxOutFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isRandomSortTxOut field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsRandomSortTxOutString(  // line separate
      const SetRawIssueAssetRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_random_sort_tx_out_);
  }
  /**
   * @brief Set json object to isRandomSortTxOut field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsRandomSortTxOutString(  // line separate
      SetRawIssueAssetRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_random_sort_tx_out_, json_value);
  }

  /**
   * @brief Get of issuances.
   * @return issuances
   */
  JsonObjectVector<IssuanceDataRequest, IssuanceDataRequestStruct>& GetIssuances() {  // NOLINT
    return issuances_;
  }
  /**
   * @brief Set to issuances.
   * @param[in] issuances    setting value.
   */
  void SetIssuances(  // line separate
      const JsonObjectVector<IssuanceDataRequest, IssuanceDataRequestStruct>& issuances) {  // NOLINT
    this->issuances_ = issuances;
  }
  /**
   * @brief Get data type of issuances.
   * @return Data type of issuances.
   */
  static std::string GetIssuancesFieldType() {
    return "JsonObjectVector<IssuanceDataRequest, IssuanceDataRequestStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of issuances field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetIssuancesString(  // line separate
      const SetRawIssueAssetRequest& obj) {  // NOLINT
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
      SetRawIssueAssetRequest& obj,  // NOLINT
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
      const SetRawIssueAssetRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  SetRawIssueAssetRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using SetRawIssueAssetRequestMapTable =
    cfd::core::JsonTableMap<SetRawIssueAssetRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const SetRawIssueAssetRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static SetRawIssueAssetRequestMapTable json_mapper;
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
   * @brief JsonAPI(isRandomSortTxOut) value
   */
  bool is_random_sort_tx_out_ = false;
  /**
   * @brief JsonAPI(issuances) value
   */
  JsonObjectVector<IssuanceDataRequest, IssuanceDataRequestStruct> issuances_;  // NOLINT
};

// ------------------------------------------------------------------------
// IssuanceDataResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (IssuanceDataResponse) class
 */
class IssuanceDataResponse
  : public cfd::core::JsonClassBase<IssuanceDataResponse> {
 public:
  IssuanceDataResponse() {
    CollectFieldName();
  }
  virtual ~IssuanceDataResponse() {
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
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
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
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
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
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
  }

  /**
   * @brief Get of entropy
   * @return entropy
   */
  std::string GetEntropy() const {
    return entropy_;
  }
  /**
   * @brief Set to entropy
   * @param[in] entropy    setting value.
   */
  void SetEntropy(  // line separate
    const std::string& entropy) {  // NOLINT
    this->entropy_ = entropy;
  }
  /**
   * @brief Get data type of entropy
   * @return Data type of entropy
   */
  static std::string GetEntropyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of entropy field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetEntropyString(  // line separate
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.entropy_);
  }
  /**
   * @brief Set json object to entropy field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetEntropyString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.entropy_, json_value);
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
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.token_);
  }
  /**
   * @brief Set json object to token field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTokenString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.token_, json_value);
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
      const IssuanceDataResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  IssuanceDataResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using IssuanceDataResponseMapTable =
    cfd::core::JsonTableMap<IssuanceDataResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const IssuanceDataResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static IssuanceDataResponseMapTable json_mapper;
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
   * @brief JsonAPI(entropy) value
   */
  std::string entropy_ = "";
  /**
   * @brief JsonAPI(token) value
   */
  std::string token_ = "";
};

// ------------------------------------------------------------------------
// SetRawIssueAssetResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (SetRawIssueAssetResponse) class
 */
class SetRawIssueAssetResponse
  : public cfd::core::JsonClassBase<SetRawIssueAssetResponse> {
 public:
  SetRawIssueAssetResponse() {
    CollectFieldName();
  }
  virtual ~SetRawIssueAssetResponse() {
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
      const SetRawIssueAssetResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      SetRawIssueAssetResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief Get of issuances.
   * @return issuances
   */
  JsonObjectVector<IssuanceDataResponse, IssuanceDataResponseStruct>& GetIssuances() {  // NOLINT
    return issuances_;
  }
  /**
   * @brief Set to issuances.
   * @param[in] issuances    setting value.
   */
  void SetIssuances(  // line separate
      const JsonObjectVector<IssuanceDataResponse, IssuanceDataResponseStruct>& issuances) {  // NOLINT
    this->issuances_ = issuances;
  }
  /**
   * @brief Get data type of issuances.
   * @return Data type of issuances.
   */
  static std::string GetIssuancesFieldType() {
    return "JsonObjectVector<IssuanceDataResponse, IssuanceDataResponseStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of issuances field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetIssuancesString(  // line separate
      const SetRawIssueAssetResponse& obj) {  // NOLINT
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
      SetRawIssueAssetResponse& obj,  // NOLINT
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
      const SetRawIssueAssetResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  SetRawIssueAssetResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using SetRawIssueAssetResponseMapTable =
    cfd::core::JsonTableMap<SetRawIssueAssetResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const SetRawIssueAssetResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static SetRawIssueAssetResponseMapTable json_mapper;
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
   * @brief JsonAPI(issuances) value
   */
  JsonObjectVector<IssuanceDataResponse, IssuanceDataResponseStruct> issuances_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_SET_RAWISSUEASSET_JSON_H_
