// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_create_raw_pegout_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_CREATE_RAW_PEGOUT_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_CREATE_RAW_PEGOUT_JSON_H_

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
// ElementsPegoutTxIn
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsPegoutTxIn) class
 */
class ElementsPegoutTxIn
  : public cfd::core::JsonClassBase<ElementsPegoutTxIn> {
 public:
  ElementsPegoutTxIn() {
    CollectFieldName();
  }
  virtual ~ElementsPegoutTxIn() {
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
      const ElementsPegoutTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      ElementsPegoutTxIn& obj,  // NOLINT
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
      const ElementsPegoutTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      ElementsPegoutTxIn& obj,  // NOLINT
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
      const ElementsPegoutTxIn& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sequence_);
  }
  /**
   * @brief Set json object to sequence field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSequenceString(  // line separate
      ElementsPegoutTxIn& obj,  // NOLINT
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
      const ElementsPegoutTxInStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsPegoutTxInStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsPegoutTxInMapTable =
    cfd::core::JsonTableMap<ElementsPegoutTxIn>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsPegoutTxInMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsPegoutTxInMapTable json_mapper;
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
   * @brief JsonAPI(sequence) value
   */
  uint32_t sequence_ = 4294967295;
};

// ------------------------------------------------------------------------
// ElementsPegoutTxOut
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsPegoutTxOut) class
 */
class ElementsPegoutTxOut
  : public cfd::core::JsonClassBase<ElementsPegoutTxOut> {
 public:
  ElementsPegoutTxOut() {
    CollectFieldName();
  }
  virtual ~ElementsPegoutTxOut() {
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
      const ElementsPegoutTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.address_);
  }
  /**
   * @brief Set json object to address field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAddressString(  // line separate
      ElementsPegoutTxOut& obj,  // NOLINT
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
      const ElementsPegoutTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      ElementsPegoutTxOut& obj,  // NOLINT
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
      const ElementsPegoutTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      ElementsPegoutTxOut& obj,  // NOLINT
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
      const ElementsPegoutTxOut& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_remove_nonce_);
  }
  /**
   * @brief Set json object to isRemoveNonce field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsRemoveNonceString(  // line separate
      ElementsPegoutTxOut& obj,  // NOLINT
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
      const ElementsPegoutTxOutStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsPegoutTxOutStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsPegoutTxOutMapTable =
    cfd::core::JsonTableMap<ElementsPegoutTxOut>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsPegoutTxOutMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsPegoutTxOutMapTable json_mapper;
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
// ElementsPegout
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsPegout) class
 */
class ElementsPegout
  : public cfd::core::JsonClassBase<ElementsPegout> {
 public:
  ElementsPegout() {
    CollectFieldName();
  }
  virtual ~ElementsPegout() {
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
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      ElementsPegout& obj,  // NOLINT
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
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
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
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
  }

  /**
   * @brief Get of elementsNetwork
   * @return elementsNetwork
   */
  std::string GetElementsNetwork() const {
    return elements_network_;
  }
  /**
   * @brief Set to elementsNetwork
   * @param[in] elements_network    setting value.
   */
  void SetElementsNetwork(  // line separate
    const std::string& elements_network) {  // NOLINT
    this->elements_network_ = elements_network;
  }
  /**
   * @brief Get data type of elementsNetwork
   * @return Data type of elementsNetwork
   */
  static std::string GetElementsNetworkFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of elementsNetwork field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetElementsNetworkString(  // line separate
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.elements_network_);
  }
  /**
   * @brief Set json object to elementsNetwork field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetElementsNetworkString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.elements_network_, json_value);
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
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.mainchain_genesis_block_hash_);
  }
  /**
   * @brief Set json object to mainchainGenesisBlockHash field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetMainchainGenesisBlockHashString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.mainchain_genesis_block_hash_, json_value);
  }

  /**
   * @brief Get of btcAddress
   * @return btcAddress
   */
  std::string GetBtcAddress() const {
    return btc_address_;
  }
  /**
   * @brief Set to btcAddress
   * @param[in] btc_address    setting value.
   */
  void SetBtcAddress(  // line separate
    const std::string& btc_address) {  // NOLINT
    this->btc_address_ = btc_address;
  }
  /**
   * @brief Get data type of btcAddress
   * @return Data type of btcAddress
   */
  static std::string GetBtcAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of btcAddress field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBtcAddressString(  // line separate
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.btc_address_);
  }
  /**
   * @brief Set json object to btcAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBtcAddressString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.btc_address_, json_value);
  }

  /**
   * @brief Get of onlinePubkey
   * @return onlinePubkey
   */
  std::string GetOnlinePubkey() const {
    return online_pubkey_;
  }
  /**
   * @brief Set to onlinePubkey
   * @param[in] online_pubkey    setting value.
   */
  void SetOnlinePubkey(  // line separate
    const std::string& online_pubkey) {  // NOLINT
    this->online_pubkey_ = online_pubkey;
  }
  /**
   * @brief Get data type of onlinePubkey
   * @return Data type of onlinePubkey
   */
  static std::string GetOnlinePubkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of onlinePubkey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetOnlinePubkeyString(  // line separate
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.online_pubkey_);
  }
  /**
   * @brief Set json object to onlinePubkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetOnlinePubkeyString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.online_pubkey_, json_value);
  }

  /**
   * @brief Get of masterOnlineKey
   * @return masterOnlineKey
   */
  std::string GetMasterOnlineKey() const {
    return master_online_key_;
  }
  /**
   * @brief Set to masterOnlineKey
   * @param[in] master_online_key    setting value.
   */
  void SetMasterOnlineKey(  // line separate
    const std::string& master_online_key) {  // NOLINT
    this->master_online_key_ = master_online_key;
  }
  /**
   * @brief Get data type of masterOnlineKey
   * @return Data type of masterOnlineKey
   */
  static std::string GetMasterOnlineKeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of masterOnlineKey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetMasterOnlineKeyString(  // line separate
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.master_online_key_);
  }
  /**
   * @brief Set json object to masterOnlineKey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetMasterOnlineKeyString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.master_online_key_, json_value);
  }

  /**
   * @brief Get of bitcoinDescriptor
   * @return bitcoinDescriptor
   */
  std::string GetBitcoinDescriptor() const {
    return bitcoin_descriptor_;
  }
  /**
   * @brief Set to bitcoinDescriptor
   * @param[in] bitcoin_descriptor    setting value.
   */
  void SetBitcoinDescriptor(  // line separate
    const std::string& bitcoin_descriptor) {  // NOLINT
    this->bitcoin_descriptor_ = bitcoin_descriptor;
  }
  /**
   * @brief Get data type of bitcoinDescriptor
   * @return Data type of bitcoinDescriptor
   */
  static std::string GetBitcoinDescriptorFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of bitcoinDescriptor field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBitcoinDescriptorString(  // line separate
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.bitcoin_descriptor_);
  }
  /**
   * @brief Set json object to bitcoinDescriptor field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBitcoinDescriptorString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.bitcoin_descriptor_, json_value);
  }

  /**
   * @brief Get of bip32Counter
   * @return bip32Counter
   */
  int64_t GetBip32Counter() const {
    return bip32_counter_;
  }
  /**
   * @brief Set to bip32Counter
   * @param[in] bip32_counter    setting value.
   */
  void SetBip32Counter(  // line separate
    const int64_t& bip32_counter) {  // NOLINT
    this->bip32_counter_ = bip32_counter;
  }
  /**
   * @brief Get data type of bip32Counter
   * @return Data type of bip32Counter
   */
  static std::string GetBip32CounterFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of bip32Counter field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBip32CounterString(  // line separate
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.bip32_counter_);
  }
  /**
   * @brief Set json object to bip32Counter field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBip32CounterString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.bip32_counter_, json_value);
  }

  /**
   * @brief Get of whitelist
   * @return whitelist
   */
  std::string GetWhitelist() const {
    return whitelist_;
  }
  /**
   * @brief Set to whitelist
   * @param[in] whitelist    setting value.
   */
  void SetWhitelist(  // line separate
    const std::string& whitelist) {  // NOLINT
    this->whitelist_ = whitelist;
  }
  /**
   * @brief Get data type of whitelist
   * @return Data type of whitelist
   */
  static std::string GetWhitelistFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of whitelist field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetWhitelistString(  // line separate
      const ElementsPegout& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.whitelist_);
  }
  /**
   * @brief Set json object to whitelist field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetWhitelistString(  // line separate
      ElementsPegout& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.whitelist_, json_value);
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
      const ElementsPegoutStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsPegoutStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsPegoutMapTable =
    cfd::core::JsonTableMap<ElementsPegout>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsPegoutMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsPegoutMapTable json_mapper;
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
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(elementsNetwork) value
   */
  std::string elements_network_ = "";
  /**
   * @brief JsonAPI(mainchainGenesisBlockHash) value
   */
  std::string mainchain_genesis_block_hash_ = "";
  /**
   * @brief JsonAPI(btcAddress) value
   */
  std::string btc_address_ = "";
  /**
   * @brief JsonAPI(onlinePubkey) value
   */
  std::string online_pubkey_ = "";
  /**
   * @brief JsonAPI(masterOnlineKey) value
   */
  std::string master_online_key_ = "";
  /**
   * @brief JsonAPI(bitcoinDescriptor) value
   */
  std::string bitcoin_descriptor_ = "";
  /**
   * @brief JsonAPI(bip32Counter) value
   */
  int64_t bip32_counter_ = 0;
  /**
   * @brief JsonAPI(whitelist) value
   */
  std::string whitelist_ = "";
};

// ------------------------------------------------------------------------
// ElementsPegoutTxOutFee
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsPegoutTxOutFee) class
 */
class ElementsPegoutTxOutFee
  : public cfd::core::JsonClassBase<ElementsPegoutTxOutFee> {
 public:
  ElementsPegoutTxOutFee() {
    CollectFieldName();
  }
  virtual ~ElementsPegoutTxOutFee() {
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
      const ElementsPegoutTxOutFee& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.amount_);
  }
  /**
   * @brief Set json object to amount field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAmountString(  // line separate
      ElementsPegoutTxOutFee& obj,  // NOLINT
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
      const ElementsPegoutTxOutFee& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.asset_);
  }
  /**
   * @brief Set json object to asset field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetAssetString(  // line separate
      ElementsPegoutTxOutFee& obj,  // NOLINT
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
      const ElementsPegoutTxOutFeeStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsPegoutTxOutFeeStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsPegoutTxOutFeeMapTable =
    cfd::core::JsonTableMap<ElementsPegoutTxOutFee>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsPegoutTxOutFeeMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsPegoutTxOutFeeMapTable json_mapper;
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
// ElementsCreateRawPegoutRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsCreateRawPegoutRequest) class
 */
class ElementsCreateRawPegoutRequest
  : public cfd::core::JsonClassBase<ElementsCreateRawPegoutRequest> {
 public:
  ElementsCreateRawPegoutRequest() {
    CollectFieldName();
  }
  virtual ~ElementsCreateRawPegoutRequest() {
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
      const ElementsCreateRawPegoutRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.version_);
  }
  /**
   * @brief Set json object to version field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVersionString(  // line separate
      ElementsCreateRawPegoutRequest& obj,  // NOLINT
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
      const ElementsCreateRawPegoutRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.locktime_);
  }
  /**
   * @brief Set json object to locktime field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetLocktimeString(  // line separate
      ElementsCreateRawPegoutRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.locktime_, json_value);
  }

  /**
   * @brief Get of txins.
   * @return txins
   */
  JsonObjectVector<ElementsPegoutTxIn, ElementsPegoutTxInStruct>& GetTxins() {  // NOLINT
    return txins_;
  }
  /**
   * @brief Set to txins.
   * @param[in] txins    setting value.
   */
  void SetTxins(  // line separate
      const JsonObjectVector<ElementsPegoutTxIn, ElementsPegoutTxInStruct>& txins) {  // NOLINT
    this->txins_ = txins;
  }
  /**
   * @brief Get data type of txins.
   * @return Data type of txins.
   */
  static std::string GetTxinsFieldType() {
    return "JsonObjectVector<ElementsPegoutTxIn, ElementsPegoutTxInStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of txins field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxinsString(  // line separate
      const ElementsCreateRawPegoutRequest& obj) {  // NOLINT
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
      ElementsCreateRawPegoutRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txins_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of txouts.
   * @return txouts
   */
  JsonObjectVector<ElementsPegoutTxOut, ElementsPegoutTxOutStruct>& GetTxouts() {  // NOLINT
    return txouts_;
  }
  /**
   * @brief Set to txouts.
   * @param[in] txouts    setting value.
   */
  void SetTxouts(  // line separate
      const JsonObjectVector<ElementsPegoutTxOut, ElementsPegoutTxOutStruct>& txouts) {  // NOLINT
    this->txouts_ = txouts;
  }
  /**
   * @brief Get data type of txouts.
   * @return Data type of txouts.
   */
  static std::string GetTxoutsFieldType() {
    return "JsonObjectVector<ElementsPegoutTxOut, ElementsPegoutTxOutStruct>";  // NOLINT
  }
  /**
   * @brief Get json string of txouts field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxoutsString(  // line separate
      const ElementsCreateRawPegoutRequest& obj) {  // NOLINT
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
      ElementsCreateRawPegoutRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txouts_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of pegout.
   * @return pegout
   */
  ElementsPegout& GetPegout() {  // NOLINT
    return pegout_;
  }
  /**
   * @brief Set to pegout.
   * @param[in] pegout    setting value.
   */
  void SetPegout(  // line separate
      const ElementsPegout& pegout) {  // NOLINT
    this->pegout_ = pegout;
  }
  /**
   * @brief Get data type of pegout.
   * @return Data type of pegout.
   */
  static std::string GetPegoutFieldType() {
    return "ElementsPegout";  // NOLINT
  }
  /**
   * @brief Get json string of pegout field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetPegoutString(  // line separate
      const ElementsCreateRawPegoutRequest& obj) {  // NOLINT
    // Do not set to const, because substitution of member variables
    // may occur in pre / post processing inside Serialize
    return obj.pegout_.Serialize();
  }
  /**
   * @brief Set json object to pegout field.
   * @param[in,out] obj     class object
   * @param[in] json_value  JSON object
   */
  static void SetPegoutString(  // line separate
      ElementsCreateRawPegoutRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.pegout_.DeserializeUniValue(json_value);
  }

  /**
   * @brief Get of fee.
   * @return fee
   */
  ElementsPegoutTxOutFee& GetFee() {  // NOLINT
    return fee_;
  }
  /**
   * @brief Set to fee.
   * @param[in] fee    setting value.
   */
  void SetFee(  // line separate
      const ElementsPegoutTxOutFee& fee) {  // NOLINT
    this->fee_ = fee;
  }
  /**
   * @brief Get data type of fee.
   * @return Data type of fee.
   */
  static std::string GetFeeFieldType() {
    return "ElementsPegoutTxOutFee";  // NOLINT
  }
  /**
   * @brief Get json string of fee field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetFeeString(  // line separate
      const ElementsCreateRawPegoutRequest& obj) {  // NOLINT
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
      ElementsCreateRawPegoutRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.fee_.DeserializeUniValue(json_value);
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
      const ElementsCreateRawPegoutRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsCreateRawPegoutRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsCreateRawPegoutRequestMapTable =
    cfd::core::JsonTableMap<ElementsCreateRawPegoutRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsCreateRawPegoutRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsCreateRawPegoutRequestMapTable json_mapper;
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
  JsonObjectVector<ElementsPegoutTxIn, ElementsPegoutTxInStruct> txins_;  // NOLINT
  /**
   * @brief JsonAPI(txouts) value
   */
  JsonObjectVector<ElementsPegoutTxOut, ElementsPegoutTxOutStruct> txouts_;  // NOLINT
  /**
   * @brief JsonAPI(pegout) value
   */
  ElementsPegout pegout_;  // NOLINT
  /**
   * @brief JsonAPI(fee) value
   */
  ElementsPegoutTxOutFee fee_;  // NOLINT
};

// ------------------------------------------------------------------------
// ElementsCreateRawPegoutResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsCreateRawPegoutResponse) class
 */
class ElementsCreateRawPegoutResponse
  : public cfd::core::JsonClassBase<ElementsCreateRawPegoutResponse> {
 public:
  ElementsCreateRawPegoutResponse() {
    CollectFieldName();
  }
  virtual ~ElementsCreateRawPegoutResponse() {
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
      const ElementsCreateRawPegoutResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.hex_);
  }
  /**
   * @brief Set json object to hex field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetHexString(  // line separate
      ElementsCreateRawPegoutResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief Get of btcAddress
   * @return btcAddress
   */
  std::string GetBtcAddress() const {
    return btc_address_;
  }
  /**
   * @brief Set to btcAddress
   * @param[in] btc_address    setting value.
   */
  void SetBtcAddress(  // line separate
    const std::string& btc_address) {  // NOLINT
    this->btc_address_ = btc_address;
  }
  /**
   * @brief Get data type of btcAddress
   * @return Data type of btcAddress
   */
  static std::string GetBtcAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of btcAddress field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBtcAddressString(  // line separate
      const ElementsCreateRawPegoutResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.btc_address_);
  }
  /**
   * @brief Set json object to btcAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBtcAddressString(  // line separate
      ElementsCreateRawPegoutResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.btc_address_, json_value);
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
      const ElementsCreateRawPegoutResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsCreateRawPegoutResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsCreateRawPegoutResponseMapTable =
    cfd::core::JsonTableMap<ElementsCreateRawPegoutResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsCreateRawPegoutResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsCreateRawPegoutResponseMapTable json_mapper;
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
   * @brief JsonAPI(btcAddress) value
   */
  std::string btc_address_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_CREATE_RAW_PEGOUT_JSON_H_
