// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_calculate_ec_signature_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_CALCULATE_EC_SIGNATURE_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_CALCULATE_EC_SIGNATURE_JSON_H_

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
// PrivkeyData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (PrivkeyData) class
 */
class PrivkeyData
  : public cfd::core::JsonClassBase<PrivkeyData> {
 public:
  PrivkeyData() {
    CollectFieldName();
  }
  virtual ~PrivkeyData() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of privkey
   * @return privkey
   */
  std::string GetPrivkey() const {
    return privkey_;
  }
  /**
   * @brief Set to privkey
   * @param[in] privkey    setting value.
   */
  void SetPrivkey(  // line separate
    const std::string& privkey) {  // NOLINT
    this->privkey_ = privkey;
  }
  /**
   * @brief Get data type of privkey
   * @return Data type of privkey
   */
  static std::string GetPrivkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of privkey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetPrivkeyString(  // line separate
      const PrivkeyData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.privkey_);
  }
  /**
   * @brief Set json object to privkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetPrivkeyString(  // line separate
      PrivkeyData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.privkey_, json_value);
  }

  /**
   * @brief Get of wif
   * @return wif
   */
  bool GetWif() const {
    return wif_;
  }
  /**
   * @brief Set to wif
   * @param[in] wif    setting value.
   */
  void SetWif(  // line separate
    const bool& wif) {  // NOLINT
    this->wif_ = wif;
  }
  /**
   * @brief Get data type of wif
   * @return Data type of wif
   */
  static std::string GetWifFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of wif field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetWifString(  // line separate
      const PrivkeyData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.wif_);
  }
  /**
   * @brief Set json object to wif field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetWifString(  // line separate
      PrivkeyData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.wif_, json_value);
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
      const PrivkeyData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      PrivkeyData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
  }

  /**
   * @brief Get of isCompressed
   * @return isCompressed
   */
  bool GetIsCompressed() const {
    return is_compressed_;
  }
  /**
   * @brief Set to isCompressed
   * @param[in] is_compressed    setting value.
   */
  void SetIsCompressed(  // line separate
    const bool& is_compressed) {  // NOLINT
    this->is_compressed_ = is_compressed;
  }
  /**
   * @brief Get data type of isCompressed
   * @return Data type of isCompressed
   */
  static std::string GetIsCompressedFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isCompressed field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsCompressedString(  // line separate
      const PrivkeyData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_compressed_);
  }
  /**
   * @brief Set json object to isCompressed field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsCompressedString(  // line separate
      PrivkeyData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_compressed_, json_value);
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
      const PrivkeyDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  PrivkeyDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using PrivkeyDataMapTable =
    cfd::core::JsonTableMap<PrivkeyData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const PrivkeyDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static PrivkeyDataMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(privkey) value
   */
  std::string privkey_ = "";
  /**
   * @brief JsonAPI(wif) value
   */
  bool wif_ = true;
  /**
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(isCompressed) value
   */
  bool is_compressed_ = true;
};

// ------------------------------------------------------------------------
// CalculateEcSignatureRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CalculateEcSignatureRequest) class
 */
class CalculateEcSignatureRequest
  : public cfd::core::JsonClassBase<CalculateEcSignatureRequest> {
 public:
  CalculateEcSignatureRequest() {
    CollectFieldName();
  }
  virtual ~CalculateEcSignatureRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of sighash
   * @return sighash
   */
  std::string GetSighash() const {
    return sighash_;
  }
  /**
   * @brief Set to sighash
   * @param[in] sighash    setting value.
   */
  void SetSighash(  // line separate
    const std::string& sighash) {  // NOLINT
    this->sighash_ = sighash;
  }
  /**
   * @brief Get data type of sighash
   * @return Data type of sighash
   */
  static std::string GetSighashFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of sighash field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSighashString(  // line separate
      const CalculateEcSignatureRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sighash_);
  }
  /**
   * @brief Set json object to sighash field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSighashString(  // line separate
      CalculateEcSignatureRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.sighash_, json_value);
  }

  /**
   * @brief Get of privkeyData.
   * @return privkeyData
   */
  PrivkeyData& GetPrivkeyData() {  // NOLINT
    return privkey_data_;
  }
  /**
   * @brief Set to privkeyData.
   * @param[in] privkey_data    setting value.
   */
  void SetPrivkeyData(  // line separate
      const PrivkeyData& privkey_data) {  // NOLINT
    this->privkey_data_ = privkey_data;
  }
  /**
   * @brief Get data type of privkeyData.
   * @return Data type of privkeyData.
   */
  static std::string GetPrivkeyDataFieldType() {
    return "PrivkeyData";  // NOLINT
  }
  /**
   * @brief Get json string of privkeyData field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetPrivkeyDataString(  // line separate
      const CalculateEcSignatureRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.privkey_data_.Serialize();
  }
  /**
   * @brief Set json object to privkeyData field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetPrivkeyDataString(  // line separate
      CalculateEcSignatureRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.privkey_data_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of isGrindR
   * @return isGrindR
   */
  bool GetIsGrindR() const {
    return is_grind_r_;
  }
  /**
   * @brief Set to isGrindR
   * @param[in] is_grind_r    setting value.
   */
  void SetIsGrindR(  // line separate
    const bool& is_grind_r) {  // NOLINT
    this->is_grind_r_ = is_grind_r;
  }
  /**
   * @brief Get data type of isGrindR
   * @return Data type of isGrindR
   */
  static std::string GetIsGrindRFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isGrindR field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsGrindRString(  // line separate
      const CalculateEcSignatureRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_grind_r_);
  }
  /**
   * @brief Set json object to isGrindR field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsGrindRString(  // line separate
      CalculateEcSignatureRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_grind_r_, json_value);
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
      const CalculateEcSignatureRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CalculateEcSignatureRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CalculateEcSignatureRequestMapTable =
    cfd::core::JsonTableMap<CalculateEcSignatureRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CalculateEcSignatureRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static CalculateEcSignatureRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(sighash) value
   */
  std::string sighash_ = "";
  /**
   * @brief JsonAPI(privkeyData) value
   */
  PrivkeyData privkey_data_;  // NOLINT
  /**
   * @brief JsonAPI(isGrindR) value
   */
  bool is_grind_r_ = true;
};

// ------------------------------------------------------------------------
// CalculateEcSignatureResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CalculateEcSignatureResponse) class
 */
class CalculateEcSignatureResponse
  : public cfd::core::JsonClassBase<CalculateEcSignatureResponse> {
 public:
  CalculateEcSignatureResponse() {
    CollectFieldName();
  }
  virtual ~CalculateEcSignatureResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of signature
   * @return signature
   */
  std::string GetSignature() const {
    return signature_;
  }
  /**
   * @brief Set to signature
   * @param[in] signature    setting value.
   */
  void SetSignature(  // line separate
    const std::string& signature) {  // NOLINT
    this->signature_ = signature;
  }
  /**
   * @brief Get data type of signature
   * @return Data type of signature
   */
  static std::string GetSignatureFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of signature field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSignatureString(  // line separate
      const CalculateEcSignatureResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.signature_);
  }
  /**
   * @brief Set json object to signature field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSignatureString(  // line separate
      CalculateEcSignatureResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.signature_, json_value);
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
      const CalculateEcSignatureResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CalculateEcSignatureResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CalculateEcSignatureResponseMapTable =
    cfd::core::JsonTableMap<CalculateEcSignatureResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CalculateEcSignatureResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static CalculateEcSignatureResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(signature) value
   */
  std::string signature_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_CALCULATE_EC_SIGNATURE_JSON_H_
