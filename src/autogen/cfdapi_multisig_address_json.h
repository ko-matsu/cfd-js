// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_multisig_address_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_MULTISIG_ADDRESS_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_MULTISIG_ADDRESS_JSON_H_

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
// CreateMultisigRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateMultisigRequest) class
 */
class CreateMultisigRequest
  : public cfd::core::JsonClassBase<CreateMultisigRequest> {
 public:
  CreateMultisigRequest() {
    CollectFieldName();
  }
  virtual ~CreateMultisigRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of nrequired
   * @return nrequired
   */
  uint8_t GetNrequired() const {
    return nrequired_;
  }
  /**
   * @brief Set to nrequired
   * @param[in] nrequired    setting value.
   */
  void SetNrequired(  // line separate
    const uint8_t& nrequired) {  // NOLINT
    this->nrequired_ = nrequired;
  }
  /**
   * @brief Get data type of nrequired
   * @return Data type of nrequired
   */
  static std::string GetNrequiredFieldType() {
    return "uint8_t";
  }
  /**
   * @brief Get json string of nrequired field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetNrequiredString(  // line separate
      const CreateMultisigRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.nrequired_);
  }
  /**
   * @brief Set json object to nrequired field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNrequiredString(  // line separate
      CreateMultisigRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.nrequired_, json_value);
  }

  /**
   * @brief Get of keys.
   * @return keys
   */
  JsonValueVector<std::string>& GetKeys() {  // NOLINT
    return keys_;
  }
  /**
   * @brief Set to keys.
   * @param[in] keys    setting value.
   */
  void SetKeys(  // line separate
      const JsonValueVector<std::string>& keys) {  // NOLINT
    this->keys_ = keys;
  }
  /**
   * @brief Get data type of keys.
   * @return Data type of keys.
   */
  static std::string GetKeysFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief Get json string of keys field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetKeysString(  // line separate
      const CreateMultisigRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.keys_.Serialize();
  }
  /**
   * @brief Set json object to keys field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetKeysString(  // line separate
      CreateMultisigRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.keys_.DeserializeUniValue(json_value);
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
      const CreateMultisigRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief Set json object to isElements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsElementsString(  // line separate
      CreateMultisigRequest& obj,  // NOLINT
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
      const CreateMultisigRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      CreateMultisigRequest& obj,  // NOLINT
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
      const CreateMultisigRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hash_type_);
  }
  /**
   * @brief Set json object to hashType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHashTypeString(  // line separate
      CreateMultisigRequest& obj,  // NOLINT
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
      const CreateMultisigRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateMultisigRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateMultisigRequestMapTable =
    cfd::core::JsonTableMap<CreateMultisigRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateMultisigRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateMultisigRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(nrequired) value
   */
  uint8_t nrequired_ = 1;
  /**
   * @brief JsonAPI(keys) value
   */
  JsonValueVector<std::string> keys_;  // NOLINT
  /**
   * @brief JsonAPI(isElements) value
   */
  bool is_elements_ = false;
  /**
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(hashType) value
   */
  std::string hash_type_ = "p2wsh";
};

// ------------------------------------------------------------------------
// CreateMultisigResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateMultisigResponse) class
 */
class CreateMultisigResponse
  : public cfd::core::JsonClassBase<CreateMultisigResponse> {
 public:
  CreateMultisigResponse() {
    CollectFieldName();
  }
  virtual ~CreateMultisigResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of address
   * @return address
   */
  std::string GetAddress() const {
    return address_;
  }
  /**
   * @brief Set to address
   * @param[in] address    setting value.
   */
  void SetAddress(  // line separate
    const std::string& address) {  // NOLINT
    this->address_ = address;
  }
  /**
   * @brief Get data type of address
   * @return Data type of address
   */
  static std::string GetAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of address field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAddressString(  // line separate
      const CreateMultisigResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.address_);
  }
  /**
   * @brief Set json object to address field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAddressString(  // line separate
      CreateMultisigResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.address_, json_value);
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
      const CreateMultisigResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief Set json object to redeemScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRedeemScriptString(  // line separate
      CreateMultisigResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.redeem_script_, json_value);
  }

  /**
   * @brief Get of witnessScript
   * @return witnessScript
   */
  std::string GetWitnessScript() const {
    return witness_script_;
  }
  /**
   * @brief Set to witnessScript
   * @param[in] witness_script    setting value.
   */
  void SetWitnessScript(  // line separate
    const std::string& witness_script) {  // NOLINT
    this->witness_script_ = witness_script;
  }
  /**
   * @brief Get data type of witnessScript
   * @return Data type of witnessScript
   */
  static std::string GetWitnessScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of witnessScript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetWitnessScriptString(  // line separate
      const CreateMultisigResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.witness_script_);
  }
  /**
   * @brief Set json object to witnessScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetWitnessScriptString(  // line separate
      CreateMultisigResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.witness_script_, json_value);
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
      const CreateMultisigResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateMultisigResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateMultisigResponseMapTable =
    cfd::core::JsonTableMap<CreateMultisigResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateMultisigResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateMultisigResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(address) value
   */
  std::string address_ = "";
  /**
   * @brief JsonAPI(redeemScript) value
   */
  std::string redeem_script_ = "";
  /**
   * @brief JsonAPI(witnessScript) value
   */
  std::string witness_script_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_MULTISIG_ADDRESS_JSON_H_
