// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_create_pegin_address_json.h
 *
 * @brief JSON mapping file. (auto generate)
 */
#ifndef CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_CREATE_PEGIN_ADDRESS_JSON_H_
#define CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_CREATE_PEGIN_ADDRESS_JSON_H_

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
// ElementsCreatePegInAddressRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsCreatePegInAddressRequest) class
 */
class ElementsCreatePegInAddressRequest
  : public cfd::core::JsonClassBase<ElementsCreatePegInAddressRequest> {
 public:
  ElementsCreatePegInAddressRequest() {
    CollectFieldName();
  }
  virtual ~ElementsCreatePegInAddressRequest() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of fedpegscript
   * @return fedpegscript
   */
  std::string GetFedpegscript() const {
    return fedpegscript_;
  }
  /**
   * @brief Set to fedpegscript
   * @param[in] fedpegscript    setting value.
   */
  void SetFedpegscript(  // line separate
    const std::string& fedpegscript) {  // NOLINT
    this->fedpegscript_ = fedpegscript;
  }
  /**
   * @brief Get data type of fedpegscript
   * @return Data type of fedpegscript
   */
  static std::string GetFedpegscriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of fedpegscript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetFedpegscriptString(  // line separate
      const ElementsCreatePegInAddressRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.fedpegscript_);
  }
  /**
   * @brief Set json object to fedpegscript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetFedpegscriptString(  // line separate
      ElementsCreatePegInAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.fedpegscript_, json_value);
  }

  /**
   * @brief Get of pubkey
   * @return pubkey
   */
  std::string GetPubkey() const {
    return pubkey_;
  }
  /**
   * @brief Set to pubkey
   * @param[in] pubkey    setting value.
   */
  void SetPubkey(  // line separate
    const std::string& pubkey) {  // NOLINT
    this->pubkey_ = pubkey;
  }
  /**
   * @brief Get data type of pubkey
   * @return Data type of pubkey
   */
  static std::string GetPubkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of pubkey field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetPubkeyString(  // line separate
      const ElementsCreatePegInAddressRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.pubkey_);
  }
  /**
   * @brief Set json object to pubkey field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetPubkeyString(  // line separate
      ElementsCreatePegInAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.pubkey_, json_value);
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
      const ElementsCreatePegInAddressRequest& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.network_);
  }
  /**
   * @brief Set json object to network field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetNetworkString(  // line separate
      ElementsCreatePegInAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
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
      const ElementsCreatePegInAddressRequestStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsCreatePegInAddressRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsCreatePegInAddressRequestMapTable =
    cfd::core::JsonTableMap<ElementsCreatePegInAddressRequest>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsCreatePegInAddressRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsCreatePegInAddressRequestMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(fedpegscript) value
   */
  std::string fedpegscript_ = "";
  /**
   * @brief JsonAPI(pubkey) value
   */
  std::string pubkey_ = "";
  /**
   * @brief JsonAPI(network) value
   */
  std::string network_ = "mainnet";
};

// ------------------------------------------------------------------------
// ElementsCreatePegInAddressResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API (ElementsCreatePegInAddressResponse) class
 */
class ElementsCreatePegInAddressResponse
  : public cfd::core::JsonClassBase<ElementsCreatePegInAddressResponse> {
 public:
  ElementsCreatePegInAddressResponse() {
    CollectFieldName();
  }
  virtual ~ElementsCreatePegInAddressResponse() {
    // do nothing
  }
  /**
   * @brief collect field name.
   */
  static void CollectFieldName();

  /**
   * @brief Get of mainchainAddress
   * @return mainchainAddress
   */
  std::string GetMainchainAddress() const {
    return mainchain_address_;
  }
  /**
   * @brief Set to mainchainAddress
   * @param[in] mainchain_address    setting value.
   */
  void SetMainchainAddress(  // line separate
    const std::string& mainchain_address) {  // NOLINT
    this->mainchain_address_ = mainchain_address;
  }
  /**
   * @brief Get data type of mainchainAddress
   * @return Data type of mainchainAddress
   */
  static std::string GetMainchainAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of mainchainAddress field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetMainchainAddressString(  // line separate
      const ElementsCreatePegInAddressResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.mainchain_address_);
  }
  /**
   * @brief Set json object to mainchainAddress field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetMainchainAddressString(  // line separate
      ElementsCreatePegInAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.mainchain_address_, json_value);
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
      const ElementsCreatePegInAddressResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.claim_script_);
  }
  /**
   * @brief Set json object to claimScript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetClaimScriptString(  // line separate
      ElementsCreatePegInAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.claim_script_, json_value);
  }

  /**
   * @brief Get of tweakFedpegscript
   * @return tweakFedpegscript
   */
  std::string GetTweakFedpegscript() const {
    return tweak_fedpegscript_;
  }
  /**
   * @brief Set to tweakFedpegscript
   * @param[in] tweak_fedpegscript    setting value.
   */
  void SetTweakFedpegscript(  // line separate
    const std::string& tweak_fedpegscript) {  // NOLINT
    this->tweak_fedpegscript_ = tweak_fedpegscript;
  }
  /**
   * @brief Get data type of tweakFedpegscript
   * @return Data type of tweakFedpegscript
   */
  static std::string GetTweakFedpegscriptFieldType() {
    return "std::string";
  }
  /**
   * @brief Get json string of tweakFedpegscript field.
   * @param[in,out] obj     class object.
   * @return JSON string
   */
  static std::string GetTweakFedpegscriptString(  // line separate
      const ElementsCreatePegInAddressResponse& obj) {  // NOLINT
    return cfd::core::ConvertToString(obj.tweak_fedpegscript_);
  }
  /**
   * @brief Set json object to tweakFedpegscript field.
   * @param[in,out] obj     class object.
   * @param[in] json_value  JSON object.
   */
  static void SetTweakFedpegscriptString(  // line separate
      ElementsCreatePegInAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfd::core::ConvertFromUniValue(  // line separate
      obj.tweak_fedpegscript_, json_value);
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
      const ElementsCreatePegInAddressResponseStruct& data);

  /**
   * @brief Convert class to struct.
   * @return  struct data.
   */
  ElementsCreatePegInAddressResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief definition type of Map table.
   */
  using ElementsCreatePegInAddressResponseMapTable =
    cfd::core::JsonTableMap<ElementsCreatePegInAddressResponse>;

  /**
   * @brief Get JSON mapping object.
   * @return JSON mapping object.
   * @see cfd::core::JsonClassBase::GetJsonMapper()
   */
  virtual const ElementsCreatePegInAddressResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static ElementsCreatePegInAddressResponseMapTable json_mapper;
  /**
   * @brief field name list.
   */
  static std::vector<std::string> item_list;
  /**
   * @brief ignore item list.
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(mainchainAddress) value
   */
  std::string mainchain_address_ = "";
  /**
   * @brief JsonAPI(claimScript) value
   */
  std::string claim_script_ = "";
  /**
   * @brief JsonAPI(tweakFedpegscript) value
   */
  std::string tweak_fedpegscript_ = "";
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_AUTOGEN_CFDAPI_ELEMENTS_CREATE_PEGIN_ADDRESS_JSON_H_
