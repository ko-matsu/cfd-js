// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_create_raw_pegin_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_CREATE_RAW_PEGIN_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_CREATE_RAW_PEGIN_JSON_H_

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
// ElementsPeginWitness
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsPeginWitness) class
 */
class ElementsPeginWitness
  : public cfd::core::JsonClassBase<ElementsPeginWitness> {
 public:
  ElementsPeginWitness() {
    CollectFieldName();
  }
  virtual ~ElementsPeginWitness() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of amount
   * @return amount
   */
  int64_t GetAmount() const {
    return amount_;
  }
  /**
   * @brief Set to amount
   * @param[in] amount    setting value.
   */
  void SetAmount(  // line separate
    const int64_t& amount) {  // NOLINT
    this->amount_ = amount;
  }
  /**
   * @brief Get data type of amount
   * @return Data type of amount
   */
  static std::string GetAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of amount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAmountString(  // line separate
      const ElementsPeginWitness& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      ElementsPeginWitness& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.amount_, json_value);
  }

  /**
   * @brief Get of asset
   * @return asset
   */
  std::string GetAsset() const {
    return asset_;
  }
  /**
   * @brief Set to asset
   * @param[in] asset    setting value.
   */
  void SetAsset(  // line separate
    const std::string& asset) {  // NOLINT
    this->asset_ = asset;
  }
  /**
   * @brief Get data type of asset
   * @return Data type of asset
   */
  static std::string GetAssetFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of asset field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAssetString(  // line separate
      const ElementsPeginWitness& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      ElementsPeginWitness& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
  }

  /**
   * @brief Get of mainchainGenesisBlockHash
   * @return mainchainGenesisBlockHash
   */
  std::string GetMainchainGenesisBlockHash() const {
    return mainchain_genesis_block_hash_;
  }
  /**
   * @brief Set to mainchainGenesisBlockHash
   * @param[in] mainchain_genesis_block_hash    setting value.
   */
  void SetMainchainGenesisBlockHash(  // line separate
    const std::string& mainchain_genesis_block_hash) {  // NOLINT
    this->mainchain_genesis_block_hash_ = mainchain_genesis_block_hash;
  }
  /**
   * @brief Get data type of mainchainGenesisBlockHash
   * @return Data type of mainchainGenesisBlockHash
   */
  static std::string GetMainchainGenesisBlockHashFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of mainchainGenesisBlockHash field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetMainchainGenesisBlockHashString(  // line separate
      const ElementsPeginWitness& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.mainchain_genesis_block_hash_);
  }
  /**
   * @brief Set json object to mainchainGenesisBlockHash field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetMainchainGenesisBlockHashString(  // line separate
      ElementsPeginWitness& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.mainchain_genesis_block_hash_, json_value);
  }

  /**
   * @brief Get of claimScript
   * @return claimScript
   */
  std::string GetClaimScript() const {
    return claim_script_;
  }
  /**
   * @brief Set to claimScript
   * @param[in] claim_script    setting value.
   */
  void SetClaimScript(  // line separate
    const std::string& claim_script) {  // NOLINT
    this->claim_script_ = claim_script;
  }
  /**
   * @brief Get data type of claimScript
   * @return Data type of claimScript
   */
  static std::string GetClaimScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of claimScript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetClaimScriptString(  // line separate
      const ElementsPeginWitness& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.claim_script_);
  }
  /**
   * @brief Set json object to claimScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetClaimScriptString(  // line separate
      ElementsPeginWitness& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.claim_script_, json_value);
  }

  /**
   * @brief Get of mainchainRawTransaction
   * @return mainchainRawTransaction
   */
  std::string GetMainchainRawTransaction() const {
    return mainchain_raw_transaction_;
  }
  /**
   * @brief Set to mainchainRawTransaction
   * @param[in] mainchain_raw_transaction    setting value.
   */
  void SetMainchainRawTransaction(  // line separate
    const std::string& mainchain_raw_transaction) {  // NOLINT
    this->mainchain_raw_transaction_ = mainchain_raw_transaction;
  }
  /**
   * @brief Get data type of mainchainRawTransaction
   * @return Data type of mainchainRawTransaction
   */
  static std::string GetMainchainRawTransactionFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of mainchainRawTransaction field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetMainchainRawTransactionString(  // line separate
      const ElementsPeginWitness& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.mainchain_raw_transaction_);
  }
  /**
   * @brief Set json object to mainchainRawTransaction field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetMainchainRawTransactionString(  // line separate
      ElementsPeginWitness& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.mainchain_raw_transaction_, json_value);
  }

  /**
   * @brief Get of mainchainTxoutproof
   * @return mainchainTxoutproof
   */
  std::string GetMainchainTxoutproof() const {
    return mainchain_txoutproof_;
  }
  /**
   * @brief Set to mainchainTxoutproof
   * @param[in] mainchain_txoutproof    setting value.
   */
  void SetMainchainTxoutproof(  // line separate
    const std::string& mainchain_txoutproof) {  // NOLINT
    this->mainchain_txoutproof_ = mainchain_txoutproof;
  }
  /**
   * @brief Get data type of mainchainTxoutproof
   * @return Data type of mainchainTxoutproof
   */
  static std::string GetMainchainTxoutproofFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of mainchainTxoutproof field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetMainchainTxoutproofString(  // line separate
      const ElementsPeginWitness& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.mainchain_txoutproof_);
  }
  /**
   * @brief Set json object to mainchainTxoutproof field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetMainchainTxoutproofString(  // line separate
      ElementsPeginWitness& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.mainchain_txoutproof_, json_value);
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
      const ElementsPeginWitnessStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsPeginWitnessStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsPeginWitnessMapTable =
    cfd::core::JsonTableMap<ElementsPeginWitness>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsPeginWitnessMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsPeginWitnessMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(amount) value
   */
  int64_t amount_ = 0;
  /**
   * @brief JsonAPI(asset) value
   */
  std::string asset_ = "";
  /**
   * @brief JsonAPI(mainchainGenesisBlockHash) value
   */
  std::string mainchain_genesis_block_hash_ = "";
  /**
   * @brief JsonAPI(claimScript) value
   */
  std::string claim_script_ = "";
  /**
   * @brief JsonAPI(mainchainRawTransaction) value
   */
  std::string mainchain_raw_transaction_ = "";
  /**
   * @brief JsonAPI(mainchainTxoutproof) value
   */
  std::string mainchain_txoutproof_ = "";
};

// ------------------------------------------------------------------------
// ElementsPeginTxIn
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsPeginTxIn) class
 */
class ElementsPeginTxIn
  : public cfd::core::JsonClassBase<ElementsPeginTxIn> {
 public:
  ElementsPeginTxIn() {
    CollectFieldName();
  }
  virtual ~ElementsPeginTxIn() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of isPegin
   * @return isPegin
   */
  bool GetIsPegin() const {
    return is_pegin_;
  }
  /**
   * @brief Set to isPegin
   * @param[in] is_pegin    setting value.
   */
  void SetIsPegin(  // line separate
    const bool& is_pegin) {  // NOLINT
    this->is_pegin_ = is_pegin;
  }
  /**
   * @brief Get data type of isPegin
   * @return Data type of isPegin
   */
  static std::string GetIsPeginFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isPegin field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsPeginString(  // line separate
      const ElementsPeginTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_pegin_);
  }
  /**
   * @brief Set json object to isPegin field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsPeginString(  // line separate
      ElementsPeginTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_pegin_, json_value);
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
      const ElementsPeginTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      ElementsPeginTxIn& obj,  // NOLINT
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
      const ElementsPeginTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      ElementsPeginTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
  }

  /**
   * @brief Get of sequence
   * @return sequence
   */
  uint32_t GetSequence() const {
    return sequence_;
  }
  /**
   * @brief Set to sequence
   * @param[in] sequence    setting value.
   */
  void SetSequence(  // line separate
    const uint32_t& sequence) {  // NOLINT
    this->sequence_ = sequence;
  }
  /**
   * @brief Get data type of sequence
   * @return Data type of sequence
   */
  static std::string GetSequenceFieldType() {
    return "uint32_t";
  }
  /**
   * @brief Get json string of sequence field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSequenceString(  // line separate
      const ElementsPeginTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sequence_);
  }
  /**
   * @brief Set json object to sequence field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSequenceString(  // line separate
      ElementsPeginTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.sequence_, json_value);
  }

  /**
   * @brief Get of peginwitness.
   * @return peginwitness
   */
  ElementsPeginWitness& GetPeginwitness() {  // NOLINT
    return peginwitness_;
  }
  /**
   * @brief Set to peginwitness.
   * @param[in] peginwitness    setting value.
   */
  void SetPeginwitness(  // line separate
      const ElementsPeginWitness& peginwitness) {  // NOLINT
    this->peginwitness_ = peginwitness;
  }
  /**
   * @brief Get data type of peginwitness.
   * @return Data type of peginwitness.
   */
  static std::string GetPeginwitnessFieldType() {
    return "ElementsPeginWitness";  // NOLINT
  }
  /**
   * @brief Get json string of peginwitness field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetPeginwitnessString(  // line separate
      const ElementsPeginTxIn& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.peginwitness_.Serialize();
  }
  /**
   * @brief Set json object to peginwitness field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetPeginwitnessString(  // line separate
      ElementsPeginTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    obj.peginwitness_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of isRemoveMainchainTxWitness
   * @return isRemoveMainchainTxWitness
   */
  bool GetIsRemoveMainchainTxWitness() const {
    return is_remove_mainchain_tx_witness_;
  }
  /**
   * @brief Set to isRemoveMainchainTxWitness
   * @param[in] is_remove_mainchain_tx_witness    setting value.
   */
  void SetIsRemoveMainchainTxWitness(  // line separate
    const bool& is_remove_mainchain_tx_witness) {  // NOLINT
    this->is_remove_mainchain_tx_witness_ = is_remove_mainchain_tx_witness;
  }
  /**
   * @brief Get data type of isRemoveMainchainTxWitness
   * @return Data type of isRemoveMainchainTxWitness
   */
  static std::string GetIsRemoveMainchainTxWitnessFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isRemoveMainchainTxWitness field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsRemoveMainchainTxWitnessString(  // line separate
      const ElementsPeginTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_remove_mainchain_tx_witness_);
  }
  /**
   * @brief Set json object to isRemoveMainchainTxWitness field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsRemoveMainchainTxWitnessString(  // line separate
      ElementsPeginTxIn& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_remove_mainchain_tx_witness_, json_value);
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
      const ElementsPeginTxInStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsPeginTxInStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsPeginTxInMapTable =
    cfd::core::JsonTableMap<ElementsPeginTxIn>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsPeginTxInMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsPeginTxInMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(isPegin) value
   */
  bool is_pegin_ = true;
  /**
   * @brief JsonAPI(txid) value
   */
  std::string txid_ = "";
  /**
   * @brief JsonAPI(vout) value
   */
  uint32_t vout_ = 0;
  /**
   * @brief JsonAPI(sequence) value
   */
  uint32_t sequence_ = 4294967295;
  /**
   * @brief JsonAPI(peginwitness) value
   */
  ElementsPeginWitness peginwitness_;  // NOLINT
  /**
   * @brief JsonAPI(isRemoveMainchainTxWitness) value
   */
  bool is_remove_mainchain_tx_witness_ = false;
};

// ------------------------------------------------------------------------
// ElementsPeginTxOut
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsPeginTxOut) class
 */
class ElementsPeginTxOut
  : public cfd::core::JsonClassBase<ElementsPeginTxOut> {
 public:
  ElementsPeginTxOut() {
    CollectFieldName();
  }
  virtual ~ElementsPeginTxOut() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of address
   * @return address
   */
  std::string GetAddress() const {
    return address_;
  }
  /**
   * @brief Set to address
   * @param[in] address    setting value.
   */
  void SetAddress(  // line separate
    const std::string& address) {  // NOLINT
    this->address_ = address;
  }
  /**
   * @brief Get data type of address
   * @return Data type of address
   */
  static std::string GetAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of address field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAddressString(  // line separate
      const ElementsPeginTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.address_);
  }
  /**
   * @brief Set json object to address field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAddressString(  // line separate
      ElementsPeginTxOut& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.address_, json_value);
  }

  /**
   * @brief Get of amount
   * @return amount
   */
  int64_t GetAmount() const {
    return amount_;
  }
  /**
   * @brief Set to amount
   * @param[in] amount    setting value.
   */
  void SetAmount(  // line separate
    const int64_t& amount) {  // NOLINT
    this->amount_ = amount;
  }
  /**
   * @brief Get data type of amount
   * @return Data type of amount
   */
  static std::string GetAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of amount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAmountString(  // line separate
      const ElementsPeginTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      ElementsPeginTxOut& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.amount_, json_value);
  }

  /**
   * @brief Get of asset
   * @return asset
   */
  std::string GetAsset() const {
    return asset_;
  }
  /**
   * @brief Set to asset
   * @param[in] asset    setting value.
   */
  void SetAsset(  // line separate
    const std::string& asset) {  // NOLINT
    this->asset_ = asset;
  }
  /**
   * @brief Get data type of asset
   * @return Data type of asset
   */
  static std::string GetAssetFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of asset field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAssetString(  // line separate
      const ElementsPeginTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      ElementsPeginTxOut& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
  }

  /**
   * @brief Get of isRemoveNonce
   * @return isRemoveNonce
   */
  bool GetIsRemoveNonce() const {
    return is_remove_nonce_;
  }
  /**
   * @brief Set to isRemoveNonce
   * @param[in] is_remove_nonce    setting value.
   */
  void SetIsRemoveNonce(  // line separate
    const bool& is_remove_nonce) {  // NOLINT
    this->is_remove_nonce_ = is_remove_nonce;
  }
  /**
   * @brief Get data type of isRemoveNonce
   * @return Data type of isRemoveNonce
   */
  static std::string GetIsRemoveNonceFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isRemoveNonce field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsRemoveNonceString(  // line separate
      const ElementsPeginTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_remove_nonce_);
  }
  /**
   * @brief Set json object to isRemoveNonce field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsRemoveNonceString(  // line separate
      ElementsPeginTxOut& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_remove_nonce_, json_value);
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
      const ElementsPeginTxOutStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsPeginTxOutStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsPeginTxOutMapTable =
    cfd::core::JsonTableMap<ElementsPeginTxOut>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsPeginTxOutMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsPeginTxOutMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(address) value
   */
  std::string address_ = "";
  /**
   * @brief JsonAPI(amount) value
   */
  int64_t amount_ = 0;
  /**
   * @brief JsonAPI(asset) value
   */
  std::string asset_ = "";
  /**
   * @brief JsonAPI(isRemoveNonce) value
   */
  bool is_remove_nonce_ = false;
};

// ------------------------------------------------------------------------
// ElementsPeginTxOutFee
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsPeginTxOutFee) class
 */
class ElementsPeginTxOutFee
  : public cfd::core::JsonClassBase<ElementsPeginTxOutFee> {
 public:
  ElementsPeginTxOutFee() {
    CollectFieldName();
  }
  virtual ~ElementsPeginTxOutFee() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of amount
   * @return amount
   */
  int64_t GetAmount() const {
    return amount_;
  }
  /**
   * @brief Set to amount
   * @param[in] amount    setting value.
   */
  void SetAmount(  // line separate
    const int64_t& amount) {  // NOLINT
    this->amount_ = amount;
  }
  /**
   * @brief Get data type of amount
   * @return Data type of amount
   */
  static std::string GetAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of amount field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAmountString(  // line separate
      const ElementsPeginTxOutFee& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      ElementsPeginTxOutFee& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.amount_, json_value);
  }

  /**
   * @brief Get of asset
   * @return asset
   */
  std::string GetAsset() const {
    return asset_;
  }
  /**
   * @brief Set to asset
   * @param[in] asset    setting value.
   */
  void SetAsset(  // line separate
    const std::string& asset) {  // NOLINT
    this->asset_ = asset;
  }
  /**
   * @brief Get data type of asset
   * @return Data type of asset
   */
  static std::string GetAssetFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of asset field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetAssetString(  // line separate
      const ElementsPeginTxOutFee& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      ElementsPeginTxOutFee& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
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
      const ElementsPeginTxOutFeeStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsPeginTxOutFeeStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsPeginTxOutFeeMapTable =
    cfd::core::JsonTableMap<ElementsPeginTxOutFee>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsPeginTxOutFeeMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsPeginTxOutFeeMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(amount) value
   */
  int64_t amount_ = 0;
  /**
   * @brief JsonAPI(asset) value
   */
  std::string asset_ = "";
};

// ------------------------------------------------------------------------
// ElementsCreateRawPeginRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsCreateRawPeginRequest) class
 */
class ElementsCreateRawPeginRequest
  : public cfd::core::JsonClassBase<ElementsCreateRawPeginRequest> {
 public:
  ElementsCreateRawPeginRequest() {
    CollectFieldName();
  }
  virtual ~ElementsCreateRawPeginRequest() {
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
      const ElementsCreateRawPeginRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.version_);
  }
  /**
   * @brief Set json object to version field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVersionString(  // line separate
      ElementsCreateRawPeginRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.version_, json_value);
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
      const ElementsCreateRawPeginRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.locktime_);
  }
  /**
   * @brief Set json object to locktime field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLocktimeString(  // line separate
      ElementsCreateRawPeginRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.locktime_, json_value);
  }

  /**
   * @brief Get of txins.
   * @return txins
   */
  JsonObjectVector<ElementsPeginTxIn, ElementsPeginTxInStruct>& GetTxins() {  // NOLINT
    return txins_;
  }
  /**
   * @brief Set to txins.
   * @param[in] txins    setting value.
   */
  void SetTxins(  // line separate
      const JsonObjectVector<ElementsPeginTxIn, ElementsPeginTxInStruct>& txins) {  // NOLINT
    this->txins_ = txins;
  }
  /**
   * @brief Get data type of txins.
   * @return Data type of txins.
   */
  static std::string GetTxinsFieldType() {
    return "JsonObjectVector<ElementsPeginTxIn, ElementsPeginTxInStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of txins field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxinsString(  // line separate
      const ElementsCreateRawPeginRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.txins_.Serialize();
  }
  /**
   * @brief Set json object to txins field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetTxinsString(  // line separate
      ElementsCreateRawPeginRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txins_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of txouts.
   * @return txouts
   */
  JsonObjectVector<ElementsPeginTxOut, ElementsPeginTxOutStruct>& GetTxouts() {  // NOLINT
    return txouts_;
  }
  /**
   * @brief Set to txouts.
   * @param[in] txouts    setting value.
   */
  void SetTxouts(  // line separate
      const JsonObjectVector<ElementsPeginTxOut, ElementsPeginTxOutStruct>& txouts) {  // NOLINT
    this->txouts_ = txouts;
  }
  /**
   * @brief Get data type of txouts.
   * @return Data type of txouts.
   */
  static std::string GetTxoutsFieldType() {
    return "JsonObjectVector<ElementsPeginTxOut, ElementsPeginTxOutStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of txouts field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxoutsString(  // line separate
      const ElementsCreateRawPeginRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.txouts_.Serialize();
  }
  /**
   * @brief Set json object to txouts field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetTxoutsString(  // line separate
      ElementsCreateRawPeginRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txouts_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of fee.
   * @return fee
   */
  ElementsPeginTxOutFee& GetFee() {  // NOLINT
    return fee_;
  }
  /**
   * @brief Set to fee.
   * @param[in] fee    setting value.
   */
  void SetFee(  // line separate
      const ElementsPeginTxOutFee& fee) {  // NOLINT
    this->fee_ = fee;
  }
  /**
   * @brief Get data type of fee.
   * @return Data type of fee.
   */
  static std::string GetFeeFieldType() {
    return "ElementsPeginTxOutFee";  // NOLINT
  }
  /**
   * @brief Get json string of fee field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetFeeString(  // line separate
      const ElementsCreateRawPeginRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.fee_.Serialize();
  }
  /**
   * @brief Set json object to fee field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetFeeString(  // line separate
      ElementsCreateRawPeginRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.fee_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of isRandomSortTxOut
   * @return isRandomSortTxOut
   */
  bool GetIsRandomSortTxOut() const {
    return is_random_sort_tx_out_;
  }
  /**
   * @brief Set to isRandomSortTxOut
   * @param[in] is_random_sort_tx_out    setting value.
   */
  void SetIsRandomSortTxOut(  // line separate
    const bool& is_random_sort_tx_out) {  // NOLINT
    this->is_random_sort_tx_out_ = is_random_sort_tx_out;
  }
  /**
   * @brief Get data type of isRandomSortTxOut
   * @return Data type of isRandomSortTxOut
   */
  static std::string GetIsRandomSortTxOutFieldType() {
    return "bool";
  }
  /**
   * @brief Get json string of isRandomSortTxOut field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetIsRandomSortTxOutString(  // line separate
      const ElementsCreateRawPeginRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_random_sort_tx_out_);
  }
  /**
   * @brief Set json object to isRandomSortTxOut field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsRandomSortTxOutString(  // line separate
      ElementsCreateRawPeginRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_random_sort_tx_out_, json_value);
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
      const ElementsCreateRawPeginRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsCreateRawPeginRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsCreateRawPeginRequestMapTable =
    cfd::core::JsonTableMap<ElementsCreateRawPeginRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsCreateRawPeginRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsCreateRawPeginRequestMapTable json_mapper;
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
  uint32_t version_ = 2;
  /**
   * @brief JsonAPI(locktime) value
   */
  uint32_t locktime_ = 0;
  /**
   * @brief JsonAPI(txins) value
   */
  JsonObjectVector<ElementsPeginTxIn, ElementsPeginTxInStruct> txins_;  // NOLINT
  /**
   * @brief JsonAPI(txouts) value
   */
  JsonObjectVector<ElementsPeginTxOut, ElementsPeginTxOutStruct> txouts_;  // NOLINT
  /**
   * @brief JsonAPI(fee) value
   */
  ElementsPeginTxOutFee fee_;  // NOLINT
  /**
   * @brief JsonAPI(isRandomSortTxOut) value
   */
  bool is_random_sort_tx_out_ = false;
};

// ------------------------------------------------------------------------
// ElementsCreateRawPeginResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsCreateRawPeginResponse) class
 */
class ElementsCreateRawPeginResponse
  : public cfd::core::JsonClassBase<ElementsCreateRawPeginResponse> {
 public:
  ElementsCreateRawPeginResponse() {
    CollectFieldName();
  }
  virtual ~ElementsCreateRawPeginResponse() {
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
      const ElementsCreateRawPeginResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      ElementsCreateRawPeginResponse& obj,  // NOLINT
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
      const ElementsCreateRawPeginResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsCreateRawPeginResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsCreateRawPeginResponseMapTable =
    cfd::core::JsonTableMap<ElementsCreateRawPeginResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsCreateRawPeginResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsCreateRawPeginResponseMapTable json_mapper;
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

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_CREATE_RAW_PEGIN_JSON_H_
