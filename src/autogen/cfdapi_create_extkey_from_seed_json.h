// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_create_extkey_from_seed_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_EXTKEY_FROM_SEED_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_EXTKEY_FROM_SEED_JSON_H_

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
// CreateExtkeyFromSeedRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateExtkeyFromSeedRequest) class
 */
class CreateExtkeyFromSeedRequest
  : public cfd::core::JsonClassBase<CreateExtkeyFromSeedRequest> {
 public:
  CreateExtkeyFromSeedRequest() {
    CollectFieldName();
  }
  virtual ~CreateExtkeyFromSeedRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of seed
   * @return seed
   */
  std::string GetSeed() const {
    return seed_;
  }
  /**
   * @brief Set to seed
   * @param[in] seed    setting value.
   */
  void SetSeed(  // line separate
    const std::string& seed) {  // NOLINT
    this->seed_ = seed;
  }
  /**
   * @brief Get data type of seed
   * @return Data type of seed
   */
  static std::string GetSeedFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of seed field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSeedString(  // line separate
      const CreateExtkeyFromSeedRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.seed_);
  }
  /**
   * @brief Set json object to seed field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSeedString(  // line separate
      CreateExtkeyFromSeedRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.seed_, json_value);
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
      const CreateExtkeyFromSeedRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      CreateExtkeyFromSeedRequest& obj,  // NOLINT
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
      const CreateExtkeyFromSeedRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_type_);
  }
  /**
   * @brief Set json object to extkeyType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyTypeString(  // line separate
      CreateExtkeyFromSeedRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.extkey_type_, json_value);
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
      const CreateExtkeyFromSeedRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateExtkeyFromSeedRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateExtkeyFromSeedRequestMapTable =
    cfd::core::JsonTableMap<CreateExtkeyFromSeedRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateExtkeyFromSeedRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateExtkeyFromSeedRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(seed) value
   */
  std::string seed_ = "";
  /**
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(extkeyType) value
   */
  std::string extkey_type_ = "extPrivkey";
};

// ------------------------------------------------------------------------
// CreateExtkeyFromSeedResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateExtkeyFromSeedResponse) class
 */
class CreateExtkeyFromSeedResponse
  : public cfd::core::JsonClassBase<CreateExtkeyFromSeedResponse> {
 public:
  CreateExtkeyFromSeedResponse() {
    CollectFieldName();
  }
  virtual ~CreateExtkeyFromSeedResponse() {
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
      const CreateExtkeyFromSeedResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_);
  }
  /**
   * @brief Set json object to extkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyString(  // line separate
      CreateExtkeyFromSeedResponse& obj,  // NOLINT
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
      const CreateExtkeyFromSeedResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateExtkeyFromSeedResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateExtkeyFromSeedResponseMapTable =
    cfd::core::JsonTableMap<CreateExtkeyFromSeedResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateExtkeyFromSeedResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateExtkeyFromSeedResponseMapTable json_mapper;
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

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_EXTKEY_FROM_SEED_JSON_H_
