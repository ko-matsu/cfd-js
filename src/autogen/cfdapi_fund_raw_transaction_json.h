// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_fund_raw_transaction_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_FUND_RAW_TRANSACTION_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_FUND_RAW_TRANSACTION_JSON_H_

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
// FundUtxoJsonData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (FundUtxoJsonData) class
 */
class FundUtxoJsonData
  : public cfd::core::JsonClassBase<FundUtxoJsonData> {
 public:
  FundUtxoJsonData() {
    CollectFieldName();
  }
  virtual ~FundUtxoJsonData() {
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
      const FundUtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      FundUtxoJsonData& obj,  // NOLINT
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
      const FundUtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      FundUtxoJsonData& obj,  // NOLINT
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
      const FundUtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      FundUtxoJsonData& obj,  // NOLINT
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
      const FundUtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      FundUtxoJsonData& obj,  // NOLINT
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
      const FundUtxoJsonData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.descriptor_);
  }
  /**
   * @brief Set json object to descriptor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDescriptorString(  // line separate
      FundUtxoJsonData& obj,  // NOLINT
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
      const FundUtxoJsonDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  FundUtxoJsonDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using FundUtxoJsonDataMapTable =
    cfd::core::JsonTableMap<FundUtxoJsonData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const FundUtxoJsonDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static FundUtxoJsonDataMapTable json_mapper;
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
// FundSelectUtxoData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (FundSelectUtxoData) class
 */
class FundSelectUtxoData
  : public cfd::core::JsonClassBase<FundSelectUtxoData> {
 public:
  FundSelectUtxoData() {
    CollectFieldName();
  }
  virtual ~FundSelectUtxoData() {
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief Set json object to redeemScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRedeemScriptString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.descriptor_);
  }
  /**
   * @brief Set json object to descriptor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDescriptorString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_issuance_);
  }
  /**
   * @brief Set json object to isIssuance field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsIssuanceString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_blind_issuance_);
  }
  /**
   * @brief Set json object to isBlindIssuance field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsBlindIssuanceString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_pegin_);
  }
  /**
   * @brief Set json object to isPegin field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsPeginString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.pegin_btc_tx_size_);
  }
  /**
   * @brief Set json object to peginBtcTxSize field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetPeginBtcTxSizeString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fedpeg_script_);
  }
  /**
   * @brief Set json object to fedpegScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFedpegScriptString(  // line separate
      FundSelectUtxoData& obj,  // NOLINT
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
      const FundSelectUtxoDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  FundSelectUtxoDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using FundSelectUtxoDataMapTable =
    cfd::core::JsonTableMap<FundSelectUtxoData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const FundSelectUtxoDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static FundSelectUtxoDataMapTable json_mapper;
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
// FundAmountMapData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (FundAmountMapData) class
 */
class FundAmountMapData
  : public cfd::core::JsonClassBase<FundAmountMapData> {
 public:
  FundAmountMapData() {
    CollectFieldName();
  }
  virtual ~FundAmountMapData() {
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
      const FundAmountMapData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      FundAmountMapData& obj,  // NOLINT
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
      const FundAmountMapData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      FundAmountMapData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.amount_, json_value);
  }

  /**
   * @brief Get of reserveAddress
   * @return reserveAddress
   */
  std::string GetReserveAddress() const {
    return reserve_address_;
  }
  /**
   * @brief Set to reserveAddress
   * @param[in] reserve_address    setting value.
   */
  void SetReserveAddress(  // line separate
    const std::string& reserve_address) {  // NOLINT
    this->reserve_address_ = reserve_address;
  }
  /**
   * @brief Get data type of reserveAddress
   * @return Data type of reserveAddress
   */
  static std::string GetReserveAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of reserveAddress field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetReserveAddressString(  // line separate
      const FundAmountMapData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.reserve_address_);
  }
  /**
   * @brief Set json object to reserveAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetReserveAddressString(  // line separate
      FundAmountMapData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.reserve_address_, json_value);
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
      const FundAmountMapDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  FundAmountMapDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using FundAmountMapDataMapTable =
    cfd::core::JsonTableMap<FundAmountMapData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const FundAmountMapDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static FundAmountMapDataMapTable json_mapper;
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
  /**
   * @brief JsonAPI(reserveAddress) value
   */
  std::string reserve_address_ = "";
};

// ------------------------------------------------------------------------
// FundFeeInfomation
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (FundFeeInfomation) class
 */
class FundFeeInfomation
  : public cfd::core::JsonClassBase<FundFeeInfomation> {
 public:
  FundFeeInfomation() {
    CollectFieldName();
  }
  virtual ~FundFeeInfomation() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

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
      const FundFeeInfomation& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fee_rate_);
  }
  /**
   * @brief Set json object to feeRate field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFeeRateString(  // line separate
      FundFeeInfomation& obj,  // NOLINT
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
      const FundFeeInfomation& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.long_term_fee_rate_);
  }
  /**
   * @brief Set json object to longTermFeeRate field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLongTermFeeRateString(  // line separate
      FundFeeInfomation& obj,  // NOLINT
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
      const FundFeeInfomation& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.knapsack_min_change_);
  }
  /**
   * @brief Set json object to knapsackMinChange field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetKnapsackMinChangeString(  // line separate
      FundFeeInfomation& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.knapsack_min_change_, json_value);
  }

  /**
   * @brief Get of dustFeeRate
   * @return dustFeeRate
   */
  double GetDustFeeRate() const {
    return dust_fee_rate_;
  }
  /**
   * @brief Set to dustFeeRate
   * @param[in] dust_fee_rate    setting value.
   */
  void SetDustFeeRate(  // line separate
    const double& dust_fee_rate) {  // NOLINT
    this->dust_fee_rate_ = dust_fee_rate;
  }
  /**
   * @brief Get data type of dustFeeRate
   * @return Data type of dustFeeRate
   */
  static std::string GetDustFeeRateFieldType() {
    return "double";
  }
  /**
   * @brief Get json string of dustFeeRate field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetDustFeeRateString(  // line separate
      const FundFeeInfomation& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.dust_fee_rate_);
  }
  /**
   * @brief Set json object to dustFeeRate field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDustFeeRateString(  // line separate
      FundFeeInfomation& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.dust_fee_rate_, json_value);
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
      const FundFeeInfomation& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fee_asset_);
  }
  /**
   * @brief Set json object to feeAsset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFeeAssetString(  // line separate
      FundFeeInfomation& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fee_asset_, json_value);
  }

  /**
   * @brief Get of isBlindEstimateFee
   * @return isBlindEstimateFee
   */
  bool GetIsBlindEstimateFee() const {
    return is_blind_estimate_fee_;
  }
  /**
   * @brief Set to isBlindEstimateFee
   * @param[in] is_blind_estimate_fee    setting value.
   */
  void SetIsBlindEstimateFee(  // line separate
    const bool& is_blind_estimate_fee) {  // NOLINT
    this->is_blind_estimate_fee_ = is_blind_estimate_fee;
  }
  /**
   * @brief Get data type of isBlindEstimateFee
   * @return Data type of isBlindEstimateFee
   */
  static std::string GetIsBlindEstimateFeeFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isBlindEstimateFee field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsBlindEstimateFeeString(  // line separate
      const FundFeeInfomation& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_blind_estimate_fee_);
  }
  /**
   * @brief Set json object to isBlindEstimateFee field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsBlindEstimateFeeString(  // line separate
      FundFeeInfomation& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_blind_estimate_fee_, json_value);
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
      const FundFeeInfomationStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  FundFeeInfomationStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using FundFeeInfomationMapTable =
    cfd::core::JsonTableMap<FundFeeInfomation>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const FundFeeInfomationMapTable& GetJsonMapper() const {  // NOLINT
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
  static FundFeeInfomationMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

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
   * @brief JsonAPI(dustFeeRate) value
   */
  double dust_fee_rate_ = 3;
  /**
   * @brief JsonAPI(feeAsset) value
   */
  std::string fee_asset_ = "";
  /**
   * @brief JsonAPI(isBlindEstimateFee) value
   */
  bool is_blind_estimate_fee_ = true;
};

// ------------------------------------------------------------------------
// FundRawTransactionRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (FundRawTransactionRequest) class
 */
class FundRawTransactionRequest
  : public cfd::core::JsonClassBase<FundRawTransactionRequest> {
 public:
  FundRawTransactionRequest() {
    CollectFieldName();
  }
  virtual ~FundRawTransactionRequest() {
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
  JsonObjectVector<FundUtxoJsonData, FundUtxoJsonDataStruct>& GetUtxos() {  // NOLINT
    return utxos_;
  }
  /**
   * @brief Set to utxos.
   * @param[in] utxos    setting value.
   */
  void SetUtxos(  // line separate
      const JsonObjectVector<FundUtxoJsonData, FundUtxoJsonDataStruct>& utxos) {  // NOLINT
    this->utxos_ = utxos;
  }
  /**
   * @brief Get data type of utxos.
   * @return Data type of utxos.
   */
  static std::string GetUtxosFieldType() {
    return "JsonObjectVector<FundUtxoJsonData, FundUtxoJsonDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of utxos field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetUtxosString(  // line separate
      const FundRawTransactionRequest& obj) {  // NOLINT
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
      FundRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.utxos_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of selectUtxos.
   * @return selectUtxos
   */
  JsonObjectVector<FundSelectUtxoData, FundSelectUtxoDataStruct>& GetSelectUtxos() {  // NOLINT
    return select_utxos_;
  }
  /**
   * @brief Set to selectUtxos.
   * @param[in] select_utxos    setting value.
   */
  void SetSelectUtxos(  // line separate
      const JsonObjectVector<FundSelectUtxoData, FundSelectUtxoDataStruct>& select_utxos) {  // NOLINT
    this->select_utxos_ = select_utxos;
  }
  /**
   * @brief Get data type of selectUtxos.
   * @return Data type of selectUtxos.
   */
  static std::string GetSelectUtxosFieldType() {
    return "JsonObjectVector<FundSelectUtxoData, FundSelectUtxoDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of selectUtxos field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetSelectUtxosString(  // line separate
      const FundRawTransactionRequest& obj) {  // NOLINT
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
      FundRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.select_utxos_.DeserializeUniValue(json_value);
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
      const FundRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_);
  }
  /**
   * @brief Set json object to tx field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxString(  // line separate
      FundRawTransactionRequest& obj,  // NOLINT
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
      const FundRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief Set json object to isElements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsElementsString(  // line separate
      FundRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
  }

  /**
   * @brief Get of network
   * @return network
   */
  std::string GetNetwork() const {
    return network_;
  }
  /**
   * @brief Set to network
   * @param[in] network    setting value.
   */
  void SetNetwork(  // line separate
    const std::string& network) {  // NOLINT
    this->network_ = network;
  }
  /**
   * @brief Get data type of network
   * @return Data type of network
   */
  static std::string GetNetworkFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of network field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetNetworkString(  // line separate
      const FundRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      FundRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
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
      const FundRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.target_amount_);
  }
  /**
   * @brief Set json object to targetAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTargetAmountString(  // line separate
      FundRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.target_amount_, json_value);
  }

  /**
   * @brief Get of reserveAddress
   * @return reserveAddress
   */
  std::string GetReserveAddress() const {
    return reserve_address_;
  }
  /**
   * @brief Set to reserveAddress
   * @param[in] reserve_address    setting value.
   */
  void SetReserveAddress(  // line separate
    const std::string& reserve_address) {  // NOLINT
    this->reserve_address_ = reserve_address;
  }
  /**
   * @brief Get data type of reserveAddress
   * @return Data type of reserveAddress
   */
  static std::string GetReserveAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of reserveAddress field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetReserveAddressString(  // line separate
      const FundRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.reserve_address_);
  }
  /**
   * @brief Set json object to reserveAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetReserveAddressString(  // line separate
      FundRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.reserve_address_, json_value);
  }

  /**
   * @brief Get of targets.
   * @return targets
   */
  JsonObjectVector<FundAmountMapData, FundAmountMapDataStruct>& GetTargets() {  // NOLINT
    return targets_;
  }
  /**
   * @brief Set to targets.
   * @param[in] targets    setting value.
   */
  void SetTargets(  // line separate
      const JsonObjectVector<FundAmountMapData, FundAmountMapDataStruct>& targets) {  // NOLINT
    this->targets_ = targets;
  }
  /**
   * @brief Get data type of targets.
   * @return Data type of targets.
   */
  static std::string GetTargetsFieldType() {
    return "JsonObjectVector<FundAmountMapData, FundAmountMapDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of targets field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTargetsString(  // line separate
      const FundRawTransactionRequest& obj) {  // NOLINT
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
      FundRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.targets_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of feeInfo.
   * @return feeInfo
   */
  FundFeeInfomation& GetFeeInfo() {  // NOLINT
    return fee_info_;
  }
  /**
   * @brief Set to feeInfo.
   * @param[in] fee_info    setting value.
   */
  void SetFeeInfo(  // line separate
      const FundFeeInfomation& fee_info) {  // NOLINT
    this->fee_info_ = fee_info;
  }
  /**
   * @brief Get data type of feeInfo.
   * @return Data type of feeInfo.
   */
  static std::string GetFeeInfoFieldType() {
    return "FundFeeInfomation";  // NOLINT
  }
  /**
   * @brief Get json string of feeInfo field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetFeeInfoString(  // line separate
      const FundRawTransactionRequest& obj) {  // NOLINT
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
      FundRawTransactionRequest& obj,  // NOLINT
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
      const FundRawTransactionRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  FundRawTransactionRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using FundRawTransactionRequestMapTable =
    cfd::core::JsonTableMap<FundRawTransactionRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const FundRawTransactionRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static FundRawTransactionRequestMapTable json_mapper;
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
  JsonObjectVector<FundUtxoJsonData, FundUtxoJsonDataStruct> utxos_;  // NOLINT
  /**
   * @brief JsonAPI(selectUtxos) value
   */
  JsonObjectVector<FundSelectUtxoData, FundSelectUtxoDataStruct> select_utxos_;  // NOLINT
  /**
   * @brief JsonAPI(tx) value
   */
  std::string tx_ = "";
  /**
   * @brief JsonAPI(isElements) value
   */
  bool is_elements_ = false;
  /**
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(targetAmount) value
   */
  int64_t target_amount_ = 0;
  /**
   * @brief JsonAPI(reserveAddress) value
   */
  std::string reserve_address_ = "";
  /**
   * @brief JsonAPI(targets) value
   */
  JsonObjectVector<FundAmountMapData, FundAmountMapDataStruct> targets_;  // NOLINT
  /**
   * @brief JsonAPI(feeInfo) value
   */
  FundFeeInfomation fee_info_;  // NOLINT
};

// ------------------------------------------------------------------------
// FundRawTransactionResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (FundRawTransactionResponse) class
 */
class FundRawTransactionResponse
  : public cfd::core::JsonClassBase<FundRawTransactionResponse> {
 public:
  FundRawTransactionResponse() {
    CollectFieldName();
  }
  virtual ~FundRawTransactionResponse() {
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
      const FundRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      FundRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief Get of usedAddresses.
   * @return usedAddresses
   */
  JsonValueVector<std::string>& GetUsedAddresses() {  // NOLINT
    return used_addresses_;
  }
  /**
   * @brief Set to usedAddresses.
   * @param[in] used_addresses    setting value.
   */
  void SetUsedAddresses(  // line separate
      const JsonValueVector<std::string>& used_addresses) {  // NOLINT
    this->used_addresses_ = used_addresses;
  }
  /**
   * @brief Get data type of usedAddresses.
   * @return Data type of usedAddresses.
   */
  static std::string GetUsedAddressesFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief Get json string of usedAddresses field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetUsedAddressesString(  // line separate
      const FundRawTransactionResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.used_addresses_.Serialize();
  }
  /**
   * @brief Set json object to usedAddresses field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetUsedAddressesString(  // line separate
      FundRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.used_addresses_.DeserializeUniValue(json_value);
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
      const FundRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fee_amount_);
  }
  /**
   * @brief Set json object to feeAmount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFeeAmountString(  // line separate
      FundRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fee_amount_, json_value);
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
      const FundRawTransactionResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  FundRawTransactionResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using FundRawTransactionResponseMapTable =
    cfd::core::JsonTableMap<FundRawTransactionResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const FundRawTransactionResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static FundRawTransactionResponseMapTable json_mapper;
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
   * @brief JsonAPI(usedAddresses) value
   */
  JsonValueVector<std::string> used_addresses_;  // NOLINT
  /**
   * @brief JsonAPI(feeAmount) value
   */
  int64_t fee_amount_ = 0;
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_FUND_RAW_TRANSACTION_JSON_H_
