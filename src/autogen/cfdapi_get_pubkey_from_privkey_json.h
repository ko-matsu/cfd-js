// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_get_pubkey_from_privkey_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_GET_PUBKEY_FROM_PRIVKEY_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_GET_PUBKEY_FROM_PRIVKEY_JSON_H_

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
// GetPubkeyFromPrivkeyRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetPubkeyFromPrivkeyRequest) class
 */
class GetPubkeyFromPrivkeyRequest
  : public cfd::core::JsonClassBase<GetPubkeyFromPrivkeyRequest> {
 public:
  GetPubkeyFromPrivkeyRequest() {
    CollectFieldName();
  }
  virtual ~GetPubkeyFromPrivkeyRequest() {
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
      const GetPubkeyFromPrivkeyRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.privkey_);
  }
  /**
   * @brief Set json object to privkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetPrivkeyString(  // line separate
      GetPubkeyFromPrivkeyRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.privkey_, json_value);
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
      const GetPubkeyFromPrivkeyRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_compressed_);
  }
  /**
   * @brief Set json object to isCompressed field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsCompressedString(  // line separate
      GetPubkeyFromPrivkeyRequest& obj,  // NOLINT
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
      const GetPubkeyFromPrivkeyRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetPubkeyFromPrivkeyRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetPubkeyFromPrivkeyRequestMapTable =
    cfd::core::JsonTableMap<GetPubkeyFromPrivkeyRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetPubkeyFromPrivkeyRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetPubkeyFromPrivkeyRequestMapTable json_mapper;
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
  /**
   * @brief JsonAPI(isCompressed) value
   */
  bool is_compressed_ = true;
};

// ------------------------------------------------------------------------
// GetPubkeyFromPrivkeyResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetPubkeyFromPrivkeyResponse) class
 */
class GetPubkeyFromPrivkeyResponse
  : public cfd::core::JsonClassBase<GetPubkeyFromPrivkeyResponse> {
 public:
  GetPubkeyFromPrivkeyResponse() {
    CollectFieldName();
  }
  virtual ~GetPubkeyFromPrivkeyResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of pubkey
   * @return pubkey
   */
  std::string GetPubkey() const {
    return pubkey_;
  }
  /**
   * @brief Set to pubkey
   * @param[in] pubkey    setting value.
   */
  void SetPubkey(  // line separate
    const std::string& pubkey) {  // NOLINT
    this->pubkey_ = pubkey;
  }
  /**
   * @brief Get data type of pubkey
   * @return Data type of pubkey
   */
  static std::string GetPubkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of pubkey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetPubkeyString(  // line separate
      const GetPubkeyFromPrivkeyResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.pubkey_);
  }
  /**
   * @brief Set json object to pubkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetPubkeyString(  // line separate
      GetPubkeyFromPrivkeyResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.pubkey_, json_value);
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
      const GetPubkeyFromPrivkeyResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetPubkeyFromPrivkeyResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetPubkeyFromPrivkeyResponseMapTable =
    cfd::core::JsonTableMap<GetPubkeyFromPrivkeyResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetPubkeyFromPrivkeyResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetPubkeyFromPrivkeyResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(pubkey) value
   */
  std::string pubkey_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_GET_PUBKEY_FROM_PRIVKEY_JSON_H_
