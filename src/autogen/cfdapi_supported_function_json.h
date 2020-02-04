// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_supported_function_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_SUPPORTED_FUNCTION_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_SUPPORTED_FUNCTION_JSON_H_

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
// GetSupportedFunctionResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetSupportedFunctionResponse) class
 */
class GetSupportedFunctionResponse
  : public cfd::core::JsonClassBase<GetSupportedFunctionResponse> {
 public:
  GetSupportedFunctionResponse() {
    CollectFieldName();
  }
  virtual ~GetSupportedFunctionResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of bitcoin
   * @return bitcoin
   */
  bool GetBitcoin() const {
    return bitcoin_;
  }
  /**
   * @brief Set to bitcoin
   * @param[in] bitcoin    setting value.
   */
  void SetBitcoin(  // line separate
    const bool& bitcoin) {  // NOLINT
    this->bitcoin_ = bitcoin;
  }
  /**
   * @brief Get data type of bitcoin
   * @return Data type of bitcoin
   */
  static std::string GetBitcoinFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of bitcoin field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBitcoinString(  // line separate
      const GetSupportedFunctionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.bitcoin_);
  }
  /**
   * @brief Set json object to bitcoin field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBitcoinString(  // line separate
      GetSupportedFunctionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.bitcoin_, json_value);
  }

  /**
   * @brief Get of elements
   * @return elements
   */
  bool GetElements() const {
    return elements_;
  }
  /**
   * @brief Set to elements
   * @param[in] elements    setting value.
   */
  void SetElements(  // line separate
    const bool& elements) {  // NOLINT
    this->elements_ = elements;
  }
  /**
   * @brief Get data type of elements
   * @return Data type of elements
   */
  static std::string GetElementsFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of elements field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetElementsString(  // line separate
      const GetSupportedFunctionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.elements_);
  }
  /**
   * @brief Set json object to elements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetElementsString(  // line separate
      GetSupportedFunctionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.elements_, json_value);
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
      const GetSupportedFunctionResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetSupportedFunctionResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetSupportedFunctionResponseMapTable =
    cfd::core::JsonTableMap<GetSupportedFunctionResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetSupportedFunctionResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetSupportedFunctionResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(bitcoin) value
   */
  bool bitcoin_ = false;
  /**
   * @brief JsonAPI(elements) value
   */
  bool elements_ = false;
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_SUPPORTED_FUNCTION_JSON_H_
