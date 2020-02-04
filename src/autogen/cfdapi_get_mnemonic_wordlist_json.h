// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_get_mnemonic_wordlist_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_GET_MNEMONIC_WORDLIST_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_GET_MNEMONIC_WORDLIST_JSON_H_

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
// GetMnemonicWordlistRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetMnemonicWordlistRequest) class
 */
class GetMnemonicWordlistRequest
  : public cfd::core::JsonClassBase<GetMnemonicWordlistRequest> {
 public:
  GetMnemonicWordlistRequest() {
    CollectFieldName();
  }
  virtual ~GetMnemonicWordlistRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of language
   * @return language
   */
  std::string GetLanguage() const {
    return language_;
  }
  /**
   * @brief Set to language
   * @param[in] language    setting value.
   */
  void SetLanguage(  // line separate
    const std::string& language) {  // NOLINT
    this->language_ = language;
  }
  /**
   * @brief Get data type of language
   * @return Data type of language
   */
  static std::string GetLanguageFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of language field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetLanguageString(  // line separate
      const GetMnemonicWordlistRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.language_);
  }
  /**
   * @brief Set json object to language field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLanguageString(  // line separate
      GetMnemonicWordlistRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.language_, json_value);
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
      const GetMnemonicWordlistRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetMnemonicWordlistRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetMnemonicWordlistRequestMapTable =
    cfd::core::JsonTableMap<GetMnemonicWordlistRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetMnemonicWordlistRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetMnemonicWordlistRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(language) value
   */
  std::string language_ = "en";
};

// ------------------------------------------------------------------------
// GetMnemonicWordlistResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetMnemonicWordlistResponse) class
 */
class GetMnemonicWordlistResponse
  : public cfd::core::JsonClassBase<GetMnemonicWordlistResponse> {
 public:
  GetMnemonicWordlistResponse() {
    CollectFieldName();
  }
  virtual ~GetMnemonicWordlistResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of wordlist.
   * @return wordlist
   */
  JsonValueVector<std::string>& GetWordlist() {  // NOLINT
    return wordlist_;
  }
  /**
   * @brief Set to wordlist.
   * @param[in] wordlist    setting value.
   */
  void SetWordlist(  // line separate
      const JsonValueVector<std::string>& wordlist) {  // NOLINT
    this->wordlist_ = wordlist;
  }
  /**
   * @brief Get data type of wordlist.
   * @return Data type of wordlist.
   */
  static std::string GetWordlistFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief Get json string of wordlist field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetWordlistString(  // line separate
      const GetMnemonicWordlistResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.wordlist_.Serialize();
  }
  /**
   * @brief Set json object to wordlist field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetWordlistString(  // line separate
      GetMnemonicWordlistResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.wordlist_.DeserializeUniValue(json_value);
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
      const GetMnemonicWordlistResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetMnemonicWordlistResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetMnemonicWordlistResponseMapTable =
    cfd::core::JsonTableMap<GetMnemonicWordlistResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetMnemonicWordlistResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetMnemonicWordlistResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(wordlist) value
   */
  JsonValueVector<std::string> wordlist_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_GET_MNEMONIC_WORDLIST_JSON_H_
