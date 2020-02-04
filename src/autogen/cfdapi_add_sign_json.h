// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_add_sign_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ADD_SIGN_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ADD_SIGN_JSON_H_

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
// SignData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (SignData) class
 */
class SignData
  : public cfd::core::JsonClassBase<SignData> {
 public:
  SignData() {
    CollectFieldName();
  }
  virtual ~SignData() {
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
      const SignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      SignData& obj,  // NOLINT
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
      const SignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.type_);
  }
  /**
   * @brief Set json object to type field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTypeString(  // line separate
      SignData& obj,  // NOLINT
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
      const SignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.der_encode_);
  }
  /**
   * @brief Set json object to derEncode field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDerEncodeString(  // line separate
      SignData& obj,  // NOLINT
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
      const SignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sighash_type_);
  }
  /**
   * @brief Set json object to sighashType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSighashTypeString(  // line separate
      SignData& obj,  // NOLINT
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
      const SignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sighash_anyone_can_pay_);
  }
  /**
   * @brief Set json object to sighashAnyoneCanPay field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSighashAnyoneCanPayString(  // line separate
      SignData& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.sighash_anyone_can_pay_, json_value);
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
      const SignDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  SignDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using SignDataMapTable =
    cfd::core::JsonTableMap<SignData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const SignDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static SignDataMapTable json_mapper;
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
  std::string type_ = "auto";
  /**
   * @brief JsonAPI(derEncode) value
   */
  bool der_encode_ = false;
  /**
   * @brief JsonAPI(sighashType) value
   */
  std::string sighash_type_ = "all";
  /**
   * @brief JsonAPI(sighashAnyoneCanPay) value
   */
  bool sighash_anyone_can_pay_ = false;
};

// ------------------------------------------------------------------------
// AddSignTxInRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (AddSignTxInRequest) class
 */
class AddSignTxInRequest
  : public cfd::core::JsonClassBase<AddSignTxInRequest> {
 public:
  AddSignTxInRequest() {
    CollectFieldName();
  }
  virtual ~AddSignTxInRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of txid
   * @return txid
   */
  std::string GetTxid() const {
    return txid_;
  }
  /**
   * @brief Set to txid
   * @param[in] txid    setting value.
   */
  void SetTxid(  // line separate
    const std::string& txid) {  // NOLINT
    this->txid_ = txid;
  }
  /**
   * @brief Get data type of txid
   * @return Data type of txid
   */
  static std::string GetTxidFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of txid field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTxidString(  // line separate
      const AddSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      AddSignTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.txid_, json_value);
  }

  /**
   * @brief Get of vout
   * @return vout
   */
  uint32_t GetVout() const {
    return vout_;
  }
  /**
   * @brief Set to vout
   * @param[in] vout    setting value.
   */
  void SetVout(  // line separate
    const uint32_t& vout) {  // NOLINT
    this->vout_ = vout;
  }
  /**
   * @brief Get data type of vout
   * @return Data type of vout
   */
  static std::string GetVoutFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of vout field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetVoutString(  // line separate
      const AddSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      AddSignTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
  }

  /**
   * @brief Get of isWitness
   * @return isWitness
   */
  bool GetIsWitness() const {
    return is_witness_;
  }
  /**
   * @brief Set to isWitness
   * @param[in] is_witness    setting value.
   */
  void SetIsWitness(  // line separate
    const bool& is_witness) {  // NOLINT
    this->is_witness_ = is_witness;
  }
  /**
   * @brief Get data type of isWitness
   * @return Data type of isWitness
   */
  static std::string GetIsWitnessFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isWitness field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsWitnessString(  // line separate
      const AddSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_witness_);
  }
  /**
   * @brief Set json object to isWitness field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsWitnessString(  // line separate
      AddSignTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_witness_, json_value);
  }

  /**
   * @brief Get of signParam.
   * @return signParam
   */
  JsonObjectVector<SignData, SignDataStruct>& GetSignParam() {  // NOLINT
    return sign_param_;
  }
  /**
   * @brief Set to signParam.
   * @param[in] sign_param    setting value.
   */
  void SetSignParam(  // line separate
      const JsonObjectVector<SignData, SignDataStruct>& sign_param) {  // NOLINT
    this->sign_param_ = sign_param;
  }
  /**
   * @brief Get data type of signParam.
   * @return Data type of signParam.
   */
  static std::string GetSignParamFieldType() {
    return "JsonObjectVector<SignData, SignDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of signParam field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetSignParamString(  // line separate
      const AddSignTxInRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.sign_param_.Serialize();
  }
  /**
   * @brief Set json object to signParam field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetSignParamString(  // line separate
      AddSignTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.sign_param_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of clearStack
   * @return clearStack
   */
  bool GetClearStack() const {
    return clear_stack_;
  }
  /**
   * @brief Set to clearStack
   * @param[in] clear_stack    setting value.
   */
  void SetClearStack(  // line separate
    const bool& clear_stack) {  // NOLINT
    this->clear_stack_ = clear_stack;
  }
  /**
   * @brief Get data type of clearStack
   * @return Data type of clearStack
   */
  static std::string GetClearStackFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of clearStack field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetClearStackString(  // line separate
      const AddSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.clear_stack_);
  }
  /**
   * @brief Set json object to clearStack field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetClearStackString(  // line separate
      AddSignTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.clear_stack_, json_value);
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
      const AddSignTxInRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  AddSignTxInRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using AddSignTxInRequestMapTable =
    cfd::core::JsonTableMap<AddSignTxInRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const AddSignTxInRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static AddSignTxInRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(txid) value
   */
  std::string txid_ = "";
  /**
   * @brief JsonAPI(vout) value
   */
  uint32_t vout_ = 0;
  /**
   * @brief JsonAPI(isWitness) value
   */
  bool is_witness_ = true;
  /**
   * @brief JsonAPI(signParam) value
   */
  JsonObjectVector<SignData, SignDataStruct> sign_param_;  // NOLINT
  /**
   * @brief JsonAPI(clearStack) value
   */
  bool clear_stack_ = true;
};

// ------------------------------------------------------------------------
// AddSignRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (AddSignRequest) class
 */
class AddSignRequest
  : public cfd::core::JsonClassBase<AddSignRequest> {
 public:
  AddSignRequest() {
    CollectFieldName();
  }
  virtual ~AddSignRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of tx
   * @return tx
   */
  std::string GetTx() const {
    return tx_;
  }
  /**
   * @brief Set to tx
   * @param[in] tx    setting value.
   */
  void SetTx(  // line separate
    const std::string& tx) {  // NOLINT
    this->tx_ = tx;
  }
  /**
   * @brief Get data type of tx
   * @return Data type of tx
   */
  static std::string GetTxFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of tx field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTxString(  // line separate
      const AddSignRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_);
  }
  /**
   * @brief Set json object to tx field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxString(  // line separate
      AddSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tx_, json_value);
  }

  /**
   * @brief Get of isElements
   * @return isElements
   */
  bool GetIsElements() const {
    return is_elements_;
  }
  /**
   * @brief Set to isElements
   * @param[in] is_elements    setting value.
   */
  void SetIsElements(  // line separate
    const bool& is_elements) {  // NOLINT
    this->is_elements_ = is_elements;
  }
  /**
   * @brief Get data type of isElements
   * @return Data type of isElements
   */
  static std::string GetIsElementsFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isElements field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsElementsString(  // line separate
      const AddSignRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief Set json object to isElements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsElementsString(  // line separate
      AddSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
  }

  /**
   * @brief Get of txin.
   * @return txin
   */
  AddSignTxInRequest& GetTxin() {  // NOLINT
    return txin_;
  }
  /**
   * @brief Set to txin.
   * @param[in] txin    setting value.
   */
  void SetTxin(  // line separate
      const AddSignTxInRequest& txin) {  // NOLINT
    this->txin_ = txin;
  }
  /**
   * @brief Get data type of txin.
   * @return Data type of txin.
   */
  static std::string GetTxinFieldType() {
    return "AddSignTxInRequest";  // NOLINT
  }
  /**
   * @brief Get json string of txin field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxinString(  // line separate
      const AddSignRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.txin_.Serialize();
  }
  /**
   * @brief Set json object to txin field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetTxinString(  // line separate
      AddSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txin_.DeserializeUniValue(json_value);
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
      const AddSignRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  AddSignRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using AddSignRequestMapTable =
    cfd::core::JsonTableMap<AddSignRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const AddSignRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static AddSignRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(tx) value
   */
  std::string tx_ = "";
  /**
   * @brief JsonAPI(isElements) value
   */
  bool is_elements_ = false;
  /**
   * @brief JsonAPI(txin) value
   */
  AddSignTxInRequest txin_;  // NOLINT
};

// ------------------------------------------------------------------------
// AddSignResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (AddSignResponse) class
 */
class AddSignResponse
  : public cfd::core::JsonClassBase<AddSignResponse> {
 public:
  AddSignResponse() {
    CollectFieldName();
  }
  virtual ~AddSignResponse() {
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
      const AddSignResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      AddSignResponse& obj,  // NOLINT
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
      const AddSignResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  AddSignResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using AddSignResponseMapTable =
    cfd::core::JsonTableMap<AddSignResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const AddSignResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static AddSignResponseMapTable json_mapper;
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

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ADD_SIGN_JSON_H_
