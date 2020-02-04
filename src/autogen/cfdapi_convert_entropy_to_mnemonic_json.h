// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_convert_entropy_to_mnemonic_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_CONVERT_ENTROPY_TO_MNEMONIC_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_CONVERT_ENTROPY_TO_MNEMONIC_JSON_H_

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
// ConvertEntropyToMnemonicRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ConvertEntropyToMnemonicRequest) class
 */
class ConvertEntropyToMnemonicRequest
  : public cfd::core::JsonClassBase<ConvertEntropyToMnemonicRequest> {
 public:
  ConvertEntropyToMnemonicRequest() {
    CollectFieldName();
  }
  virtual ~ConvertEntropyToMnemonicRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of entropy
   * @return entropy
   */
  std::string GetEntropy() const {
    return entropy_;
  }
  /**
   * @brief Set to entropy
   * @param[in] entropy    setting value.
   */
  void SetEntropy(  // line separate
    const std::string& entropy) {  // NOLINT
    this->entropy_ = entropy;
  }
  /**
   * @brief Get data type of entropy
   * @return Data type of entropy
   */
  static std::string GetEntropyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of entropy field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetEntropyString(  // line separate
      const ConvertEntropyToMnemonicRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.entropy_);
  }
  /**
   * @brief Set json object to entropy field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetEntropyString(  // line separate
      ConvertEntropyToMnemonicRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.entropy_, json_value);
  }

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
      const ConvertEntropyToMnemonicRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.language_);
  }
  /**
   * @brief Set json object to language field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLanguageString(  // line separate
      ConvertEntropyToMnemonicRequest& obj,  // NOLINT
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
      const ConvertEntropyToMnemonicRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ConvertEntropyToMnemonicRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ConvertEntropyToMnemonicRequestMapTable =
    cfd::core::JsonTableMap<ConvertEntropyToMnemonicRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ConvertEntropyToMnemonicRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static ConvertEntropyToMnemonicRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(entropy) value
   */
  std::string entropy_ = "";
  /**
   * @brief JsonAPI(language) value
   */
  std::string language_ = "en";
};

// ------------------------------------------------------------------------
// ConvertEntropyToMnemonicResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ConvertEntropyToMnemonicResponse) class
 */
class ConvertEntropyToMnemonicResponse
  : public cfd::core::JsonClassBase<ConvertEntropyToMnemonicResponse> {
 public:
  ConvertEntropyToMnemonicResponse() {
    CollectFieldName();
  }
  virtual ~ConvertEntropyToMnemonicResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of mnemonic.
   * @return mnemonic
   */
  JsonValueVector<std::string>& GetMnemonic() {  // NOLINT
    return mnemonic_;
  }
  /**
   * @brief Set to mnemonic.
   * @param[in] mnemonic    setting value.
   */
  void SetMnemonic(  // line separate
      const JsonValueVector<std::string>& mnemonic) {  // NOLINT
    this->mnemonic_ = mnemonic;
  }
  /**
   * @brief Get data type of mnemonic.
   * @return Data type of mnemonic.
   */
  static std::string GetMnemonicFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief Get json string of mnemonic field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetMnemonicString(  // line separate
      const ConvertEntropyToMnemonicResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.mnemonic_.Serialize();
  }
  /**
   * @brief Set json object to mnemonic field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetMnemonicString(  // line separate
      ConvertEntropyToMnemonicResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.mnemonic_.DeserializeUniValue(json_value);
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
      const ConvertEntropyToMnemonicResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ConvertEntropyToMnemonicResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ConvertEntropyToMnemonicResponseMapTable =
    cfd::core::JsonTableMap<ConvertEntropyToMnemonicResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ConvertEntropyToMnemonicResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static ConvertEntropyToMnemonicResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(mnemonic) value
   */
  JsonValueVector<std::string> mnemonic_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_CONVERT_ENTROPY_TO_MNEMONIC_JSON_H_
