// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_parse_script_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_PARSE_SCRIPT_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_PARSE_SCRIPT_JSON_H_

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
// ParseScriptRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ParseScriptRequest) class
 */
class ParseScriptRequest
  : public cfd::core::JsonClassBase<ParseScriptRequest> {
 public:
  ParseScriptRequest() {
    CollectFieldName();
  }
  virtual ~ParseScriptRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of script
   * @return script
   */
  std::string GetScript() const {
    return script_;
  }
  /**
   * @brief Set to script
   * @param[in] script    setting value.
   */
  void SetScript(  // line separate
    const std::string& script) {  // NOLINT
    this->script_ = script;
  }
  /**
   * @brief Get data type of script
   * @return Data type of script
   */
  static std::string GetScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of script field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetScriptString(  // line separate
      const ParseScriptRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.script_);
  }
  /**
   * @brief Set json object to script field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetScriptString(  // line separate
      ParseScriptRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.script_, json_value);
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
      const ParseScriptRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ParseScriptRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ParseScriptRequestMapTable =
    cfd::core::JsonTableMap<ParseScriptRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ParseScriptRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static ParseScriptRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(script) value
   */
  std::string script_ = "";
};

// ------------------------------------------------------------------------
// ParseScriptResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ParseScriptResponse) class
 */
class ParseScriptResponse
  : public cfd::core::JsonClassBase<ParseScriptResponse> {
 public:
  ParseScriptResponse() {
    CollectFieldName();
  }
  virtual ~ParseScriptResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of scriptItems.
   * @return scriptItems
   */
  JsonValueVector<std::string>& GetScriptItems() {  // NOLINT
    return script_items_;
  }
  /**
   * @brief Set to scriptItems.
   * @param[in] script_items    setting value.
   */
  void SetScriptItems(  // line separate
      const JsonValueVector<std::string>& script_items) {  // NOLINT
    this->script_items_ = script_items;
  }
  /**
   * @brief Get data type of scriptItems.
   * @return Data type of scriptItems.
   */
  static std::string GetScriptItemsFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief Get json string of scriptItems field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetScriptItemsString(  // line separate
      const ParseScriptResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.script_items_.Serialize();
  }
  /**
   * @brief Set json object to scriptItems field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetScriptItemsString(  // line separate
      ParseScriptResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.script_items_.DeserializeUniValue(json_value);
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
      const ParseScriptResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ParseScriptResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ParseScriptResponseMapTable =
    cfd::core::JsonTableMap<ParseScriptResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ParseScriptResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static ParseScriptResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(scriptItems) value
   */
  JsonValueVector<std::string> script_items_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_PARSE_SCRIPT_JSON_H_
