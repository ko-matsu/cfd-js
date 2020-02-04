// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_add_multisig_sign_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ADD_MULTISIG_SIGN_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ADD_MULTISIG_SIGN_JSON_H_

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
// MultisigSignData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (MultisigSignData) class
 */
class MultisigSignData
  : public cfd::core::JsonClassBase<MultisigSignData> {
 public:
  MultisigSignData() {
    CollectFieldName();
  }
  virtual ~MultisigSignData() {
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
      const MultisigSignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      MultisigSignData& obj,  // NOLINT
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
      const MultisigSignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.type_);
  }
  /**
   * @brief Set json object to type field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTypeString(  // line separate
      MultisigSignData& obj,  // NOLINT
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
      const MultisigSignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.der_encode_);
  }
  /**
   * @brief Set json object to derEncode field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetDerEncodeString(  // line separate
      MultisigSignData& obj,  // NOLINT
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
      const MultisigSignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sighash_type_);
  }
  /**
   * @brief Set json object to sighashType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSighashTypeString(  // line separate
      MultisigSignData& obj,  // NOLINT
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
      const MultisigSignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sighash_anyone_can_pay_);
  }
  /**
   * @brief Set json object to sighashAnyoneCanPay field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSighashAnyoneCanPayString(  // line separate
      MultisigSignData& obj,  // NOLINT
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
      const MultisigSignData& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.related_pubkey_);
  }
  /**
   * @brief Set json object to relatedPubkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRelatedPubkeyString(  // line separate
      MultisigSignData& obj,  // NOLINT
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
      const MultisigSignDataStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  MultisigSignDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using MultisigSignDataMapTable =
    cfd::core::JsonTableMap<MultisigSignData>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const MultisigSignDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static MultisigSignDataMapTable json_mapper;
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
// AddMultisigSignTxInRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (AddMultisigSignTxInRequest) class
 */
class AddMultisigSignTxInRequest
  : public cfd::core::JsonClassBase<AddMultisigSignTxInRequest> {
 public:
  AddMultisigSignTxInRequest() {
    CollectFieldName();
  }
  virtual ~AddMultisigSignTxInRequest() {
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
      const AddMultisigSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      AddMultisigSignTxInRequest& obj,  // NOLINT
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
      const AddMultisigSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      AddMultisigSignTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
  }

  /**
   * @brief Get of signParams.
   * @return signParams
   */
  JsonObjectVector<MultisigSignData, MultisigSignDataStruct>& GetSignParams() {  // NOLINT
    return sign_params_;
  }
  /**
   * @brief Set to signParams.
   * @param[in] sign_params    setting value.
   */
  void SetSignParams(  // line separate
      const JsonObjectVector<MultisigSignData, MultisigSignDataStruct>& sign_params) {  // NOLINT
    this->sign_params_ = sign_params;
  }
  /**
   * @brief Get data type of signParams.
   * @return Data type of signParams.
   */
  static std::string GetSignParamsFieldType() {
    return "JsonObjectVector<MultisigSignData, MultisigSignDataStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of signParams field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetSignParamsString(  // line separate
      const AddMultisigSignTxInRequest& obj) {  // NOLINT
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
      AddMultisigSignTxInRequest& obj,  // NOLINT
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
      const AddMultisigSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief Set json object to redeemScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetRedeemScriptString(  // line separate
      AddMultisigSignTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.redeem_script_, json_value);
  }

  /**
   * @brief Get of witnessScript
   * @return witnessScript
   */
  std::string GetWitnessScript() const {
    return witness_script_;
  }
  /**
   * @brief Set to witnessScript
   * @param[in] witness_script    setting value.
   */
  void SetWitnessScript(  // line separate
    const std::string& witness_script) {  // NOLINT
    this->witness_script_ = witness_script;
  }
  /**
   * @brief Get data type of witnessScript
   * @return Data type of witnessScript
   */
  static std::string GetWitnessScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of witnessScript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetWitnessScriptString(  // line separate
      const AddMultisigSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.witness_script_);
  }
  /**
   * @brief Set json object to witnessScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetWitnessScriptString(  // line separate
      AddMultisigSignTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.witness_script_, json_value);
  }

  /**
   * @brief Get of hashType
   * @return hashType
   */
  std::string GetHashType() const {
    return hash_type_;
  }
  /**
   * @brief Set to hashType
   * @param[in] hash_type    setting value.
   */
  void SetHashType(  // line separate
    const std::string& hash_type) {  // NOLINT
    this->hash_type_ = hash_type;
  }
  /**
   * @brief Get data type of hashType
   * @return Data type of hashType
   */
  static std::string GetHashTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of hashType field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetHashTypeString(  // line separate
      const AddMultisigSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hash_type_);
  }
  /**
   * @brief Set json object to hashType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHashTypeString(  // line separate
      AddMultisigSignTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hash_type_, json_value);
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
      const AddMultisigSignTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.clear_stack_);
  }
  /**
   * @brief Set json object to clearStack field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetClearStackString(  // line separate
      AddMultisigSignTxInRequest& obj,  // NOLINT
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
      const AddMultisigSignTxInRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  AddMultisigSignTxInRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using AddMultisigSignTxInRequestMapTable =
    cfd::core::JsonTableMap<AddMultisigSignTxInRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const AddMultisigSignTxInRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static AddMultisigSignTxInRequestMapTable json_mapper;
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
   * @brief JsonAPI(signParams) value
   */
  JsonObjectVector<MultisigSignData, MultisigSignDataStruct> sign_params_;  // NOLINT
  /**
   * @brief JsonAPI(redeemScript) value
   */
  std::string redeem_script_ = "";
  /**
   * @brief JsonAPI(witnessScript) value
   */
  std::string witness_script_ = "";
  /**
   * @brief JsonAPI(hashType) value
   */
  std::string hash_type_ = "";
  /**
   * @brief JsonAPI(clearStack) value
   */
  bool clear_stack_ = true;
};

// ------------------------------------------------------------------------
// AddMultisigSignRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (AddMultisigSignRequest) class
 */
class AddMultisigSignRequest
  : public cfd::core::JsonClassBase<AddMultisigSignRequest> {
 public:
  AddMultisigSignRequest() {
    CollectFieldName();
  }
  virtual ~AddMultisigSignRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

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
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief Set json object to isElements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsElementsString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
  }

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
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_);
  }
  /**
   * @brief Set json object to tx field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tx_, json_value);
  }

  /**
   * @brief Get of txin.
   * @return txin
   */
  AddMultisigSignTxInRequest& GetTxin() {  // NOLINT
    return txin_;
  }
  /**
   * @brief Set to txin.
   * @param[in] txin    setting value.
   */
  void SetTxin(  // line separate
      const AddMultisigSignTxInRequest& txin) {  // NOLINT
    this->txin_ = txin;
  }
  /**
   * @brief Get data type of txin.
   * @return Data type of txin.
   */
  static std::string GetTxinFieldType() {
    return "AddMultisigSignTxInRequest";  // NOLINT
  }
  /**
   * @brief Get json string of txin field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxinString(  // line separate
      const AddMultisigSignRequest& obj) {  // NOLINT
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
      AddMultisigSignRequest& obj,  // NOLINT
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
      const AddMultisigSignRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  AddMultisigSignRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using AddMultisigSignRequestMapTable =
    cfd::core::JsonTableMap<AddMultisigSignRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const AddMultisigSignRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static AddMultisigSignRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(isElements) value
   */
  bool is_elements_ = false;
  /**
   * @brief JsonAPI(tx) value
   */
  std::string tx_ = "";
  /**
   * @brief JsonAPI(txin) value
   */
  AddMultisigSignTxInRequest txin_;  // NOLINT
};

// ------------------------------------------------------------------------
// AddMultisigSignResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (AddMultisigSignResponse) class
 */
class AddMultisigSignResponse
  : public cfd::core::JsonClassBase<AddMultisigSignResponse> {
 public:
  AddMultisigSignResponse() {
    CollectFieldName();
  }
  virtual ~AddMultisigSignResponse() {
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
      const AddMultisigSignResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      AddMultisigSignResponse& obj,  // NOLINT
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
      const AddMultisigSignResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  AddMultisigSignResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using AddMultisigSignResponseMapTable =
    cfd::core::JsonTableMap<AddMultisigSignResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const AddMultisigSignResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static AddMultisigSignResponseMapTable json_mapper;
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

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ADD_MULTISIG_SIGN_JSON_H_
