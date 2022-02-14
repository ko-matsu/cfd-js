// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_api_address.h
 *
 * @brief definition for address operation api.
 *
 * Provide json format API.
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_API_ADDRESS_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_API_ADDRESS_H_

#include <string>
#include <vector>

#include "cfd/cfdapi_address.h"
#include "cfdcore/cfdcore_address.h"
#include "cfdcore/cfdcore_key.h"
#include "cfdjs/cfdjs_api_common.h"
#include "cfdjs/cfdjs_struct.h"

/**
 * @brief cfdapi namespace
 */
namespace cfd {
namespace js {
namespace api {

using cfd::DescriptorKeyData;
using cfd::DescriptorScriptData;
using cfd::core::AddressType;
using cfd::core::NetType;

/**
 * @brief address api class.
 */
class CFD_JS_API_EXPORT AddressStructApi {
 public:
  /**
   * @brief Create an address.
   * @param[in] request     request parameter.
   * @return response.
   */
  static CreateAddressResponseStruct CreateAddress(
      const CreateAddressRequestStruct& request);

  /**
   * @brief Create multisig.
   * @param[in] request     request parameter.
   * @return response.
   */
  static CreateMultisigResponseStruct CreateMultisig(
      const CreateMultisigRequestStruct& request);

  /**
   * @brief Get addresses from multisig.
   * @param[in] request     request parameter.
   * @return response.
   */
  static GetAddressesFromMultisigResponseStruct GetAddressesFromMultisig(
      const GetAddressesFromMultisigRequestStruct& request);

  /**
   * @brief Get address information.
   * @param[in] request     request parameter.
   * @return response.
   */
  static GetAddressInfoResponseStruct GetAddressInfo(
      const GetAddressInfoRequestStruct& request);

  /**
   * @brief Parse the output descriptor.
   * @param[in] request     request parameter.
   * @return response.
   */
  static ParseDescriptorResponseStruct ParseDescriptor(
      const ParseDescriptorRequestStruct& request);

  /**
   * @brief Create the output descriptor.
   * @param[in] request     request parameter.
   * @return response.
   */
  static OutputDescriptorResponseStruct CreateDescriptor(
      const CreateDescriptorRequestStruct& request);

  /**
   * @brief Append the output descriptor checksum.
   * @param[in] request     request parameter.
   * @return response.
   */
  static OutputDescriptorResponseStruct AppendDescriptorChecksum(
      const AppendDescriptorChecksumRequestStruct& request);

  /**
   * @brief Get tapscript tree information by control block.
   * @param[in] request     tapscript data
   * @return tapscript information
   */
  static TapScriptInfoStruct GetTapScriptTreeInfo(
      const GetTapScriptTreeInfoRequestStruct& request);

  /**
   * @brief Get tapscript tree information by control block.
   * @param[in] request     tapscript data
   * @return tapscript information
   */
  static TapScriptInfoStruct GetTapScriptTreeInfoByControlBlock(
      const TapScriptInfoByControlRequestStruct& request);

  /**
   * @brief Get tapscript tree information by string.
   * @param[in] request     tapscript data
   * @return tapscript information
   */
  static TapScriptInfoStruct GetTapScriptTreeFromString(
      const TapScriptFromStringRequestStruct& request);

  /**
   * @brief Get a tapbranch information by string.
   * @param[in] request     tapbranch data
   * @return tapbranch information
   */
  static TapBranchInfoStruct GetTapBranchInfo(
      const GetTapBranchInfoRequestStruct& request);

  /**
   * @brief Analyze a tapscript tree information by string.
   * @param[in] request     tapscript data
   * @return tapscript information
   */
  static AnalyzeTapScriptTreeInfoStruct AnalyzeTapScriptTree(
      const AnalyzeTapScriptTreeRequestStruct& request);

  /**
   * @brief Convert to NetType enum.
   * @param[in] network_type    network type.
   * @return network type enum.
   * @throw CfdException set to invalid string.
   */
  static cfd::core::NetType ConvertNetType(const std::string& network_type);

  /**
   * @brief Convert to NetType string.
   * @param[in] network_type    network type.
   * @return network type string.
   * @throw CfdException    out of range value.
   */
  static std::string ConvertNetTypeString(cfd::core::NetType network_type);

 private:
  AddressStructApi();
};

}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_API_ADDRESS_H_
