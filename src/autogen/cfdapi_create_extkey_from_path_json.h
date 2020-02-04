// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_create_extkey_from_path_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_EXTKEY_FROM_PATH_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_EXTKEY_FROM_PATH_JSON_H_

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
// CreateExtkeyFromParentPathRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateExtkeyFromParentPathRequest) class
 */
class CreateExtkeyFromParentPathRequest
  : public cfd::core::JsonClassBase<CreateExtkeyFromParentPathRequest> {
 public:
  CreateExtkeyFromParentPathRequest() {
    CollectFieldName();
  }
  virtual ~CreateExtkeyFromParentPathRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of extkey
   * @return extkey
   */
  std::string GetExtkey() const {
    return extkey_;
  }
  /**
   * @brief Set to extkey
   * @param[in] extkey    setting value.
   */
  void SetExtkey(  // line separate
    const std::string& extkey) {  // NOLINT
    this->extkey_ = extkey;
  }
  /**
   * @brief Get data type of extkey
   * @return Data type of extkey
   */
  static std::string GetExtkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of extkey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetExtkeyString(  // line separate
      const CreateExtkeyFromParentPathRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_);
  }
  /**
   * @brief Set json object to extkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyString(  // line separate
      CreateExtkeyFromParentPathRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.extkey_, json_value);
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
      const CreateExtkeyFromParentPathRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      CreateExtkeyFromParentPathRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
  }

  /**
   * @brief Get of extkeyType
   * @return extkeyType
   */
  std::string GetExtkeyType() const {
    return extkey_type_;
  }
  /**
   * @brief Set to extkeyType
   * @param[in] extkey_type    setting value.
   */
  void SetExtkeyType(  // line separate
    const std::string& extkey_type) {  // NOLINT
    this->extkey_type_ = extkey_type;
  }
  /**
   * @brief Get data type of extkeyType
   * @return Data type of extkeyType
   */
  static std::string GetExtkeyTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of extkeyType field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetExtkeyTypeString(  // line separate
      const CreateExtkeyFromParentPathRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_type_);
  }
  /**
   * @brief Set json object to extkeyType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyTypeString(  // line separate
      CreateExtkeyFromParentPathRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.extkey_type_, json_value);
  }

  /**
   * @brief Get of childNumberArray.
   * @return childNumberArray
   */
  JsonValueVector<int64_t>& GetChildNumberArray() {  // NOLINT
    return child_number_array_;
  }
  /**
   * @brief Set to childNumberArray.
   * @param[in] child_number_array    setting value.
   */
  void SetChildNumberArray(  // line separate
      const JsonValueVector<int64_t>& child_number_array) {  // NOLINT
    this->child_number_array_ = child_number_array;
  }
  /**
   * @brief Get data type of childNumberArray.
   * @return Data type of childNumberArray.
   */
  static std::string GetChildNumberArrayFieldType() {
    return "JsonValueVector<int64_t>";  // NOLINT
  }
  /**
   * @brief Get json string of childNumberArray field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetChildNumberArrayString(  // line separate
      const CreateExtkeyFromParentPathRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.child_number_array_.Serialize();
  }
  /**
   * @brief Set json object to childNumberArray field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetChildNumberArrayString(  // line separate
      CreateExtkeyFromParentPathRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.child_number_array_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of path
   * @return path
   */
  std::string GetPath() const {
    return path_;
  }
  /**
   * @brief Set to path
   * @param[in] path    setting value.
   */
  void SetPath(  // line separate
    const std::string& path) {  // NOLINT
    this->path_ = path;
  }
  /**
   * @brief Get data type of path
   * @return Data type of path
   */
  static std::string GetPathFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of path field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetPathString(  // line separate
      const CreateExtkeyFromParentPathRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.path_);
  }
  /**
   * @brief Set json object to path field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetPathString(  // line separate
      CreateExtkeyFromParentPathRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.path_, json_value);
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
      const CreateExtkeyFromParentPathRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateExtkeyFromParentPathRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateExtkeyFromParentPathRequestMapTable =
    cfd::core::JsonTableMap<CreateExtkeyFromParentPathRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateExtkeyFromParentPathRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateExtkeyFromParentPathRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(extkey) value
   */
  std::string extkey_ = "";
  /**
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(extkeyType) value
   */
  std::string extkey_type_ = "";
  /**
   * @brief JsonAPI(childNumberArray) value
   */
  JsonValueVector<int64_t> child_number_array_;  // NOLINT
  /**
   * @brief JsonAPI(path) value
   */
  std::string path_ = "";
};

// ------------------------------------------------------------------------
// CreateExtkeyFromParentPathResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateExtkeyFromParentPathResponse) class
 */
class CreateExtkeyFromParentPathResponse
  : public cfd::core::JsonClassBase<CreateExtkeyFromParentPathResponse> {
 public:
  CreateExtkeyFromParentPathResponse() {
    CollectFieldName();
  }
  virtual ~CreateExtkeyFromParentPathResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of extkey
   * @return extkey
   */
  std::string GetExtkey() const {
    return extkey_;
  }
  /**
   * @brief Set to extkey
   * @param[in] extkey    setting value.
   */
  void SetExtkey(  // line separate
    const std::string& extkey) {  // NOLINT
    this->extkey_ = extkey;
  }
  /**
   * @brief Get data type of extkey
   * @return Data type of extkey
   */
  static std::string GetExtkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of extkey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetExtkeyString(  // line separate
      const CreateExtkeyFromParentPathResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_);
  }
  /**
   * @brief Set json object to extkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyString(  // line separate
      CreateExtkeyFromParentPathResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.extkey_, json_value);
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
      const CreateExtkeyFromParentPathResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateExtkeyFromParentPathResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateExtkeyFromParentPathResponseMapTable =
    cfd::core::JsonTableMap<CreateExtkeyFromParentPathResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateExtkeyFromParentPathResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateExtkeyFromParentPathResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(extkey) value
   */
  std::string extkey_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_EXTKEY_FROM_PATH_JSON_H_
