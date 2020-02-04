// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_get_privkey_from_extkey_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_GET_PRIVKEY_FROM_EXTKEY_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_GET_PRIVKEY_FROM_EXTKEY_JSON_H_

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
// GetPrivkeyFromExtkeyRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetPrivkeyFromExtkeyRequest) class
 */
class GetPrivkeyFromExtkeyRequest
  : public cfd::core::JsonClassBase<GetPrivkeyFromExtkeyRequest> {
 public:
  GetPrivkeyFromExtkeyRequest() {
    CollectFieldName();
  }
  virtual ~GetPrivkeyFromExtkeyRequest() {
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
      const GetPrivkeyFromExtkeyRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.extkey_);
  }
  /**
   * @brief Set json object to extkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetExtkeyString(  // line separate
      GetPrivkeyFromExtkeyRequest& obj,  // NOLINT
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
      const GetPrivkeyFromExtkeyRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      GetPrivkeyFromExtkeyRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
  }

  /**
   * @brief Get of wif
   * @return wif
   */
  bool GetWif() const {
    return wif_;
  }
  /**
   * @brief Set to wif
   * @param[in] wif    setting value.
   */
  void SetWif(  // line separate
    const bool& wif) {  // NOLINT
    this->wif_ = wif;
  }
  /**
   * @brief Get data type of wif
   * @return Data type of wif
   */
  static std::string GetWifFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of wif field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetWifString(  // line separate
      const GetPrivkeyFromExtkeyRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.wif_);
  }
  /**
   * @brief Set json object to wif field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetWifString(  // line separate
      GetPrivkeyFromExtkeyRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.wif_, json_value);
  }

  /**
   * @brief Get of isCompressed
   * @return isCompressed
   */
  bool GetIsCompressed() const {
    return is_compressed_;
  }
  /**
   * @brief Set to isCompressed
   * @param[in] is_compressed    setting value.
   */
  void SetIsCompressed(  // line separate
    const bool& is_compressed) {  // NOLINT
    this->is_compressed_ = is_compressed;
  }
  /**
   * @brief Get data type of isCompressed
   * @return Data type of isCompressed
   */
  static std::string GetIsCompressedFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isCompressed field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsCompressedString(  // line separate
      const GetPrivkeyFromExtkeyRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_compressed_);
  }
  /**
   * @brief Set json object to isCompressed field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsCompressedString(  // line separate
      GetPrivkeyFromExtkeyRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_compressed_, json_value);
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
      const GetPrivkeyFromExtkeyRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetPrivkeyFromExtkeyRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetPrivkeyFromExtkeyRequestMapTable =
    cfd::core::JsonTableMap<GetPrivkeyFromExtkeyRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetPrivkeyFromExtkeyRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetPrivkeyFromExtkeyRequestMapTable json_mapper;
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
   * @brief JsonAPI(wif) value
   */
  bool wif_ = true;
  /**
   * @brief JsonAPI(isCompressed) value
   */
  bool is_compressed_ = true;
};

// ------------------------------------------------------------------------
// GetPrivkeyFromExtkeyResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetPrivkeyFromExtkeyResponse) class
 */
class GetPrivkeyFromExtkeyResponse
  : public cfd::core::JsonClassBase<GetPrivkeyFromExtkeyResponse> {
 public:
  GetPrivkeyFromExtkeyResponse() {
    CollectFieldName();
  }
  virtual ~GetPrivkeyFromExtkeyResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of privkey
   * @return privkey
   */
  std::string GetPrivkey() const {
    return privkey_;
  }
  /**
   * @brief Set to privkey
   * @param[in] privkey    setting value.
   */
  void SetPrivkey(  // line separate
    const std::string& privkey) {  // NOLINT
    this->privkey_ = privkey;
  }
  /**
   * @brief Get data type of privkey
   * @return Data type of privkey
   */
  static std::string GetPrivkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of privkey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetPrivkeyString(  // line separate
      const GetPrivkeyFromExtkeyResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.privkey_);
  }
  /**
   * @brief Set json object to privkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetPrivkeyString(  // line separate
      GetPrivkeyFromExtkeyResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.privkey_, json_value);
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
      const GetPrivkeyFromExtkeyResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetPrivkeyFromExtkeyResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetPrivkeyFromExtkeyResponseMapTable =
    cfd::core::JsonTableMap<GetPrivkeyFromExtkeyResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetPrivkeyFromExtkeyResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetPrivkeyFromExtkeyResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(privkey) value
   */
  std::string privkey_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_GET_PRIVKEY_FROM_EXTKEY_JSON_H_
