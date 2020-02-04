// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_get_confidential_address_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_GET_CONFIDENTIAL_ADDRESS_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_GET_CONFIDENTIAL_ADDRESS_JSON_H_

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
// GetConfidentialAddressRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetConfidentialAddressRequest) class
 */
class GetConfidentialAddressRequest
  : public cfd::core::JsonClassBase<GetConfidentialAddressRequest> {
 public:
  GetConfidentialAddressRequest() {
    CollectFieldName();
  }
  virtual ~GetConfidentialAddressRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of unblindedAddress
   * @return unblindedAddress
   */
  std::string GetUnblindedAddress() const {
    return unblinded_address_;
  }
  /**
   * @brief Set to unblindedAddress
   * @param[in] unblinded_address    setting value.
   */
  void SetUnblindedAddress(  // line separate
    const std::string& unblinded_address) {  // NOLINT
    this->unblinded_address_ = unblinded_address;
  }
  /**
   * @brief Get data type of unblindedAddress
   * @return Data type of unblindedAddress
   */
  static std::string GetUnblindedAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of unblindedAddress field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetUnblindedAddressString(  // line separate
      const GetConfidentialAddressRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.unblinded_address_);
  }
  /**
   * @brief Set json object to unblindedAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetUnblindedAddressString(  // line separate
      GetConfidentialAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.unblinded_address_, json_value);
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
      const GetConfidentialAddressRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.key_);
  }
  /**
   * @brief Set json object to key field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetKeyString(  // line separate
      GetConfidentialAddressRequest& obj,  // NOLINT
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
      const GetConfidentialAddressRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetConfidentialAddressRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetConfidentialAddressRequestMapTable =
    cfd::core::JsonTableMap<GetConfidentialAddressRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetConfidentialAddressRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetConfidentialAddressRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(unblindedAddress) value
   */
  std::string unblinded_address_ = "";
  /**
   * @brief JsonAPI(key) value
   */
  std::string key_ = "";
};

// ------------------------------------------------------------------------
// GetConfidentialAddressResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetConfidentialAddressResponse) class
 */
class GetConfidentialAddressResponse
  : public cfd::core::JsonClassBase<GetConfidentialAddressResponse> {
 public:
  GetConfidentialAddressResponse() {
    CollectFieldName();
  }
  virtual ~GetConfidentialAddressResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of confidentialAddress
   * @return confidentialAddress
   */
  std::string GetConfidentialAddress() const {
    return confidential_address_;
  }
  /**
   * @brief Set to confidentialAddress
   * @param[in] confidential_address    setting value.
   */
  void SetConfidentialAddress(  // line separate
    const std::string& confidential_address) {  // NOLINT
    this->confidential_address_ = confidential_address;
  }
  /**
   * @brief Get data type of confidentialAddress
   * @return Data type of confidentialAddress
   */
  static std::string GetConfidentialAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of confidentialAddress field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetConfidentialAddressString(  // line separate
      const GetConfidentialAddressResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.confidential_address_);
  }
  /**
   * @brief Set json object to confidentialAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetConfidentialAddressString(  // line separate
      GetConfidentialAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.confidential_address_, json_value);
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
      const GetConfidentialAddressResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetConfidentialAddressResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetConfidentialAddressResponseMapTable =
    cfd::core::JsonTableMap<GetConfidentialAddressResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetConfidentialAddressResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetConfidentialAddressResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(confidentialAddress) value
   */
  std::string confidential_address_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_GET_CONFIDENTIAL_ADDRESS_JSON_H_
