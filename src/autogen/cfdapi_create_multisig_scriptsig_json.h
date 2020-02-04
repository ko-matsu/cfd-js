// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_create_multisig_scriptsig_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_MULTISIG_SCRIPTSIG_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_MULTISIG_SCRIPTSIG_JSON_H_

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
// MultisigScriptSigData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (MultisigScriptSigData) class
 */
class MultisigScriptSigData
  : public cfd::core::JsonClassBase<MultisigScriptSigData> {
 public:
  MultisigScriptSigData() {
    CollectFieldName();
  }
  virtual ~MultisigScriptSigData() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of hex
   * @return hex
   */
  std::string GetHex() const {
    return hex_;
  }
  /**
   * @brief Set to hex
   * @param[in] hex    setting value.
   */
  void SetHex(  // line separate
    const std::string& hex) {  // NOLINT
    this->hex_ = hex;
  }
  /**
   * @brief Get data type of hex
   * @return Data type of hex
   */
  static std::string GetHexFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of hex field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetHexString(  // line separate
      const MultisigScriptSigData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      MultisigScriptSigData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief Get of type
   * @return type
   */
  std::string GetType() const {
    return type_;
  }
  /**
   * @brief Set to type
   * @param[in] type    setting value.
   */
  void SetType(  // line separate
    const std::string& type) {  // NOLINT
    this->type_ = type;
  }
  /**
   * @brief Get data type of type
   * @return Data type of type
   */
  static std::string GetTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of type field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTypeString(  // line separate
      const MultisigScriptSigData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.type_);
  }
  /**
   * @brief Set json object to type field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTypeString(  // line separate
      MultisigScriptSigData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.type_, json_value);
  }

  /**
   * @brief Get of derEncode
   * @return derEncode
   */
  bool GetDerEncode() const {
    return der_encode_;
  }
  /**
   * @brief Set to derEncode
   * @param[in] der_encode    setting value.
   */
  void SetDerEncode(  // line separate
    const bool& der_encode) {  // NOLINT
    this->der_encode_ = der_encode;
  }
  /**
   * @brief Get data type of derEncode
   * @return Data type of derEncode
   */
  static std::string GetDerEncodeFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of derEncode field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetDerEncodeString(  // line separate
      const MultisigScriptSigData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.der_encode_);
  }
  /**
   * @brief Set json object to derEncode field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDerEncodeString(  // line separate
      MultisigScriptSigData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.der_encode_, json_value);
  }

  /**
   * @brief Get of sighashType
   * @return sighashType
   */
  std::string GetSighashType() const {
    return sighash_type_;
  }
  /**
   * @brief Set to sighashType
   * @param[in] sighash_type    setting value.
   */
  void SetSighashType(  // line separate
    const std::string& sighash_type) {  // NOLINT
    this->sighash_type_ = sighash_type;
  }
  /**
   * @brief Get data type of sighashType
   * @return Data type of sighashType
   */
  static std::string GetSighashTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of sighashType field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSighashTypeString(  // line separate
      const MultisigScriptSigData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sighash_type_);
  }
  /**
   * @brief Set json object to sighashType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSighashTypeString(  // line separate
      MultisigScriptSigData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.sighash_type_, json_value);
  }

  /**
   * @brief Get of sighashAnyoneCanPay
   * @return sighashAnyoneCanPay
   */
  bool GetSighashAnyoneCanPay() const {
    return sighash_anyone_can_pay_;
  }
  /**
   * @brief Set to sighashAnyoneCanPay
   * @param[in] sighash_anyone_can_pay    setting value.
   */
  void SetSighashAnyoneCanPay(  // line separate
    const bool& sighash_anyone_can_pay) {  // NOLINT
    this->sighash_anyone_can_pay_ = sighash_anyone_can_pay;
  }
  /**
   * @brief Get data type of sighashAnyoneCanPay
   * @return Data type of sighashAnyoneCanPay
   */
  static std::string GetSighashAnyoneCanPayFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of sighashAnyoneCanPay field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSighashAnyoneCanPayString(  // line separate
      const MultisigScriptSigData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sighash_anyone_can_pay_);
  }
  /**
   * @brief Set json object to sighashAnyoneCanPay field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSighashAnyoneCanPayString(  // line separate
      MultisigScriptSigData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.sighash_anyone_can_pay_, json_value);
  }

  /**
   * @brief Get of relatedPubkey
   * @return relatedPubkey
   */
  std::string GetRelatedPubkey() const {
    return related_pubkey_;
  }
  /**
   * @brief Set to relatedPubkey
   * @param[in] related_pubkey    setting value.
   */
  void SetRelatedPubkey(  // line separate
    const std::string& related_pubkey) {  // NOLINT
    this->related_pubkey_ = related_pubkey;
  }
  /**
   * @brief Get data type of relatedPubkey
   * @return Data type of relatedPubkey
   */
  static std::string GetRelatedPubkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of relatedPubkey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetRelatedPubkeyString(  // line separate
      const MultisigScriptSigData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.related_pubkey_);
  }
  /**
   * @brief Set json object to relatedPubkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRelatedPubkeyString(  // line separate
      MultisigScriptSigData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.related_pubkey_, json_value);
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
      const MultisigScriptSigDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  MultisigScriptSigDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using MultisigScriptSigDataMapTable =
    cfd::core::JsonTableMap<MultisigScriptSigData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const MultisigScriptSigDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static MultisigScriptSigDataMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(hex) value
   */
  std::string hex_ = "";
  /**
   * @brief JsonAPI(type) value
   */
  std::string type_ = "sign";
  /**
   * @brief JsonAPI(derEncode) value
   */
  bool der_encode_ = true;
  /**
   * @brief JsonAPI(sighashType) value
   */
  std::string sighash_type_ = "all";
  /**
   * @brief JsonAPI(sighashAnyoneCanPay) value
   */
  bool sighash_anyone_can_pay_ = false;
  /**
   * @brief JsonAPI(relatedPubkey) value
   */
  std::string related_pubkey_ = "";
};

// ------------------------------------------------------------------------
// CreateMultisigScriptSigRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateMultisigScriptSigRequest) class
 */
class CreateMultisigScriptSigRequest
  : public cfd::core::JsonClassBase<CreateMultisigScriptSigRequest> {
 public:
  CreateMultisigScriptSigRequest() {
    CollectFieldName();
  }
  virtual ~CreateMultisigScriptSigRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of signParams.
   * @return signParams
   */
  JsonObjectVector<MultisigScriptSigData, MultisigScriptSigDataStruct>& GetSignParams() {  // NOLINT
    return sign_params_;
  }
  /**
   * @brief Set to signParams.
   * @param[in] sign_params    setting value.
   */
  void SetSignParams(  // line separate
      const JsonObjectVector<MultisigScriptSigData, MultisigScriptSigDataStruct>& sign_params) {  // NOLINT
    this->sign_params_ = sign_params;
  }
  /**
   * @brief Get data type of signParams.
   * @return Data type of signParams.
   */
  static std::string GetSignParamsFieldType() {
    return "JsonObjectVector<MultisigScriptSigData, MultisigScriptSigDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of signParams field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetSignParamsString(  // line separate
      const CreateMultisigScriptSigRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.sign_params_.Serialize();
  }
  /**
   * @brief Set json object to signParams field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetSignParamsString(  // line separate
      CreateMultisigScriptSigRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.sign_params_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of redeemScript
   * @return redeemScript
   */
  std::string GetRedeemScript() const {
    return redeem_script_;
  }
  /**
   * @brief Set to redeemScript
   * @param[in] redeem_script    setting value.
   */
  void SetRedeemScript(  // line separate
    const std::string& redeem_script) {  // NOLINT
    this->redeem_script_ = redeem_script;
  }
  /**
   * @brief Get data type of redeemScript
   * @return Data type of redeemScript
   */
  static std::string GetRedeemScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of redeemScript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetRedeemScriptString(  // line separate
      const CreateMultisigScriptSigRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief Set json object to redeemScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRedeemScriptString(  // line separate
      CreateMultisigScriptSigRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.redeem_script_, json_value);
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
      const CreateMultisigScriptSigRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateMultisigScriptSigRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateMultisigScriptSigRequestMapTable =
    cfd::core::JsonTableMap<CreateMultisigScriptSigRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateMultisigScriptSigRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateMultisigScriptSigRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(signParams) value
   */
  JsonObjectVector<MultisigScriptSigData, MultisigScriptSigDataStruct> sign_params_;  // NOLINT
  /**
   * @brief JsonAPI(redeemScript) value
   */
  std::string redeem_script_ = "";
};

// ------------------------------------------------------------------------
// CreateMultisigScriptSigResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (CreateMultisigScriptSigResponse) class
 */
class CreateMultisigScriptSigResponse
  : public cfd::core::JsonClassBase<CreateMultisigScriptSigResponse> {
 public:
  CreateMultisigScriptSigResponse() {
    CollectFieldName();
  }
  virtual ~CreateMultisigScriptSigResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of hex
   * @return hex
   */
  std::string GetHex() const {
    return hex_;
  }
  /**
   * @brief Set to hex
   * @param[in] hex    setting value.
   */
  void SetHex(  // line separate
    const std::string& hex) {  // NOLINT
    this->hex_ = hex;
  }
  /**
   * @brief Get data type of hex
   * @return Data type of hex
   */
  static std::string GetHexFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of hex field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetHexString(  // line separate
      const CreateMultisigScriptSigResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      CreateMultisigScriptSigResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
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
      const CreateMultisigScriptSigResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  CreateMultisigScriptSigResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using CreateMultisigScriptSigResponseMapTable =
    cfd::core::JsonTableMap<CreateMultisigScriptSigResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateMultisigScriptSigResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateMultisigScriptSigResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(hex) value
   */
  std::string hex_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_CREATE_MULTISIG_SCRIPTSIG_JSON_H_
