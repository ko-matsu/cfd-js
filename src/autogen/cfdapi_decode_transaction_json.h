// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_decode_transaction_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_DECODE_TRANSACTION_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_DECODE_TRANSACTION_JSON_H_

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
// DecodeRawTransactionRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (DecodeRawTransactionRequest) class
 */
class DecodeRawTransactionRequest
  : public cfd::core::JsonClassBase<DecodeRawTransactionRequest> {
 public:
  DecodeRawTransactionRequest() {
    CollectFieldName();
  }
  virtual ~DecodeRawTransactionRequest() {
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
      const DecodeRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      DecodeRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
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
      const DecodeRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      DecodeRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
  }

  /**
   * @brief Get of iswitness
   * @return iswitness
   */
  bool GetIswitness() const {
    return iswitness_;
  }
  /**
   * @brief Set to iswitness
   * @param[in] iswitness    setting value.
   */
  void SetIswitness(  // line separate
    const bool& iswitness) {  // NOLINT
    this->iswitness_ = iswitness;
  }
  /**
   * @brief Get data type of iswitness
   * @return Data type of iswitness
   */
  static std::string GetIswitnessFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of iswitness field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIswitnessString(  // line separate
      const DecodeRawTransactionRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.iswitness_);
  }
  /**
   * @brief Set json object to iswitness field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIswitnessString(  // line separate
      DecodeRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.iswitness_, json_value);
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
      const DecodeRawTransactionRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  DecodeRawTransactionRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using DecodeRawTransactionRequestMapTable =
    cfd::core::JsonTableMap<DecodeRawTransactionRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const DecodeRawTransactionRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static DecodeRawTransactionRequestMapTable json_mapper;
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
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(iswitness) value
   */
  bool iswitness_ = true;
};

// ------------------------------------------------------------------------
// DecodeUnlockingScript
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (DecodeUnlockingScript) class
 */
class DecodeUnlockingScript
  : public cfd::core::JsonClassBase<DecodeUnlockingScript> {
 public:
  DecodeUnlockingScript() {
    CollectFieldName();
  }
  virtual ~DecodeUnlockingScript() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of asm
   * @return asm
   */
  std::string GetAsm() const {
    return asm__;
  }
  /**
   * @brief Set to asm
   * @param[in] asm_    setting value.
   */
  void SetAsm(  // line separate
    const std::string& asm_) {  // NOLINT
    this->asm__ = asm_;
  }
  /**
   * @brief Get data type of asm
   * @return Data type of asm
   */
  static std::string GetAsmFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of asm field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAsmString(  // line separate
      const DecodeUnlockingScript& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asm__);
  }
  /**
   * @brief Set json object to asm field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAsmString(  // line separate
      DecodeUnlockingScript& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asm__, json_value);
  }

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
      const DecodeUnlockingScript& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      DecodeUnlockingScript& obj,  // NOLINT
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
      const DecodeUnlockingScriptStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  DecodeUnlockingScriptStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using DecodeUnlockingScriptMapTable =
    cfd::core::JsonTableMap<DecodeUnlockingScript>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const DecodeUnlockingScriptMapTable& GetJsonMapper() const {  // NOLINT
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
  static DecodeUnlockingScriptMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(asm) value
   */
  std::string asm__ = "";
  /**
   * @brief JsonAPI(hex) value
   */
  std::string hex_ = "";
};

// ------------------------------------------------------------------------
// DecodeRawTransactionTxIn
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (DecodeRawTransactionTxIn) class
 */
class DecodeRawTransactionTxIn
  : public cfd::core::JsonClassBase<DecodeRawTransactionTxIn> {
 public:
  DecodeRawTransactionTxIn() {
    CollectFieldName();
  }
  virtual ~DecodeRawTransactionTxIn() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of coinbase
   * @return coinbase
   */
  std::string GetCoinbase() const {
    return coinbase_;
  }
  /**
   * @brief Set to coinbase
   * @param[in] coinbase    setting value.
   */
  void SetCoinbase(  // line separate
    const std::string& coinbase) {  // NOLINT
    this->coinbase_ = coinbase;
  }
  /**
   * @brief Get data type of coinbase
   * @return Data type of coinbase
   */
  static std::string GetCoinbaseFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of coinbase field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetCoinbaseString(  // line separate
      const DecodeRawTransactionTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.coinbase_);
  }
  /**
   * @brief Set json object to coinbase field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetCoinbaseString(  // line separate
      DecodeRawTransactionTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.coinbase_, json_value);
  }

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
      const DecodeRawTransactionTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      DecodeRawTransactionTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.txid_, json_value);
  }

  /**
   * @brief Get of vout
   * @return vout
   */
  int64_t GetVout() const {
    return vout_;
  }
  /**
   * @brief Set to vout
   * @param[in] vout    setting value.
   */
  void SetVout(  // line separate
    const int64_t& vout) {  // NOLINT
    this->vout_ = vout;
  }
  /**
   * @brief Get data type of vout
   * @return Data type of vout
   */
  static std::string GetVoutFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of vout field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetVoutString(  // line separate
      const DecodeRawTransactionTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      DecodeRawTransactionTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
  }

  /**
   * @brief Get of scriptSig.
   * @return scriptSig
   */
  DecodeUnlockingScript& GetScriptSig() {  // NOLINT
    return script_sig_;
  }
  /**
   * @brief Set to scriptSig.
   * @param[in] script_sig    setting value.
   */
  void SetScriptSig(  // line separate
      const DecodeUnlockingScript& script_sig) {  // NOLINT
    this->script_sig_ = script_sig;
  }
  /**
   * @brief Get data type of scriptSig.
   * @return Data type of scriptSig.
   */
  static std::string GetScriptSigFieldType() {
    return "DecodeUnlockingScript";  // NOLINT
  }
  /**
   * @brief Get json string of scriptSig field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetScriptSigString(  // line separate
      const DecodeRawTransactionTxIn& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.script_sig_.Serialize();
  }
  /**
   * @brief Set json object to scriptSig field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetScriptSigString(  // line separate
      DecodeRawTransactionTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    obj.script_sig_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of txinwitness.
   * @return txinwitness
   */
  JsonValueVector<std::string>& GetTxinwitness() {  // NOLINT
    return txinwitness_;
  }
  /**
   * @brief Set to txinwitness.
   * @param[in] txinwitness    setting value.
   */
  void SetTxinwitness(  // line separate
      const JsonValueVector<std::string>& txinwitness) {  // NOLINT
    this->txinwitness_ = txinwitness;
  }
  /**
   * @brief Get data type of txinwitness.
   * @return Data type of txinwitness.
   */
  static std::string GetTxinwitnessFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief Get json string of txinwitness field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxinwitnessString(  // line separate
      const DecodeRawTransactionTxIn& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.txinwitness_.Serialize();
  }
  /**
   * @brief Set json object to txinwitness field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetTxinwitnessString(  // line separate
      DecodeRawTransactionTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txinwitness_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of sequence
   * @return sequence
   */
  int64_t GetSequence() const {
    return sequence_;
  }
  /**
   * @brief Set to sequence
   * @param[in] sequence    setting value.
   */
  void SetSequence(  // line separate
    const int64_t& sequence) {  // NOLINT
    this->sequence_ = sequence;
  }
  /**
   * @brief Get data type of sequence
   * @return Data type of sequence
   */
  static std::string GetSequenceFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of sequence field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSequenceString(  // line separate
      const DecodeRawTransactionTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sequence_);
  }
  /**
   * @brief Set json object to sequence field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSequenceString(  // line separate
      DecodeRawTransactionTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.sequence_, json_value);
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
      const DecodeRawTransactionTxInStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  DecodeRawTransactionTxInStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using DecodeRawTransactionTxInMapTable =
    cfd::core::JsonTableMap<DecodeRawTransactionTxIn>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const DecodeRawTransactionTxInMapTable& GetJsonMapper() const {  // NOLINT
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
  static DecodeRawTransactionTxInMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(coinbase) value
   */
  std::string coinbase_ = "";
  /**
   * @brief JsonAPI(txid) value
   */
  std::string txid_ = "";
  /**
   * @brief JsonAPI(vout) value
   */
  int64_t vout_ = 0;
  /**
   * @brief JsonAPI(scriptSig) value
   */
  DecodeUnlockingScript script_sig_;  // NOLINT
  /**
   * @brief JsonAPI(txinwitness) value
   */
  JsonValueVector<std::string> txinwitness_;  // NOLINT
  /**
   * @brief JsonAPI(sequence) value
   */
  int64_t sequence_ = 0;
};

// ------------------------------------------------------------------------
// DecodeLockingScript
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (DecodeLockingScript) class
 */
class DecodeLockingScript
  : public cfd::core::JsonClassBase<DecodeLockingScript> {
 public:
  DecodeLockingScript() {
    CollectFieldName();
  }
  virtual ~DecodeLockingScript() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of asm
   * @return asm
   */
  std::string GetAsm() const {
    return asm__;
  }
  /**
   * @brief Set to asm
   * @param[in] asm_    setting value.
   */
  void SetAsm(  // line separate
    const std::string& asm_) {  // NOLINT
    this->asm__ = asm_;
  }
  /**
   * @brief Get data type of asm
   * @return Data type of asm
   */
  static std::string GetAsmFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of asm field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAsmString(  // line separate
      const DecodeLockingScript& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asm__);
  }
  /**
   * @brief Set json object to asm field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAsmString(  // line separate
      DecodeLockingScript& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asm__, json_value);
  }

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
      const DecodeLockingScript& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      DecodeLockingScript& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief Get of reqSigs
   * @return reqSigs
   */
  int64_t GetReqSigs() const {
    return req_sigs_;
  }
  /**
   * @brief Set to reqSigs
   * @param[in] req_sigs    setting value.
   */
  void SetReqSigs(  // line separate
    const int64_t& req_sigs) {  // NOLINT
    this->req_sigs_ = req_sigs;
  }
  /**
   * @brief Get data type of reqSigs
   * @return Data type of reqSigs
   */
  static std::string GetReqSigsFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of reqSigs field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetReqSigsString(  // line separate
      const DecodeLockingScript& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.req_sigs_);
  }
  /**
   * @brief Set json object to reqSigs field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetReqSigsString(  // line separate
      DecodeLockingScript& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.req_sigs_, json_value);
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
      const DecodeLockingScript& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.type_);
  }
  /**
   * @brief Set json object to type field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTypeString(  // line separate
      DecodeLockingScript& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.type_, json_value);
  }

  /**
   * @brief Get of addresses.
   * @return addresses
   */
  JsonValueVector<std::string>& GetAddresses() {  // NOLINT
    return addresses_;
  }
  /**
   * @brief Set to addresses.
   * @param[in] addresses    setting value.
   */
  void SetAddresses(  // line separate
      const JsonValueVector<std::string>& addresses) {  // NOLINT
    this->addresses_ = addresses;
  }
  /**
   * @brief Get data type of addresses.
   * @return Data type of addresses.
   */
  static std::string GetAddressesFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief Get json string of addresses field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetAddressesString(  // line separate
      const DecodeLockingScript& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.addresses_.Serialize();
  }
  /**
   * @brief Set json object to addresses field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetAddressesString(  // line separate
      DecodeLockingScript& obj,  // NOLINT
      const UniValue& json_value) {
    obj.addresses_.DeserializeUniValue(json_value);
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
      const DecodeLockingScriptStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  DecodeLockingScriptStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using DecodeLockingScriptMapTable =
    cfd::core::JsonTableMap<DecodeLockingScript>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const DecodeLockingScriptMapTable& GetJsonMapper() const {  // NOLINT
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
  static DecodeLockingScriptMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(asm) value
   */
  std::string asm__ = "";
  /**
   * @brief JsonAPI(hex) value
   */
  std::string hex_ = "";
  /**
   * @brief JsonAPI(reqSigs) value
   */
  int64_t req_sigs_ = 0;
  /**
   * @brief JsonAPI(type) value
   */
  std::string type_ = "";
  /**
   * @brief JsonAPI(addresses) value
   */
  JsonValueVector<std::string> addresses_;  // NOLINT
};

// ------------------------------------------------------------------------
// DecodeRawTransactionTxOut
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (DecodeRawTransactionTxOut) class
 */
class DecodeRawTransactionTxOut
  : public cfd::core::JsonClassBase<DecodeRawTransactionTxOut> {
 public:
  DecodeRawTransactionTxOut() {
    CollectFieldName();
  }
  virtual ~DecodeRawTransactionTxOut() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of value
   * @return value
   */
  double GetValue() const {
    return value_;
  }
  /**
   * @brief Set to value
   * @param[in] value    setting value.
   */
  void SetValue(  // line separate
    const double& value) {  // NOLINT
    this->value_ = value;
  }
  /**
   * @brief Get data type of value
   * @return Data type of value
   */
  static std::string GetValueFieldType() {
    return "double";
  }
  /**
   * @brief Get json string of value field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetValueString(  // line separate
      const DecodeRawTransactionTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.value_);
  }
  /**
   * @brief Set json object to value field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetValueString(  // line separate
      DecodeRawTransactionTxOut& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.value_, json_value);
  }

  /**
   * @brief Get of n
   * @return n
   */
  int64_t GetN() const {
    return n_;
  }
  /**
   * @brief Set to n
   * @param[in] n    setting value.
   */
  void SetN(  // line separate
    const int64_t& n) {  // NOLINT
    this->n_ = n;
  }
  /**
   * @brief Get data type of n
   * @return Data type of n
   */
  static std::string GetNFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of n field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetNString(  // line separate
      const DecodeRawTransactionTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.n_);
  }
  /**
   * @brief Set json object to n field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNString(  // line separate
      DecodeRawTransactionTxOut& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.n_, json_value);
  }

  /**
   * @brief Get of scriptPubKey.
   * @return scriptPubKey
   */
  DecodeLockingScript& GetScriptPubKey() {  // NOLINT
    return script_pub_key_;
  }
  /**
   * @brief Set to scriptPubKey.
   * @param[in] script_pub_key    setting value.
   */
  void SetScriptPubKey(  // line separate
      const DecodeLockingScript& script_pub_key) {  // NOLINT
    this->script_pub_key_ = script_pub_key;
  }
  /**
   * @brief Get data type of scriptPubKey.
   * @return Data type of scriptPubKey.
   */
  static std::string GetScriptPubKeyFieldType() {
    return "DecodeLockingScript";  // NOLINT
  }
  /**
   * @brief Get json string of scriptPubKey field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetScriptPubKeyString(  // line separate
      const DecodeRawTransactionTxOut& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.script_pub_key_.Serialize();
  }
  /**
   * @brief Set json object to scriptPubKey field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetScriptPubKeyString(  // line separate
      DecodeRawTransactionTxOut& obj,  // NOLINT
      const UniValue& json_value) {
    obj.script_pub_key_.DeserializeUniValue(json_value);
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
      const DecodeRawTransactionTxOutStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  DecodeRawTransactionTxOutStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using DecodeRawTransactionTxOutMapTable =
    cfd::core::JsonTableMap<DecodeRawTransactionTxOut>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const DecodeRawTransactionTxOutMapTable& GetJsonMapper() const {  // NOLINT
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
  static DecodeRawTransactionTxOutMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(value) value
   */
  double value_ = 0;
  /**
   * @brief JsonAPI(n) value
   */
  int64_t n_ = 0;
  /**
   * @brief JsonAPI(scriptPubKey) value
   */
  DecodeLockingScript script_pub_key_;  // NOLINT
};

// ------------------------------------------------------------------------
// DecodeRawTransactionResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (DecodeRawTransactionResponse) class
 */
class DecodeRawTransactionResponse
  : public cfd::core::JsonClassBase<DecodeRawTransactionResponse> {
 public:
  DecodeRawTransactionResponse() {
    CollectFieldName();
  }
  virtual ~DecodeRawTransactionResponse() {
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
      const DecodeRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      DecodeRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.txid_, json_value);
  }

  /**
   * @brief Get of hash
   * @return hash
   */
  std::string GetHash() const {
    return hash_;
  }
  /**
   * @brief Set to hash
   * @param[in] hash    setting value.
   */
  void SetHash(  // line separate
    const std::string& hash) {  // NOLINT
    this->hash_ = hash;
  }
  /**
   * @brief Get data type of hash
   * @return Data type of hash
   */
  static std::string GetHashFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of hash field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetHashString(  // line separate
      const DecodeRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hash_);
  }
  /**
   * @brief Set json object to hash field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHashString(  // line separate
      DecodeRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hash_, json_value);
  }

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
      const DecodeRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.version_);
  }
  /**
   * @brief Set json object to version field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVersionString(  // line separate
      DecodeRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.version_, json_value);
  }

  /**
   * @brief Get of size
   * @return size
   */
  int64_t GetSize() const {
    return size_;
  }
  /**
   * @brief Set to size
   * @param[in] size    setting value.
   */
  void SetSize(  // line separate
    const int64_t& size) {  // NOLINT
    this->size_ = size;
  }
  /**
   * @brief Get data type of size
   * @return Data type of size
   */
  static std::string GetSizeFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of size field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSizeString(  // line separate
      const DecodeRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.size_);
  }
  /**
   * @brief Set json object to size field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSizeString(  // line separate
      DecodeRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.size_, json_value);
  }

  /**
   * @brief Get of vsize
   * @return vsize
   */
  int64_t GetVsize() const {
    return vsize_;
  }
  /**
   * @brief Set to vsize
   * @param[in] vsize    setting value.
   */
  void SetVsize(  // line separate
    const int64_t& vsize) {  // NOLINT
    this->vsize_ = vsize;
  }
  /**
   * @brief Get data type of vsize
   * @return Data type of vsize
   */
  static std::string GetVsizeFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of vsize field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetVsizeString(  // line separate
      const DecodeRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vsize_);
  }
  /**
   * @brief Set json object to vsize field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVsizeString(  // line separate
      DecodeRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vsize_, json_value);
  }

  /**
   * @brief Get of weight
   * @return weight
   */
  int64_t GetWeight() const {
    return weight_;
  }
  /**
   * @brief Set to weight
   * @param[in] weight    setting value.
   */
  void SetWeight(  // line separate
    const int64_t& weight) {  // NOLINT
    this->weight_ = weight;
  }
  /**
   * @brief Get data type of weight
   * @return Data type of weight
   */
  static std::string GetWeightFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of weight field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetWeightString(  // line separate
      const DecodeRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.weight_);
  }
  /**
   * @brief Set json object to weight field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetWeightString(  // line separate
      DecodeRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.weight_, json_value);
  }

  /**
   * @brief Get of locktime
   * @return locktime
   */
  uint32_t GetLocktime() const {
    return locktime_;
  }
  /**
   * @brief Set to locktime
   * @param[in] locktime    setting value.
   */
  void SetLocktime(  // line separate
    const uint32_t& locktime) {  // NOLINT
    this->locktime_ = locktime;
  }
  /**
   * @brief Get data type of locktime
   * @return Data type of locktime
   */
  static std::string GetLocktimeFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of locktime field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetLocktimeString(  // line separate
      const DecodeRawTransactionResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.locktime_);
  }
  /**
   * @brief Set json object to locktime field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLocktimeString(  // line separate
      DecodeRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.locktime_, json_value);
  }

  /**
   * @brief Get of vin.
   * @return vin
   */
  JsonObjectVector<DecodeRawTransactionTxIn, DecodeRawTransactionTxInStruct>& GetVin() {  // NOLINT
    return vin_;
  }
  /**
   * @brief Set to vin.
   * @param[in] vin    setting value.
   */
  void SetVin(  // line separate
      const JsonObjectVector<DecodeRawTransactionTxIn, DecodeRawTransactionTxInStruct>& vin) {  // NOLINT
    this->vin_ = vin;
  }
  /**
   * @brief Get data type of vin.
   * @return Data type of vin.
   */
  static std::string GetVinFieldType() {
    return "JsonObjectVector<DecodeRawTransactionTxIn, DecodeRawTransactionTxInStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of vin field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetVinString(  // line separate
      const DecodeRawTransactionResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.vin_.Serialize();
  }
  /**
   * @brief Set json object to vin field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetVinString(  // line separate
      DecodeRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.vin_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of vout.
   * @return vout
   */
  JsonObjectVector<DecodeRawTransactionTxOut, DecodeRawTransactionTxOutStruct>& GetVout() {  // NOLINT
    return vout_;
  }
  /**
   * @brief Set to vout.
   * @param[in] vout    setting value.
   */
  void SetVout(  // line separate
      const JsonObjectVector<DecodeRawTransactionTxOut, DecodeRawTransactionTxOutStruct>& vout) {  // NOLINT
    this->vout_ = vout;
  }
  /**
   * @brief Get data type of vout.
   * @return Data type of vout.
   */
  static std::string GetVoutFieldType() {
    return "JsonObjectVector<DecodeRawTransactionTxOut, DecodeRawTransactionTxOutStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of vout field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetVoutString(  // line separate
      const DecodeRawTransactionResponse& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.vout_.Serialize();
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetVoutString(  // line separate
      DecodeRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.vout_.DeserializeUniValue(json_value);
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
      const DecodeRawTransactionResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  DecodeRawTransactionResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using DecodeRawTransactionResponseMapTable =
    cfd::core::JsonTableMap<DecodeRawTransactionResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const DecodeRawTransactionResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static DecodeRawTransactionResponseMapTable json_mapper;
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
   * @brief JsonAPI(hash) value
   */
  std::string hash_ = "";
  /**
   * @brief JsonAPI(version) value
   */
  uint32_t version_ = 0;
  /**
   * @brief JsonAPI(size) value
   */
  int64_t size_ = 0;
  /**
   * @brief JsonAPI(vsize) value
   */
  int64_t vsize_ = 0;
  /**
   * @brief JsonAPI(weight) value
   */
  int64_t weight_ = 0;
  /**
   * @brief JsonAPI(locktime) value
   */
  uint32_t locktime_ = 0;
  /**
   * @brief JsonAPI(vin) value
   */
  JsonObjectVector<DecodeRawTransactionTxIn, DecodeRawTransactionTxInStruct> vin_;  // NOLINT
  /**
   * @brief JsonAPI(vout) value
   */
  JsonObjectVector<DecodeRawTransactionTxOut, DecodeRawTransactionTxOutStruct> vout_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_DECODE_TRANSACTION_JSON_H_
