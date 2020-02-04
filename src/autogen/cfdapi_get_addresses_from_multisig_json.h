// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_get_addresses_from_multisig_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_GET_ADDRESSES_FROM_MULTISIG_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_GET_ADDRESSES_FROM_MULTISIG_JSON_H_

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
// GetAddressesFromMultisigRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetAddressesFromMultisigRequest) class
 */
class GetAddressesFromMultisigRequest
  : public cfd::core::JsonClassBase<GetAddressesFromMultisigRequest> {
 public:
  GetAddressesFromMultisigRequest() {
    CollectFieldName();
  }
  virtual ~GetAddressesFromMultisigRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

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
      const GetAddressesFromMultisigRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief Set json object to isElements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsElementsString(  // line separate
      GetAddressesFromMultisigRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
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
      const GetAddressesFromMultisigRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief Set json object to redeemScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRedeemScriptString(  // line separate
      GetAddressesFromMultisigRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.redeem_script_, json_value);
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
      const GetAddressesFromMultisigRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      GetAddressesFromMultisigRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
  }

  /**
   * @brief Get of hashType
   * @return hashType
   */
  std::string GetHashType() const {
    return hash_type_;
  }
  /**
   * @brief Set to hashType
   * @param[in] hash_type    setting value.
   */
  void SetHashType(  // line separate
    const std::string& hash_type) {  // NOLINT
    this->hash_type_ = hash_type;
  }
  /**
   * @brief Get data type of hashType
   * @return Data type of hashType
   */
  static std::string GetHashTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of hashType field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetHashTypeString(  // line separate
      const GetAddressesFromMultisigRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hash_type_);
  }
  /**
   * @brief Set json object to hashType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHashTypeString(  // line separate
      GetAddressesFromMultisigRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hash_type_, json_value);
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
      const GetAddressesFromMultisigRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetAddressesFromMultisigRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetAddressesFromMultisigRequestMapTable =
    cfd::core::JsonTableMap<GetAddressesFromMultisigRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetAddressesFromMultisigRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetAddressesFromMultisigRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(isElements) value
   */
  bool is_elements_ = false;
  /**
   * @brief JsonAPI(redeemScript) value
   */
  std::string redeem_script_ = "";
  /**
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(hashType) value
   */
  std::string hash_type_ = "p2wpkh";
};

// ------------------------------------------------------------------------
// GetAddressesFromMultisigResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetAddressesFromMultisigResponse) class
 */
class GetAddressesFromMultisigResponse
  : public cfd::core::JsonClassBase<GetAddressesFromMultisigResponse> {
 public:
  GetAddressesFromMultisigResponse() {
    CollectFieldName();
  }
  virtual ~GetAddressesFromMultisigResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of addresses.
   * @return addresses
   */
  JsonValueVector<std::string>& GetAddresses() {  // NOLINT
    return addresses_;
  }
  /**
   * @brief Set to addresses.
   * @param[in] addresses    setting value.
   */
  void SetAddresses(  // line separate
      const JsonValueVector<std::string>& addresses) {  // NOLINT
    this->addresses_ = addresses;
  }
  /**
   * @brief Get data type of addresses.
   * @return Data type of addresses.
   */
  static std::string GetAddressesFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief Get json string of addresses field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetAddressesString(  // line separate
      const GetAddressesFromMultisigResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.addresses_.Serialize();
  }
  /**
   * @brief Set json object to addresses field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetAddressesString(  // line separate
      GetAddressesFromMultisigResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.addresses_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of pubkeys.
   * @return pubkeys
   */
  JsonValueVector<std::string>& GetPubkeys() {  // NOLINT
    return pubkeys_;
  }
  /**
   * @brief Set to pubkeys.
   * @param[in] pubkeys    setting value.
   */
  void SetPubkeys(  // line separate
      const JsonValueVector<std::string>& pubkeys) {  // NOLINT
    this->pubkeys_ = pubkeys;
  }
  /**
   * @brief Get data type of pubkeys.
   * @return Data type of pubkeys.
   */
  static std::string GetPubkeysFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief Get json string of pubkeys field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetPubkeysString(  // line separate
      const GetAddressesFromMultisigResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.pubkeys_.Serialize();
  }
  /**
   * @brief Set json object to pubkeys field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetPubkeysString(  // line separate
      GetAddressesFromMultisigResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.pubkeys_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of requireNum
   * @return requireNum
   */
  int64_t GetRequireNum() const {
    return require_num_;
  }
  /**
   * @brief Set to requireNum
   * @param[in] require_num    setting value.
   */
  void SetRequireNum(  // line separate
    const int64_t& require_num) {  // NOLINT
    this->require_num_ = require_num;
  }
  /**
   * @brief Get data type of requireNum
   * @return Data type of requireNum
   */
  static std::string GetRequireNumFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of requireNum field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetRequireNumString(  // line separate
      const GetAddressesFromMultisigResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.require_num_);
  }
  /**
   * @brief Set json object to requireNum field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRequireNumString(  // line separate
      GetAddressesFromMultisigResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.require_num_, json_value);
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
      const GetAddressesFromMultisigResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetAddressesFromMultisigResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetAddressesFromMultisigResponseMapTable =
    cfd::core::JsonTableMap<GetAddressesFromMultisigResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetAddressesFromMultisigResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetAddressesFromMultisigResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(addresses) value
   */
  JsonValueVector<std::string> addresses_;  // NOLINT
  /**
   * @brief JsonAPI(pubkeys) value
   */
  JsonValueVector<std::string> pubkeys_;  // NOLINT
  /**
   * @brief JsonAPI(requireNum) value
   */
  int64_t require_num_ = 0;
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_GET_ADDRESSES_FROM_MULTISIG_JSON_H_
