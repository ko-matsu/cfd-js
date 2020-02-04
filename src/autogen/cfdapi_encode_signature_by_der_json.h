// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_encode_signature_by_der_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ENCODE_SIGNATURE_BY_DER_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ENCODE_SIGNATURE_BY_DER_JSON_H_

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
// EncodeSignatureByDerRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (EncodeSignatureByDerRequest) class
 */
class EncodeSignatureByDerRequest
  : public cfd::core::JsonClassBase<EncodeSignatureByDerRequest> {
 public:
  EncodeSignatureByDerRequest() {
    CollectFieldName();
  }
  virtual ~EncodeSignatureByDerRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of signature
   * @return signature
   */
  std::string GetSignature() const {
    return signature_;
  }
  /**
   * @brief Set to signature
   * @param[in] signature    setting value.
   */
  void SetSignature(  // line separate
    const std::string& signature) {  // NOLINT
    this->signature_ = signature;
  }
  /**
   * @brief Get data type of signature
   * @return Data type of signature
   */
  static std::string GetSignatureFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of signature field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSignatureString(  // line separate
      const EncodeSignatureByDerRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.signature_);
  }
  /**
   * @brief Set json object to signature field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSignatureString(  // line separate
      EncodeSignatureByDerRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.signature_, json_value);
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
      const EncodeSignatureByDerRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sighash_type_);
  }
  /**
   * @brief Set json object to sighashType field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSighashTypeString(  // line separate
      EncodeSignatureByDerRequest& obj,  // NOLINT
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
      const EncodeSignatureByDerRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.sighash_anyone_can_pay_);
  }
  /**
   * @brief Set json object to sighashAnyoneCanPay field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSighashAnyoneCanPayString(  // line separate
      EncodeSignatureByDerRequest& obj,  // NOLINT
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
      const EncodeSignatureByDerRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  EncodeSignatureByDerRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using EncodeSignatureByDerRequestMapTable =
    cfd::core::JsonTableMap<EncodeSignatureByDerRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const EncodeSignatureByDerRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static EncodeSignatureByDerRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(signature) value
   */
  std::string signature_ = "";
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
// EncodeSignatureByDerResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (EncodeSignatureByDerResponse) class
 */
class EncodeSignatureByDerResponse
  : public cfd::core::JsonClassBase<EncodeSignatureByDerResponse> {
 public:
  EncodeSignatureByDerResponse() {
    CollectFieldName();
  }
  virtual ~EncodeSignatureByDerResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of signature
   * @return signature
   */
  std::string GetSignature() const {
    return signature_;
  }
  /**
   * @brief Set to signature
   * @param[in] signature    setting value.
   */
  void SetSignature(  // line separate
    const std::string& signature) {  // NOLINT
    this->signature_ = signature;
  }
  /**
   * @brief Get data type of signature
   * @return Data type of signature
   */
  static std::string GetSignatureFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of signature field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetSignatureString(  // line separate
      const EncodeSignatureByDerResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.signature_);
  }
  /**
   * @brief Set json object to signature field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetSignatureString(  // line separate
      EncodeSignatureByDerResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.signature_, json_value);
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
      const EncodeSignatureByDerResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  EncodeSignatureByDerResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using EncodeSignatureByDerResponseMapTable =
    cfd::core::JsonTableMap<EncodeSignatureByDerResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const EncodeSignatureByDerResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static EncodeSignatureByDerResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(signature) value
   */
  std::string signature_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ENCODE_SIGNATURE_BY_DER_JSON_H_
