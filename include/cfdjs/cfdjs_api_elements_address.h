// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_api_elements_address.h
 *
 * @brief definition for elements address operation api.
 *
 * Provide json format API.
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_API_ELEMENTS_ADDRESS_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_API_ELEMENTS_ADDRESS_H_
#ifndef CFD_DISABLE_ELEMENTS

#include <string>
#include <vector>

#include "cfd/cfdapi_address.h"
#include "cfdcore/cfdcore_elements_address.h"
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

/**
 * @brief elements address api class.
 */
class CFD_JS_API_EXPORT ElementsAddressStructApi {
 public:
  /**
   * @brief Create an elements address.
   * @param[in] request     request parameter.
   * @return response.
   */
  static CreateAddressResponseStruct CreateAddress(
      const CreateAddressRequestStruct& request);

  /**
   * @brief Create multisig.
   * @param[in] request     request parameter
   * @return response.
   */
  static CreateMultisigResponseStruct CreateMultisig(
      const CreateMultisigRequestStruct& request);

  /**
   * @brief Get addresses from multisig.
   * @param[in] request     request parameter
   * @return response.
   */
  static GetAddressesFromMultisigResponseStruct GetAddressesFromMultisig(
      const GetAddressesFromMultisigRequestStruct& request);

  /**
   * @brief Get the address information.
   * @param[in] request     request parameter
   * @return response.
   */
  static GetAddressInfoResponseStruct GetAddressInfo(
      const GetAddressInfoRequestStruct& request);

  /**
   * @brief Get the blinded address.
   * @param[in] request     request parameter
   * @return response.
   */
  static GetConfidentialAddressResponseStruct GetConfidentialAddress(
      const GetConfidentialAddressRequestStruct& request);

  /**
   * @brief Get the unblinded address.
   * @param[in] request     request parameter
   * @return response.
   */
  static GetUnblindedAddressResponseStruct GetUnblindedAddress(
      const GetUnblindedAddressRequestStruct& request);

  /**
   * @brief Create bitcoin's peg-in address.
   * @param[in] request     request parameter
   * @return response.
   */
  static CreatePegInAddressResponseStruct CreatePegInAddress(
      const CreatePegInAddressRequestStruct& request);

  /**
   * @brief Create pegout address.
   * @param[in] request     request data
   * @return pegout address data.
   */
  static CreatePegoutAddressResponseStruct CreatePegoutAddress(
      const CreatePegoutAddressRequestStruct& request);

  /**
   * @brief Parse the output descriptor.
   * @param[in] request     request parameter
   * @return response.
   */
  static ParseDescriptorResponseStruct ParseDescriptor(
      const ParseDescriptorRequestStruct& request);

  /**
   * @brief Append the output descriptor checksum.
   * @param[in] request     request parameter
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
   * @brief Convert to Elements NetType enum.
   * @param[in] elements_net_type   network type.
   * @return network type enum.
   * @throw CfdException set to invalid string.
   */
  static cfd::core::ElementsNetType ConvertElementsNetType(
      const std::string& elements_net_type);

 private:
  ElementsAddressStructApi();
};

}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_DISABLE_ELEMENTS
#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_API_ELEMENTS_ADDRESS_H_
