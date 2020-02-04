// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_get_unblinded_address_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_GET_UNBLINDED_ADDRESS_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_GET_UNBLINDED_ADDRESS_JSON_H_

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
// GetUnblindedAddressRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetUnblindedAddressRequest) class
 */
class GetUnblindedAddressRequest
  : public cfd::core::JsonClassBase<GetUnblindedAddressRequest> {
 public:
  GetUnblindedAddressRequest() {
    CollectFieldName();
  }
  virtual ~GetUnblindedAddressRequest() {
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
      const GetUnblindedAddressRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.confidential_address_);
  }
  /**
   * @brief Set json object to confidentialAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetConfidentialAddressString(  // line separate
      GetUnblindedAddressRequest& obj,  // NOLINT
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
      const GetUnblindedAddressRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetUnblindedAddressRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetUnblindedAddressRequestMapTable =
    cfd::core::JsonTableMap<GetUnblindedAddressRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetUnblindedAddressRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetUnblindedAddressRequestMapTable json_mapper;
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

// ------------------------------------------------------------------------
// GetUnblindedAddressResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetUnblindedAddressResponse) class
 */
class GetUnblindedAddressResponse
  : public cfd::core::JsonClassBase<GetUnblindedAddressResponse> {
 public:
  GetUnblindedAddressResponse() {
    CollectFieldName();
  }
  virtual ~GetUnblindedAddressResponse() {
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
      const GetUnblindedAddressResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.unblinded_address_);
  }
  /**
   * @brief Set json object to unblindedAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetUnblindedAddressString(  // line separate
      GetUnblindedAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.unblinded_address_, json_value);
  }

  /**
   * @brief Get of confidentialKey
   * @return confidentialKey
   */
  std::string GetConfidentialKey() const {
    return confidential_key_;
  }
  /**
   * @brief Set to confidentialKey
   * @param[in] confidential_key    setting value.
   */
  void SetConfidentialKey(  // line separate
    const std::string& confidential_key) {  // NOLINT
    this->confidential_key_ = confidential_key;
  }
  /**
   * @brief Get data type of confidentialKey
   * @return Data type of confidentialKey
   */
  static std::string GetConfidentialKeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of confidentialKey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetConfidentialKeyString(  // line separate
      const GetUnblindedAddressResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.confidential_key_);
  }
  /**
   * @brief Set json object to confidentialKey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetConfidentialKeyString(  // line separate
      GetUnblindedAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.confidential_key_, json_value);
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
      const GetUnblindedAddressResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetUnblindedAddressResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetUnblindedAddressResponseMapTable =
    cfd::core::JsonTableMap<GetUnblindedAddressResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetUnblindedAddressResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetUnblindedAddressResponseMapTable json_mapper;
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
   * @brief JsonAPI(confidentialKey) value
   */
  std::string confidential_key_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_GET_UNBLINDED_ADDRESS_JSON_H_
