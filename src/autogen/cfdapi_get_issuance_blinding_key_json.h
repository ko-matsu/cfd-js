// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_get_issuance_blinding_key_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_GET_ISSUANCE_BLINDING_KEY_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_GET_ISSUANCE_BLINDING_KEY_JSON_H_

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
// GetIssuanceBlindingKeyRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetIssuanceBlindingKeyRequest) class
 */
class GetIssuanceBlindingKeyRequest
  : public cfd::core::JsonClassBase<GetIssuanceBlindingKeyRequest> {
 public:
  GetIssuanceBlindingKeyRequest() {
    CollectFieldName();
  }
  virtual ~GetIssuanceBlindingKeyRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of masterBlindingKey
   * @return masterBlindingKey
   */
  std::string GetMasterBlindingKey() const {
    return master_blinding_key_;
  }
  /**
   * @brief Set to masterBlindingKey
   * @param[in] master_blinding_key    setting value.
   */
  void SetMasterBlindingKey(  // line separate
    const std::string& master_blinding_key) {  // NOLINT
    this->master_blinding_key_ = master_blinding_key;
  }
  /**
   * @brief Get data type of masterBlindingKey
   * @return Data type of masterBlindingKey
   */
  static std::string GetMasterBlindingKeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of masterBlindingKey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetMasterBlindingKeyString(  // line separate
      const GetIssuanceBlindingKeyRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.master_blinding_key_);
  }
  /**
   * @brief Set json object to masterBlindingKey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetMasterBlindingKeyString(  // line separate
      GetIssuanceBlindingKeyRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.master_blinding_key_, json_value);
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
      const GetIssuanceBlindingKeyRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      GetIssuanceBlindingKeyRequest& obj,  // NOLINT
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
      const GetIssuanceBlindingKeyRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      GetIssuanceBlindingKeyRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
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
      const GetIssuanceBlindingKeyRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetIssuanceBlindingKeyRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetIssuanceBlindingKeyRequestMapTable =
    cfd::core::JsonTableMap<GetIssuanceBlindingKeyRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetIssuanceBlindingKeyRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetIssuanceBlindingKeyRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(masterBlindingKey) value
   */
  std::string master_blinding_key_ = "";
  /**
   * @brief JsonAPI(txid) value
   */
  std::string txid_ = "";
  /**
   * @brief JsonAPI(vout) value
   */
  uint32_t vout_ = 0;
};

// ------------------------------------------------------------------------
// GetIssuanceBlindingKeyResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetIssuanceBlindingKeyResponse) class
 */
class GetIssuanceBlindingKeyResponse
  : public cfd::core::JsonClassBase<GetIssuanceBlindingKeyResponse> {
 public:
  GetIssuanceBlindingKeyResponse() {
    CollectFieldName();
  }
  virtual ~GetIssuanceBlindingKeyResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of blindingKey
   * @return blindingKey
   */
  std::string GetBlindingKey() const {
    return blinding_key_;
  }
  /**
   * @brief Set to blindingKey
   * @param[in] blinding_key    setting value.
   */
  void SetBlindingKey(  // line separate
    const std::string& blinding_key) {  // NOLINT
    this->blinding_key_ = blinding_key;
  }
  /**
   * @brief Get data type of blindingKey
   * @return Data type of blindingKey
   */
  static std::string GetBlindingKeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of blindingKey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetBlindingKeyString(  // line separate
      const GetIssuanceBlindingKeyResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.blinding_key_);
  }
  /**
   * @brief Set json object to blindingKey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetBlindingKeyString(  // line separate
      GetIssuanceBlindingKeyResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.blinding_key_, json_value);
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
      const GetIssuanceBlindingKeyResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetIssuanceBlindingKeyResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetIssuanceBlindingKeyResponseMapTable =
    cfd::core::JsonTableMap<GetIssuanceBlindingKeyResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetIssuanceBlindingKeyResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetIssuanceBlindingKeyResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(blindingKey) value
   */
  std::string blinding_key_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_GET_ISSUANCE_BLINDING_KEY_JSON_H_
