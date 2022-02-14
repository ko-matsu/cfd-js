// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_api_script.h
 *
 * @brief definition for script operation api.
 *
 * Provide struct format API.
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_API_SCRIPT_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_API_SCRIPT_H_

#include "cfdjs/cfdjs_api_common.h"
#include "cfdjs/cfdjs_struct.h"

/**
 * @brief cfdapi namespace
 */
namespace cfd {
namespace js {
namespace api {

/**
 * @brief Script api class.
 */
class CFD_JS_API_EXPORT ScriptStructApi {
 public:
  /**
   * @brief Parse the script.
   * @param[in] request     request parameter.
   * @return response.
   */
  static ParseScriptResponseStruct ParseScript(
      const ParseScriptRequestStruct& request);

  /**
   * @brief Create the script.
   * @param[in] request     request parameter.
   * @return response.
   */
  static ScriptDataResponseStruct CreateScript(
      const CreateScriptRequestStruct& request);

  /**
   * @brief Create multisig's scriptSig.
   * @param[in] request     request parameter.
   * @return response.
   */
  static ScriptDataResponseStruct CreateMultisigScriptSig(
      const CreateMultisigScriptSigRequestStruct& request);

 private:
  ScriptStructApi();
};

}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_API_SCRIPT_H_
