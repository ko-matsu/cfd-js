// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_api_hdwallet.h
 *
 * @brief cfd-apiで利用するHDWallet APIのクラス定義
 *
 * 構造体形式のAPIを提供する.
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_API_HDWALLET_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_API_HDWALLET_H_

#include <string>
#include <vector>

#include "cfd/cfdapi_hdwallet.h"
#include "cfdjs/cfdjs_api_common.h"
#include "cfdjs/cfdjs_struct.h"

/**
 * @brief cfdapi namespace
 */
namespace cfd {
namespace js {
namespace api {

using cfd::api::ExtKeyType;

/**
 * @brief HDWallet api class.
 */
class CFD_JS_API_EXPORT HDWalletStructApi {
 public:
  /**
   * @brief Get the mnemonic wordlist.
   * @param[in] request     request parameter.
   * @return response
   */
  static GetMnemonicWordlistResponseStruct GetMnemonicWordlist(
      const GetMnemonicWordlistRequestStruct& request);

  /**
   * @brief Convert the mnemonic to HDWallet seed.
   * @param[in] request     request parameter.
   * @return response
   */
  static ConvertMnemonicToSeedResponseStruct ConvertMnemonicToSeed(
      const ConvertMnemonicToSeedRequestStruct& request);

  /**
   * @brief Convert the entropy to mnemonic.
   * @param[in] request     request parameter.
   * @return response
   */
  static ConvertEntropyToMnemonicResponseStruct ConvertEntropyToMnemonic(
      const ConvertEntropyToMnemonicRequestStruct& request);

  /**
   * @brief Convert the seed to extkey.
   * @param[in] request     request parameter.
   * @return response
   */
  static CreateExtkeyResponseStruct CreateExtkeyFromSeed(
      const CreateExtkeyFromSeedRequestStruct& request);

  /**
   * @brief Convert the extkey from parent key information.
   * @param[in] request     request parameter.
   * @return response
   */
  static CreateExtkeyResponseStruct CreateExtkeyFromParent(
      const CreateExtkeyFromParentRequestStruct& request);

  /**
   * @brief Convert the extkey from parent path.
   * @param[in] request     request parameter.
   * @return response
   */
  static CreateExtkeyResponseStruct CreateExtkeyFromParentPath(
      const CreateExtkeyFromParentPathRequestStruct& request);

  /**
   * @brief Convert the extkey from parent key.
   * @param[in] request     request parameter.
   * @return response
   */
  static CreateExtkeyResponseStruct CreateExtkeyFromParentKey(
      const CreateExtkeyFromParentKeyRequestStruct& request);

  /**
   * @brief Create the extkey.
   * @param[in] request     request parameter.
   * @return response
   */
  static CreateExtkeyResponseStruct CreateExtkey(
      const CreateExtkeyRequestStruct& request);

  /**
   * @brief Create the extend pubkey.
   * @param[in] request     request parameter.
   * @return response
   */
  static CreateExtkeyResponseStruct CreateExtPubkey(
      const CreateExtPubkeyRequestStruct& request);

  /**
   * @brief Get the extend key information.
   * @param[in] request     request parameter.
   * @return response
   */
  static GetExtkeyInfoResponseStruct GetExtkeyInfo(
      const GetExtkeyInfoRequestStruct& request);

  /**
   * @brief Get the privkey from extkey.
   * @param[in] request     request parameter.
   * @return response
   */
  static GetPrivkeyFromExtkeyResponseStruct GetPrivkeyFromExtkey(
      const GetPrivkeyFromExtkeyRequestStruct& request);

  /**
   * @brief Get the pubkey from extkey.
   * @param[in] request     request parameter.
   * @return response
   */
  static PubkeyDataStruct GetPubkeyFromExtkey(
      const GetPubkeyFromExtkeyRequestStruct& request);

  /**
   * @brief Convert to ExtKeyType.
   * @param[in] key_type    extkey type string
   * @return ExtKeyType
   */
  static ExtKeyType ConvertExtKeyType(const std::string& key_type);

 private:
  HDWalletStructApi();
};

}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_API_HDWALLET_H_
