// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_get_witness_num_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_GET_WITNESS_NUM_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_GET_WITNESS_NUM_JSON_H_

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
// GetWitnessStackNumTxInRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetWitnessStackNumTxInRequest) class
 */
class GetWitnessStackNumTxInRequest
  : public cfd::core::JsonClassBase<GetWitnessStackNumTxInRequest> {
 public:
  GetWitnessStackNumTxInRequest() {
    CollectFieldName();
  }
  virtual ~GetWitnessStackNumTxInRequest() {
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
      const GetWitnessStackNumTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.txid_);
  }
  /**
   * @brief Set json object to txid field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxidString(  // line separate
      GetWitnessStackNumTxInRequest& obj,  // NOLINT
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
      const GetWitnessStackNumTxInRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.vout_);
  }
  /**
   * @brief Set json object to vout field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetVoutString(  // line separate
      GetWitnessStackNumTxInRequest& obj,  // NOLINT
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
      const GetWitnessStackNumTxInRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetWitnessStackNumTxInRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetWitnessStackNumTxInRequestMapTable =
    cfd::core::JsonTableMap<GetWitnessStackNumTxInRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetWitnessStackNumTxInRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetWitnessStackNumTxInRequestMapTable json_mapper;
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
};

// ------------------------------------------------------------------------
// GetWitnessStackNumRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetWitnessStackNumRequest) class
 */
class GetWitnessStackNumRequest
  : public cfd::core::JsonClassBase<GetWitnessStackNumRequest> {
 public:
  GetWitnessStackNumRequest() {
    CollectFieldName();
  }
  virtual ~GetWitnessStackNumRequest() {
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
      const GetWitnessStackNumRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tx_);
  }
  /**
   * @brief Set json object to tx field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTxString(  // line separate
      GetWitnessStackNumRequest& obj,  // NOLINT
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
      const GetWitnessStackNumRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief Set json object to isElements field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetIsElementsString(  // line separate
      GetWitnessStackNumRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
  }

  /**
   * @brief Get of txin.
   * @return txin
   */
  GetWitnessStackNumTxInRequest& GetTxin() {  // NOLINT
    return txin_;
  }
  /**
   * @brief Set to txin.
   * @param[in] txin    setting value.
   */
  void SetTxin(  // line separate
      const GetWitnessStackNumTxInRequest& txin) {  // NOLINT
    this->txin_ = txin;
  }
  /**
   * @brief Get data type of txin.
   * @return Data type of txin.
   */
  static std::string GetTxinFieldType() {
    return "GetWitnessStackNumTxInRequest";  // NOLINT
  }
  /**
   * @brief Get json string of txin field.
   * @param[in,out] obj     class object
   * @return JSON string.
   */
  static std::string GetTxinString(  // line separate
      const GetWitnessStackNumRequest& obj) {  // NOLINT
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
      GetWitnessStackNumRequest& obj,  // NOLINT
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
      const GetWitnessStackNumRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetWitnessStackNumRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetWitnessStackNumRequestMapTable =
    cfd::core::JsonTableMap<GetWitnessStackNumRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetWitnessStackNumRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetWitnessStackNumRequestMapTable json_mapper;
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
  GetWitnessStackNumTxInRequest txin_;  // NOLINT
};

// ------------------------------------------------------------------------
// GetWitnessStackNumResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (GetWitnessStackNumResponse) class
 */
class GetWitnessStackNumResponse
  : public cfd::core::JsonClassBase<GetWitnessStackNumResponse> {
 public:
  GetWitnessStackNumResponse() {
    CollectFieldName();
  }
  virtual ~GetWitnessStackNumResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of count
   * @return count
   */
  int64_t GetCount() const {
    return count_;
  }
  /**
   * @brief Set to count
   * @param[in] count    setting value.
   */
  void SetCount(  // line separate
    const int64_t& count) {  // NOLINT
    this->count_ = count;
  }
  /**
   * @brief Get data type of count
   * @return Data type of count
   */
  static std::string GetCountFieldType() {
    return "int64_t";
  }
  /**
   * @brief Get json string of count field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetCountString(  // line separate
      const GetWitnessStackNumResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.count_);
  }
  /**
   * @brief Set json object to count field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetCountString(  // line separate
      GetWitnessStackNumResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.count_, json_value);
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
      const GetWitnessStackNumResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  GetWitnessStackNumResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using GetWitnessStackNumResponseMapTable =
    cfd::core::JsonTableMap<GetWitnessStackNumResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const GetWitnessStackNumResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static GetWitnessStackNumResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(count) value
   */
  int64_t count_ = 0;
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_GET_WITNESS_NUM_JSON_H_
