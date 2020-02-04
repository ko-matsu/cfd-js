// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_convert_mnemonic_to_seed_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_CONVERT_MNEMONIC_TO_SEED_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_CONVERT_MNEMONIC_TO_SEED_JSON_H_

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
// ConvertMnemonicToSeedRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ConvertMnemonicToSeedRequest) class
 */
class ConvertMnemonicToSeedRequest
  : public cfd::core::JsonClassBase<ConvertMnemonicToSeedRequest> {
 public:
  ConvertMnemonicToSeedRequest() {
    CollectFieldName();
  }
  virtual ~ConvertMnemonicToSeedRequest() {
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
      const ConvertMnemonicToSeedRequest& obj) {  // NOLINT
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
      ConvertMnemonicToSeedRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.mnemonic_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of passphrase
   * @return passphrase
   */
  std::string GetPassphrase() const {
    return passphrase_;
  }
  /**
   * @brief Set to passphrase
   * @param[in] passphrase    setting value.
   */
  void SetPassphrase(  // line separate
    const std::string& passphrase) {  // NOLINT
    this->passphrase_ = passphrase;
  }
  /**
   * @brief Get data type of passphrase
   * @return Data type of passphrase
   */
  static std::string GetPassphraseFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of passphrase field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetPassphraseString(  // line separate
      const ConvertMnemonicToSeedRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.passphrase_);
  }
  /**
   * @brief Set json object to passphrase field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetPassphraseString(  // line separate
      ConvertMnemonicToSeedRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.passphrase_, json_value);
  }

  /**
   * @brief Get of strictCheck
   * @return strictCheck
   */
  bool GetStrictCheck() const {
    return strict_check_;
  }
  /**
   * @brief Set to strictCheck
   * @param[in] strict_check    setting value.
   */
  void SetStrictCheck(  // line separate
    const bool& strict_check) {  // NOLINT
    this->strict_check_ = strict_check;
  }
  /**
   * @brief Get data type of strictCheck
   * @return Data type of strictCheck
   */
  static std::string GetStrictCheckFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of strictCheck field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetStrictCheckString(  // line separate
      const ConvertMnemonicToSeedRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.strict_check_);
  }
  /**
   * @brief Set json object to strictCheck field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetStrictCheckString(  // line separate
      ConvertMnemonicToSeedRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.strict_check_, json_value);
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
      const ConvertMnemonicToSeedRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.language_);
  }
  /**
   * @brief Set json object to language field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLanguageString(  // line separate
      ConvertMnemonicToSeedRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.language_, json_value);
  }

  /**
   * @brief Get of useIdeographicSpace
   * @return useIdeographicSpace
   */
  bool GetUseIdeographicSpace() const {
    return use_ideographic_space_;
  }
  /**
   * @brief Set to useIdeographicSpace
   * @param[in] use_ideographic_space    setting value.
   */
  void SetUseIdeographicSpace(  // line separate
    const bool& use_ideographic_space) {  // NOLINT
    this->use_ideographic_space_ = use_ideographic_space;
  }
  /**
   * @brief Get data type of useIdeographicSpace
   * @return Data type of useIdeographicSpace
   */
  static std::string GetUseIdeographicSpaceFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of useIdeographicSpace field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetUseIdeographicSpaceString(  // line separate
      const ConvertMnemonicToSeedRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.use_ideographic_space_);
  }
  /**
   * @brief Set json object to useIdeographicSpace field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetUseIdeographicSpaceString(  // line separate
      ConvertMnemonicToSeedRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.use_ideographic_space_, json_value);
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
      const ConvertMnemonicToSeedRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ConvertMnemonicToSeedRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ConvertMnemonicToSeedRequestMapTable =
    cfd::core::JsonTableMap<ConvertMnemonicToSeedRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ConvertMnemonicToSeedRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static ConvertMnemonicToSeedRequestMapTable json_mapper;
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
  /**
   * @brief JsonAPI(passphrase) value
   */
  std::string passphrase_ = "";
  /**
   * @brief JsonAPI(strictCheck) value
   */
  bool strict_check_ = false;
  /**
   * @brief JsonAPI(language) value
   */
  std::string language_ = "";
  /**
   * @brief JsonAPI(useIdeographicSpace) value
   */
  bool use_ideographic_space_ = false;
};

// ------------------------------------------------------------------------
// ConvertMnemonicToSeedResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ConvertMnemonicToSeedResponse) class
 */
class ConvertMnemonicToSeedResponse
  : public cfd::core::JsonClassBase<ConvertMnemonicToSeedResponse> {
 public:
  ConvertMnemonicToSeedResponse() {
    CollectFieldName();
  }
  virtual ~ConvertMnemonicToSeedResponse() {
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
      const ConvertMnemonicToSeedResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.seed_);
  }
  /**
   * @brief Set json object to seed field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSeedString(  // line separate
      ConvertMnemonicToSeedResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.seed_, json_value);
  }

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
      const ConvertMnemonicToSeedResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.entropy_);
  }
  /**
   * @brief Set json object to entropy field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetEntropyString(  // line separate
      ConvertMnemonicToSeedResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.entropy_, json_value);
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
      const ConvertMnemonicToSeedResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ConvertMnemonicToSeedResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ConvertMnemonicToSeedResponseMapTable =
    cfd::core::JsonTableMap<ConvertMnemonicToSeedResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ConvertMnemonicToSeedResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static ConvertMnemonicToSeedResponseMapTable json_mapper;
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
   * @brief JsonAPI(entropy) value
   */
  std::string entropy_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_CONVERT_MNEMONIC_TO_SEED_JSON_H_
