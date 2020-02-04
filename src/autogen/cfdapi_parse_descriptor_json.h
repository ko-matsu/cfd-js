// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_parse_descriptor_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_PARSE_DESCRIPTOR_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_PARSE_DESCRIPTOR_JSON_H_

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
// ParseDescriptorRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ParseDescriptorRequest) class
 */
class ParseDescriptorRequest
  : public cfd::core::JsonClassBase<ParseDescriptorRequest> {
 public:
  ParseDescriptorRequest() {
    CollectFieldName();
  }
  virtual ~ParseDescriptorRequest() {
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
      const ParseDescriptorRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief Set json object to isElements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsElementsString(  // line separate
      ParseDescriptorRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
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
      const ParseDescriptorRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.descriptor_);
  }
  /**
   * @brief Set json object to descriptor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDescriptorString(  // line separate
      ParseDescriptorRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.descriptor_, json_value);
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
      const ParseDescriptorRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      ParseDescriptorRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
  }

  /**
   * @brief Get of bip32DerivationPath
   * @return bip32DerivationPath
   */
  std::string GetBip32DerivationPath() const {
    return bip32_derivation_path_;
  }
  /**
   * @brief Set to bip32DerivationPath
   * @param[in] bip32_derivation_path    setting value.
   */
  void SetBip32DerivationPath(  // line separate
    const std::string& bip32_derivation_path) {  // NOLINT
    this->bip32_derivation_path_ = bip32_derivation_path;
  }
  /**
   * @brief Get data type of bip32DerivationPath
   * @return Data type of bip32DerivationPath
   */
  static std::string GetBip32DerivationPathFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of bip32DerivationPath field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBip32DerivationPathString(  // line separate
      const ParseDescriptorRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.bip32_derivation_path_);
  }
  /**
   * @brief Set json object to bip32DerivationPath field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBip32DerivationPathString(  // line separate
      ParseDescriptorRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.bip32_derivation_path_, json_value);
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
      const ParseDescriptorRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ParseDescriptorRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ParseDescriptorRequestMapTable =
    cfd::core::JsonTableMap<ParseDescriptorRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ParseDescriptorRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static ParseDescriptorRequestMapTable json_mapper;
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
   * @brief JsonAPI(descriptor) value
   */
  std::string descriptor_ = "";
  /**
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(bip32DerivationPath) value
   */
  std::string bip32_derivation_path_ = "";
};

// ------------------------------------------------------------------------
// DescriptorKeyJson
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (DescriptorKeyJson) class
 */
class DescriptorKeyJson
  : public cfd::core::JsonClassBase<DescriptorKeyJson> {
 public:
  DescriptorKeyJson() {
    CollectFieldName();
  }
  virtual ~DescriptorKeyJson() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of keyType
   * @return keyType
   */
  std::string GetKeyType() const {
    return key_type_;
  }
  /**
   * @brief Set to keyType
   * @param[in] key_type    setting value.
   */
  void SetKeyType(  // line separate
    const std::string& key_type) {  // NOLINT
    this->key_type_ = key_type;
  }
  /**
   * @brief Get data type of keyType
   * @return Data type of keyType
   */
  static std::string GetKeyTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of keyType field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetKeyTypeString(  // line separate
      const DescriptorKeyJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.key_type_);
  }
  /**
   * @brief Set json object to keyType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetKeyTypeString(  // line separate
      DescriptorKeyJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.key_type_, json_value);
  }

  /**
   * @brief Get of key
   * @return key
   */
  std::string GetKey() const {
    return key_;
  }
  /**
   * @brief Set to key
   * @param[in] key    setting value.
   */
  void SetKey(  // line separate
    const std::string& key) {  // NOLINT
    this->key_ = key;
  }
  /**
   * @brief Get data type of key
   * @return Data type of key
   */
  static std::string GetKeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of key field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetKeyString(  // line separate
      const DescriptorKeyJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.key_);
  }
  /**
   * @brief Set json object to key field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetKeyString(  // line separate
      DescriptorKeyJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.key_, json_value);
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
      const DescriptorKeyJsonStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  DescriptorKeyJsonStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using DescriptorKeyJsonMapTable =
    cfd::core::JsonTableMap<DescriptorKeyJson>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const DescriptorKeyJsonMapTable& GetJsonMapper() const {  // NOLINT
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
  static DescriptorKeyJsonMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(keyType) value
   */
  std::string key_type_ = "";
  /**
   * @brief JsonAPI(key) value
   */
  std::string key_ = "";
};

// ------------------------------------------------------------------------
// DescriptorScriptJson
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (DescriptorScriptJson) class
 */
class DescriptorScriptJson
  : public cfd::core::JsonClassBase<DescriptorScriptJson> {
 public:
  DescriptorScriptJson() {
    CollectFieldName();
  }
  virtual ~DescriptorScriptJson() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of depth
   * @return depth
   */
  uint32_t GetDepth() const {
    return depth_;
  }
  /**
   * @brief Set to depth
   * @param[in] depth    setting value.
   */
  void SetDepth(  // line separate
    const uint32_t& depth) {  // NOLINT
    this->depth_ = depth;
  }
  /**
   * @brief Get data type of depth
   * @return Data type of depth
   */
  static std::string GetDepthFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of depth field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetDepthString(  // line separate
      const DescriptorScriptJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.depth_);
  }
  /**
   * @brief Set json object to depth field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDepthString(  // line separate
      DescriptorScriptJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.depth_, json_value);
  }

  /**
   * @brief Get of lockingScript
   * @return lockingScript
   */
  std::string GetLockingScript() const {
    return locking_script_;
  }
  /**
   * @brief Set to lockingScript
   * @param[in] locking_script    setting value.
   */
  void SetLockingScript(  // line separate
    const std::string& locking_script) {  // NOLINT
    this->locking_script_ = locking_script;
  }
  /**
   * @brief Get data type of lockingScript
   * @return Data type of lockingScript
   */
  static std::string GetLockingScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of lockingScript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetLockingScriptString(  // line separate
      const DescriptorScriptJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.locking_script_);
  }
  /**
   * @brief Set json object to lockingScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLockingScriptString(  // line separate
      DescriptorScriptJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.locking_script_, json_value);
  }

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
      const DescriptorScriptJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.address_);
  }
  /**
   * @brief Set json object to address field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAddressString(  // line separate
      DescriptorScriptJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.address_, json_value);
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
      const DescriptorScriptJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hash_type_);
  }
  /**
   * @brief Set json object to hashType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHashTypeString(  // line separate
      DescriptorScriptJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hash_type_, json_value);
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
      const DescriptorScriptJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief Set json object to redeemScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRedeemScriptString(  // line separate
      DescriptorScriptJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.redeem_script_, json_value);
  }

  /**
   * @brief Get of keyType
   * @return keyType
   */
  std::string GetKeyType() const {
    return key_type_;
  }
  /**
   * @brief Set to keyType
   * @param[in] key_type    setting value.
   */
  void SetKeyType(  // line separate
    const std::string& key_type) {  // NOLINT
    this->key_type_ = key_type;
  }
  /**
   * @brief Get data type of keyType
   * @return Data type of keyType
   */
  static std::string GetKeyTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of keyType field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetKeyTypeString(  // line separate
      const DescriptorScriptJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.key_type_);
  }
  /**
   * @brief Set json object to keyType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetKeyTypeString(  // line separate
      DescriptorScriptJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.key_type_, json_value);
  }

  /**
   * @brief Get of key
   * @return key
   */
  std::string GetKey() const {
    return key_;
  }
  /**
   * @brief Set to key
   * @param[in] key    setting value.
   */
  void SetKey(  // line separate
    const std::string& key) {  // NOLINT
    this->key_ = key;
  }
  /**
   * @brief Get data type of key
   * @return Data type of key
   */
  static std::string GetKeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of key field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetKeyString(  // line separate
      const DescriptorScriptJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.key_);
  }
  /**
   * @brief Set json object to key field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetKeyString(  // line separate
      DescriptorScriptJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.key_, json_value);
  }

  /**
   * @brief Get of keys.
   * @return keys
   */
  JsonObjectVector<DescriptorKeyJson, DescriptorKeyJsonStruct>& GetKeys() {  // NOLINT
    return keys_;
  }
  /**
   * @brief Set to keys.
   * @param[in] keys    setting value.
   */
  void SetKeys(  // line separate
      const JsonObjectVector<DescriptorKeyJson, DescriptorKeyJsonStruct>& keys) {  // NOLINT
    this->keys_ = keys;
  }
  /**
   * @brief Get data type of keys.
   * @return Data type of keys.
   */
  static std::string GetKeysFieldType() {
    return "JsonObjectVector<DescriptorKeyJson, DescriptorKeyJsonStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of keys field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetKeysString(  // line separate
      const DescriptorScriptJson& obj) {  // NOLINT
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
      DescriptorScriptJson& obj,  // NOLINT
      const UniValue& json_value) {
    obj.keys_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of reqNum
   * @return reqNum
   */
  int64_t GetReqNum() const {
    return req_num_;
  }
  /**
   * @brief Set to reqNum
   * @param[in] req_num    setting value.
   */
  void SetReqNum(  // line separate
    const int64_t& req_num) {  // NOLINT
    this->req_num_ = req_num;
  }
  /**
   * @brief Get data type of reqNum
   * @return Data type of reqNum
   */
  static std::string GetReqNumFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of reqNum field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetReqNumString(  // line separate
      const DescriptorScriptJson& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.req_num_);
  }
  /**
   * @brief Set json object to reqNum field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetReqNumString(  // line separate
      DescriptorScriptJson& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.req_num_, json_value);
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
      const DescriptorScriptJsonStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  DescriptorScriptJsonStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using DescriptorScriptJsonMapTable =
    cfd::core::JsonTableMap<DescriptorScriptJson>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const DescriptorScriptJsonMapTable& GetJsonMapper() const {  // NOLINT
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
  static DescriptorScriptJsonMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(depth) value
   */
  uint32_t depth_ = 0;
  /**
   * @brief JsonAPI(lockingScript) value
   */
  std::string locking_script_ = "";
  /**
   * @brief JsonAPI(address) value
   */
  std::string address_ = "";
  /**
   * @brief JsonAPI(hashType) value
   */
  std::string hash_type_ = "";
  /**
   * @brief JsonAPI(redeemScript) value
   */
  std::string redeem_script_ = "";
  /**
   * @brief JsonAPI(keyType) value
   */
  std::string key_type_ = "";
  /**
   * @brief JsonAPI(key) value
   */
  std::string key_ = "";
  /**
   * @brief JsonAPI(keys) value
   */
  JsonObjectVector<DescriptorKeyJson, DescriptorKeyJsonStruct> keys_;  // NOLINT
  /**
   * @brief JsonAPI(reqNum) value
   */
  int64_t req_num_ = 0;
};

// ------------------------------------------------------------------------
// ParseDescriptorResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ParseDescriptorResponse) class
 */
class ParseDescriptorResponse
  : public cfd::core::JsonClassBase<ParseDescriptorResponse> {
 public:
  ParseDescriptorResponse() {
    CollectFieldName();
  }
  virtual ~ParseDescriptorResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of type
   * @return type
   */
  std::string GetType() const {
    return type_;
  }
  /**
   * @brief Set to type
   * @param[in] type    setting value.
   */
  void SetType(  // line separate
    const std::string& type) {  // NOLINT
    this->type_ = type;
  }
  /**
   * @brief Get data type of type
   * @return Data type of type
   */
  static std::string GetTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of type field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTypeString(  // line separate
      const ParseDescriptorResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.type_);
  }
  /**
   * @brief Set json object to type field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTypeString(  // line separate
      ParseDescriptorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.type_, json_value);
  }

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
      const ParseDescriptorResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.address_);
  }
  /**
   * @brief Set json object to address field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAddressString(  // line separate
      ParseDescriptorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.address_, json_value);
  }

  /**
   * @brief Get of lockingScript
   * @return lockingScript
   */
  std::string GetLockingScript() const {
    return locking_script_;
  }
  /**
   * @brief Set to lockingScript
   * @param[in] locking_script    setting value.
   */
  void SetLockingScript(  // line separate
    const std::string& locking_script) {  // NOLINT
    this->locking_script_ = locking_script;
  }
  /**
   * @brief Get data type of lockingScript
   * @return Data type of lockingScript
   */
  static std::string GetLockingScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of lockingScript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetLockingScriptString(  // line separate
      const ParseDescriptorResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.locking_script_);
  }
  /**
   * @brief Set json object to lockingScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLockingScriptString(  // line separate
      ParseDescriptorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.locking_script_, json_value);
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
      const ParseDescriptorResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hash_type_);
  }
  /**
   * @brief Set json object to hashType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHashTypeString(  // line separate
      ParseDescriptorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hash_type_, json_value);
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
      const ParseDescriptorResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief Set json object to redeemScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRedeemScriptString(  // line separate
      ParseDescriptorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.redeem_script_, json_value);
  }

  /**
   * @brief Get of includeMultisig
   * @return includeMultisig
   */
  bool GetIncludeMultisig() const {
    return include_multisig_;
  }
  /**
   * @brief Set to includeMultisig
   * @param[in] include_multisig    setting value.
   */
  void SetIncludeMultisig(  // line separate
    const bool& include_multisig) {  // NOLINT
    this->include_multisig_ = include_multisig;
  }
  /**
   * @brief Get data type of includeMultisig
   * @return Data type of includeMultisig
   */
  static std::string GetIncludeMultisigFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of includeMultisig field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIncludeMultisigString(  // line separate
      const ParseDescriptorResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.include_multisig_);
  }
  /**
   * @brief Set json object to includeMultisig field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIncludeMultisigString(  // line separate
      ParseDescriptorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.include_multisig_, json_value);
  }

  /**
   * @brief Get of scripts.
   * @return scripts
   */
  JsonObjectVector<DescriptorScriptJson, DescriptorScriptJsonStruct>& GetScripts() {  // NOLINT
    return scripts_;
  }
  /**
   * @brief Set to scripts.
   * @param[in] scripts    setting value.
   */
  void SetScripts(  // line separate
      const JsonObjectVector<DescriptorScriptJson, DescriptorScriptJsonStruct>& scripts) {  // NOLINT
    this->scripts_ = scripts;
  }
  /**
   * @brief Get data type of scripts.
   * @return Data type of scripts.
   */
  static std::string GetScriptsFieldType() {
    return "JsonObjectVector<DescriptorScriptJson, DescriptorScriptJsonStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of scripts field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetScriptsString(  // line separate
      const ParseDescriptorResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.scripts_.Serialize();
  }
  /**
   * @brief Set json object to scripts field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetScriptsString(  // line separate
      ParseDescriptorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.scripts_.DeserializeUniValue(json_value);
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
      const ParseDescriptorResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ParseDescriptorResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ParseDescriptorResponseMapTable =
    cfd::core::JsonTableMap<ParseDescriptorResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ParseDescriptorResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static ParseDescriptorResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(type) value
   */
  std::string type_ = "";
  /**
   * @brief JsonAPI(address) value
   */
  std::string address_ = "";
  /**
   * @brief JsonAPI(lockingScript) value
   */
  std::string locking_script_ = "";
  /**
   * @brief JsonAPI(hashType) value
   */
  std::string hash_type_ = "";
  /**
   * @brief JsonAPI(redeemScript) value
   */
  std::string redeem_script_ = "";
  /**
   * @brief JsonAPI(includeMultisig) value
   */
  bool include_multisig_ = false;
  /**
   * @brief JsonAPI(scripts) value
   */
  JsonObjectVector<DescriptorScriptJson, DescriptorScriptJsonStruct> scripts_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_PARSE_DESCRIPTOR_JSON_H_
