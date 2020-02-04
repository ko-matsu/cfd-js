// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_create_extkey_from_parent_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_EXTKEY_FROM_PARENT_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_EXTKEY_FROM_PARENT_JSON_H_

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
// CreateExtkeyFromParentRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateExtkeyFromParentRequest) class
 */
class CreateExtkeyFromParentRequest
  : public cfd::core::JsonClassBase<CreateExtkeyFromParentRequest> {
 public:
  CreateExtkeyFromParentRequest() {
    CollectFieldName();
  }
  virtual ~CreateExtkeyFromParentRequest() {
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
      const CreateExtkeyFromParentRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_);
  }
  /**
   * @brief Set json object to extkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyString(  // line separate
      CreateExtkeyFromParentRequest& obj,  // NOLINT
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
      const CreateExtkeyFromParentRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      CreateExtkeyFromParentRequest& obj,  // NOLINT
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
      const CreateExtkeyFromParentRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_type_);
  }
  /**
   * @brief Set json object to extkeyType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyTypeString(  // line separate
      CreateExtkeyFromParentRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.extkey_type_, json_value);
  }

  /**
   * @brief Get of childNumber
   * @return childNumber
   */
  int64_t GetChildNumber() const {
    return child_number_;
  }
  /**
   * @brief Set to childNumber
   * @param[in] child_number    setting value.
   */
  void SetChildNumber(  // line separate
    const int64_t& child_number) {  // NOLINT
    this->child_number_ = child_number;
  }
  /**
   * @brief Get data type of childNumber
   * @return Data type of childNumber
   */
  static std::string GetChildNumberFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of childNumber field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetChildNumberString(  // line separate
      const CreateExtkeyFromParentRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.child_number_);
  }
  /**
   * @brief Set json object to childNumber field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetChildNumberString(  // line separate
      CreateExtkeyFromParentRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.child_number_, json_value);
  }

  /**
   * @brief Get of hardened
   * @return hardened
   */
  bool GetHardened() const {
    return hardened_;
  }
  /**
   * @brief Set to hardened
   * @param[in] hardened    setting value.
   */
  void SetHardened(  // line separate
    const bool& hardened) {  // NOLINT
    this->hardened_ = hardened;
  }
  /**
   * @brief Get data type of hardened
   * @return Data type of hardened
   */
  static std::string GetHardenedFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of hardened field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetHardenedString(  // line separate
      const CreateExtkeyFromParentRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hardened_);
  }
  /**
   * @brief Set json object to hardened field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHardenedString(  // line separate
      CreateExtkeyFromParentRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hardened_, json_value);
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
      const CreateExtkeyFromParentRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateExtkeyFromParentRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateExtkeyFromParentRequestMapTable =
    cfd::core::JsonTableMap<CreateExtkeyFromParentRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateExtkeyFromParentRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateExtkeyFromParentRequestMapTable json_mapper;
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
   * @brief JsonAPI(childNumber) value
   */
  int64_t child_number_ = 0;
  /**
   * @brief JsonAPI(hardened) value
   */
  bool hardened_ = false;
};

// ------------------------------------------------------------------------
// CreateExtkeyFromParentResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateExtkeyFromParentResponse) class
 */
class CreateExtkeyFromParentResponse
  : public cfd::core::JsonClassBase<CreateExtkeyFromParentResponse> {
 public:
  CreateExtkeyFromParentResponse() {
    CollectFieldName();
  }
  virtual ~CreateExtkeyFromParentResponse() {
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
      const CreateExtkeyFromParentResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_);
  }
  /**
   * @brief Set json object to extkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyString(  // line separate
      CreateExtkeyFromParentResponse& obj,  // NOLINT
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
      const CreateExtkeyFromParentResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateExtkeyFromParentResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateExtkeyFromParentResponseMapTable =
    cfd::core::JsonTableMap<CreateExtkeyFromParentResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateExtkeyFromParentResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateExtkeyFromParentResponseMapTable json_mapper;
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

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_EXTKEY_FROM_PARENT_JSON_H_
