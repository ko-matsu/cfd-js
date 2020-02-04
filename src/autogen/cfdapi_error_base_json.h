// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_error_base_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ERROR_BASE_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ERROR_BASE_JSON_H_

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
// InnerErrorResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (InnerErrorResponse) class
 */
class InnerErrorResponse
  : public cfd::core::JsonClassBase<InnerErrorResponse> {
 public:
  InnerErrorResponse() {
    CollectFieldName();
  }
  virtual ~InnerErrorResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of code
   * @return code
   */
  int64_t GetCode() const {
    return code_;
  }
  /**
   * @brief Set to code
   * @param[in] code    setting value.
   */
  void SetCode(  // line separate
    const int64_t& code) {  // NOLINT
    this->code_ = code;
  }
  /**
   * @brief Get data type of code
   * @return Data type of code
   */
  static std::string GetCodeFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of code field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetCodeString(  // line separate
      const InnerErrorResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.code_);
  }
  /**
   * @brief Set json object to code field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetCodeString(  // line separate
      InnerErrorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.code_, json_value);
  }

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
      const InnerErrorResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.type_);
  }
  /**
   * @brief Set json object to type field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTypeString(  // line separate
      InnerErrorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.type_, json_value);
  }

  /**
   * @brief Get of message
   * @return message
   */
  std::string GetMessage() const {
    return message_;
  }
  /**
   * @brief Set to message
   * @param[in] message    setting value.
   */
  void SetMessage(  // line separate
    const std::string& message) {  // NOLINT
    this->message_ = message;
  }
  /**
   * @brief Get data type of message
   * @return Data type of message
   */
  static std::string GetMessageFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of message field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetMessageString(  // line separate
      const InnerErrorResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.message_);
  }
  /**
   * @brief Set json object to message field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetMessageString(  // line separate
      InnerErrorResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.message_, json_value);
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
      const InnerErrorResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  InnerErrorResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using InnerErrorResponseMapTable =
    cfd::core::JsonTableMap<InnerErrorResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const InnerErrorResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static InnerErrorResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(code) value
   */
  int64_t code_ = 0;
  /**
   * @brief JsonAPI(type) value
   */
  std::string type_ = "";
  /**
   * @brief JsonAPI(message) value
   */
  std::string message_ = "";
};

// ------------------------------------------------------------------------
// ErrorResponseBase
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ErrorResponseBase) class
 */
class ErrorResponseBase
  : public cfd::core::JsonClassBase<ErrorResponseBase> {
 public:
  ErrorResponseBase() {
    CollectFieldName();
  }
  virtual ~ErrorResponseBase() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of error.
   * @return error
   */
  InnerErrorResponse& GetError() {  // NOLINT
    return error_;
  }
  /**
   * @brief Set to error.
   * @param[in] error    setting value.
   */
  void SetError(  // line separate
      const InnerErrorResponse& error) {  // NOLINT
    this->error_ = error;
  }
  /**
   * @brief Get data type of error.
   * @return Data type of error.
   */
  static std::string GetErrorFieldType() {
    return "InnerErrorResponse";  // NOLINT
  }
  /**
   * @brief Get json string of error field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetErrorString(  // line separate
      const ErrorResponseBase& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.error_.Serialize();
  }
  /**
   * @brief Set json object to error field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetErrorString(  // line separate
      ErrorResponseBase& obj,  // NOLINT
      const UniValue& json_value) {
    obj.error_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Set ignore item.
   * @param[in] key   ignore target key name.
   */
  void SetIgnoreItem(const std::string& key) {
    ignore_items.insert(key);
  }



 protected:
  /**
   * @brief definition type of Map table.
   */
  using ErrorResponseBaseMapTable =
    cfd::core::JsonTableMap<ErrorResponseBase>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ErrorResponseBaseMapTable& GetJsonMapper() const {  // NOLINT
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
  static ErrorResponseBaseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(error) value
   */
  InnerErrorResponse error_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ERROR_BASE_JSON_H_
