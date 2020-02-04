// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_get_extkeyinfo_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_GET_EXTKEYINFO_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_GET_EXTKEYINFO_JSON_H_

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
// GetExtkeyInfoRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetExtkeyInfoRequest) class
 */
class GetExtkeyInfoRequest
  : public cfd::core::JsonClassBase<GetExtkeyInfoRequest> {
 public:
  GetExtkeyInfoRequest() {
    CollectFieldName();
  }
  virtual ~GetExtkeyInfoRequest() {
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
      const GetExtkeyInfoRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_);
  }
  /**
   * @brief Set json object to extkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyString(  // line separate
      GetExtkeyInfoRequest& obj,  // NOLINT
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
      const GetExtkeyInfoRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetExtkeyInfoRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetExtkeyInfoRequestMapTable =
    cfd::core::JsonTableMap<GetExtkeyInfoRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetExtkeyInfoRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetExtkeyInfoRequestMapTable json_mapper;
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

// ------------------------------------------------------------------------
// GetExtkeyInfoResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetExtkeyInfoResponse) class
 */
class GetExtkeyInfoResponse
  : public cfd::core::JsonClassBase<GetExtkeyInfoResponse> {
 public:
  GetExtkeyInfoResponse() {
    CollectFieldName();
  }
  virtual ~GetExtkeyInfoResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of version
   * @return version
   */
  uint32_t GetVersion() const {
    return version_;
  }
  /**
   * @brief Set to version
   * @param[in] version    setting value.
   */
  void SetVersion(  // line separate
    const uint32_t& version) {  // NOLINT
    this->version_ = version;
  }
  /**
   * @brief Get data type of version
   * @return Data type of version
   */
  static std::string GetVersionFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of version field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetVersionString(  // line separate
      const GetExtkeyInfoResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.version_);
  }
  /**
   * @brief Set json object to version field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVersionString(  // line separate
      GetExtkeyInfoResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.version_, json_value);
  }

  /**
   * @brief Get of depth
   * @return depth
   */
  uint8_t GetDepth() const {
    return depth_;
  }
  /**
   * @brief Set to depth
   * @param[in] depth    setting value.
   */
  void SetDepth(  // line separate
    const uint8_t& depth) {  // NOLINT
    this->depth_ = depth;
  }
  /**
   * @brief Get data type of depth
   * @return Data type of depth
   */
  static std::string GetDepthFieldType() {
    return "uint8_t";
  }
  /**
   * @brief Get json string of depth field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetDepthString(  // line separate
      const GetExtkeyInfoResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.depth_);
  }
  /**
   * @brief Set json object to depth field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDepthString(  // line separate
      GetExtkeyInfoResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.depth_, json_value);
  }

  /**
   * @brief Get of fingerprint
   * @return fingerprint
   */
  uint32_t GetFingerprint() const {
    return fingerprint_;
  }
  /**
   * @brief Set to fingerprint
   * @param[in] fingerprint    setting value.
   */
  void SetFingerprint(  // line separate
    const uint32_t& fingerprint) {  // NOLINT
    this->fingerprint_ = fingerprint;
  }
  /**
   * @brief Get data type of fingerprint
   * @return Data type of fingerprint
   */
  static std::string GetFingerprintFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of fingerprint field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetFingerprintString(  // line separate
      const GetExtkeyInfoResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fingerprint_);
  }
  /**
   * @brief Set json object to fingerprint field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFingerprintString(  // line separate
      GetExtkeyInfoResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fingerprint_, json_value);
  }

  /**
   * @brief Get of childNumber
   * @return childNumber
   */
  uint32_t GetChildNumber() const {
    return child_number_;
  }
  /**
   * @brief Set to childNumber
   * @param[in] child_number    setting value.
   */
  void SetChildNumber(  // line separate
    const uint32_t& child_number) {  // NOLINT
    this->child_number_ = child_number;
  }
  /**
   * @brief Get data type of childNumber
   * @return Data type of childNumber
   */
  static std::string GetChildNumberFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of childNumber field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetChildNumberString(  // line separate
      const GetExtkeyInfoResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.child_number_);
  }
  /**
   * @brief Set json object to childNumber field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetChildNumberString(  // line separate
      GetExtkeyInfoResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.child_number_, json_value);
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
      const GetExtkeyInfoResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetExtkeyInfoResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetExtkeyInfoResponseMapTable =
    cfd::core::JsonTableMap<GetExtkeyInfoResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetExtkeyInfoResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetExtkeyInfoResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(version) value
   */
  uint32_t version_ = 0;
  /**
   * @brief JsonAPI(depth) value
   */
  uint8_t depth_ = 0;
  /**
   * @brief JsonAPI(fingerprint) value
   */
  uint32_t fingerprint_ = 0;
  /**
   * @brief JsonAPI(childNumber) value
   */
  uint32_t child_number_ = 0;
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_GET_EXTKEYINFO_JSON_H_
