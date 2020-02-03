export namespace Cfd {
    export interface MultisigSignData {
        hex: string;
        type: string;
        derEncode: boolean;
        sighashType: string;
        sighashAnyoneCanPay: boolean;
        relatedPubkey: string;
    }

    export interface AddMultisigSignTxInRequest {
        txid: string;
        vout: number;
        signParams: MultisigSignData[];
        redeemScript: string;
        witnessScript: string;
        hashType: string;
        clearStack: boolean;
    }

    export interface AddMultisigSignRequest {
        isElements: boolean;
        tx: string;
        txin: AddMultisigSignTxInRequest;
    }

    export interface AddMultisigSignResponse {
        hex: string;
    }

    export interface SignData {
        hex: string;
        type: string;
        derEncode: boolean;
        sighashType: string;
        sighashAnyoneCanPay: boolean;
    }

    export interface AddSignTxInRequest {
        txid: string;
        vout: number;
        isWitness: boolean;
        signParam: SignData[];
        clearStack: boolean;
    }

    export interface AddSignRequest {
        tx: string;
        isElements: boolean;
        txin: AddSignTxInRequest;
    }

    export interface AddSignResponse {
        hex: string;
    }

    export interface BlindTxInRequest {
        txid: string;
        vout: bigint;
        asset: string;
        blindFactor: string;
        assetBlindFactor: string;
        amount: bigint;
    }

    export interface BlindTxOutRequest {
        index: number;
        blindPubkey: string;
    }

    export interface BlindIssuanceRequest {
        txid: string;
        vout: bigint;
        assetBlindingKey: string;
        tokenBlindingKey: string;
    }

    export interface BlindRawTransactionRequest {
        tx: string;
        txins: BlindTxInRequest[];
        txouts: BlindTxOutRequest[];
        issuances: BlindIssuanceRequest[];
    }

    export interface BlindRawTransactionResponse {
        hex: string;
    }

    export interface PrivkeyData {
        privkey: string;
        wif: boolean;
        network: string;
        isCompressed: boolean;
    }

    export interface CalculateEcSignatureRequest {
        sighash: string;
        privkeyData: PrivkeyData;
        isGrindR: boolean;
    }

    export interface CalculateEcSignatureResponse {
        signature: string;
    }

    export interface ConvertEntropyToMnemonicRequest {
        entropy: string;
        language: string;
    }

    export interface ConvertEntropyToMnemonicResponse {
        mnemonic: string[];
    }

    export interface ConvertMnemonicToSeedRequest {
        mnemonic: string[];
        passphrase: string;
        strictCheck: boolean;
        language: string;
        useIdeographicSpace: boolean;
    }

    export interface ConvertMnemonicToSeedResponse {
        seed: string;
        entropy: string;
    }

    export interface CreateAddressKeyData {
        hex: string;
        type: string;
    }

    export interface CreateAddressRequest {
        isElements: boolean;
        keyData: CreateAddressKeyData;
        network: string;
        hashType: string;
    }

    export interface CreateAddressResponse {
        address: string;
        lockingScript: string;
        redeemScript: string;
    }

    export interface CreateExtkeyFromParentRequest {
        extkey: string;
        network: string;
        extkeyType: string;
        childNumber: bigint;
        hardened: boolean;
    }

    export interface CreateExtkeyFromParentResponse {
        extkey: string;
    }

    export interface CreateExtkeyFromParentPathRequest {
        extkey: string;
        network: string;
        extkeyType: string;
        childNumberArray: bigint[];
        path: string;
    }

    export interface CreateExtkeyFromParentPathResponse {
        extkey: string;
    }

    export interface CreateExtkeyFromSeedRequest {
        seed: string;
        network: string;
        extkeyType: string;
    }

    export interface CreateExtkeyFromSeedResponse {
        extkey: string;
    }

    export interface CreateExtPubkeyRequest {
        extkey: string;
        network: string;
    }

    export interface CreateExtPubkeyResponse {
        extkey: string;
    }

    export interface CreateKeyPairRequest {
        wif: boolean;
        network: string;
        isCompressed: boolean;
    }

    export interface CreateKeyPairResponse {
        privkey: string;
        pubkey: string;
    }

    export interface MultisigScriptSigData {
        hex: string;
        type: string;
        derEncode: boolean;
        sighashType: string;
        sighashAnyoneCanPay: boolean;
        relatedPubkey: string;
    }

    export interface CreateMultisigScriptSigRequest {
        signParams: MultisigScriptSigData[];
        redeemScript: string;
    }

    export interface CreateMultisigScriptSigResponse {
        hex: string;
    }

    export interface CreateScriptRequest {
        items: string[];
    }

    export interface CreateScriptResponse {
        hex: string;
    }

    export interface DecodeRawTransactionRequest {
        hex: string;
        network: string;
        iswitness: boolean;
    }

    export interface DecodeUnlockingScript {
        asm: string;
        hex: string;
    }

    export interface DecodeRawTransactionTxIn {
        coinbase: string;
        txid: string;
        vout: bigint;
        scriptSig: DecodeUnlockingScript;
        txinwitness: string[];
        sequence: bigint;
    }

    export interface DecodeLockingScript {
        asm: string;
        hex: string;
        reqSigs: bigint;
        type: string;
        addresses: string[];
    }

    export interface DecodeRawTransactionTxOut {
        value: number;
        n: bigint;
        scriptPubKey: DecodeLockingScript;
    }

    export interface DecodeRawTransactionResponse {
        txid: string;
        hash: string;
        version: number;
        size: bigint;
        vsize: bigint;
        weight: bigint;
        locktime: number;
        vin: DecodeRawTransactionTxIn[];
        vout: DecodeRawTransactionTxOut[];
    }

    export interface ElementsDestroyAmountTxIn {
        txid: string;
        vout: number;
        sequence: number;
    }

    export interface ElementsDestroyAmountTxOut {
        address: string;
        amount: bigint;
        asset: string;
        isRemoveNonce: boolean;
    }

    export interface ElementsDestroyAmount {
        amount: bigint;
        asset: string;
    }

    export interface ElementsDestroyAmountFee {
        amount: bigint;
        asset: string;
    }

    export interface ElementsCreateDestroyAmountRequest {
        version: number;
        locktime: number;
        txins: ElementsDestroyAmountTxIn[];
        txouts: ElementsDestroyAmountTxOut[];
        destroy: ElementsDestroyAmount;
        fee: ElementsDestroyAmountFee;
    }

    export function AddMultisigSign(jsonObject: AddMultisigSignRequest): AddMultisigSignResponse;

    export function AddSign(jsonObject: AddSignRequest): AddSignResponse;

    export function BlindRawTransaction(jsonObject: BlindRawTransactionRequest): BlindRawTransactionResponse;

    export function CalculateEcSignature(jsonObject: CalculateEcSignatureRequest): CalculateEcSignatureResponse;

    export function ConvertEntropyToMnemonic(jsonObject: ConvertEntropyToMnemonicRequest): ConvertEntropyToMnemonicResponse;

    export function ConvertMnemonicToSeed(jsonObject: ConvertMnemonicToSeedRequest): ConvertMnemonicToSeedResponse;

    export function CreateAddress(jsonObject: CreateAddressRequest): CreateAddressResponse;

    export function CreateExtkeyFromParent(jsonObject: CreateExtkeyFromParentRequest): CreateExtkeyFromParentResponse;

    export function CreateExtkeyFromParentPath(jsonObject: CreateExtkeyFromParentPathRequest): CreateExtkeyFromParentPathResponse;

    export function CreateExtkeyFromSeed(jsonObject: CreateExtkeyFromSeedRequest): CreateExtkeyFromSeedResponse;

    export function CreateExtPubkey(jsonObject: CreateExtPubkeyRequest): CreateExtPubkeyResponse;

    export function CreateKeyPair(jsonObject: CreateKeyPairRequest): CreateKeyPairResponse;

    export function CreateMultisigScriptSig(jsonObject: CreateMultisigScriptSigRequest): CreateMultisigScriptSigResponse;

    export function CreateScript(jsonObject: CreateScriptRequest): CreateScriptResponse;

    export function DecodeRawTransaction(jsonObject: DecodeRawTransactionRequest): DecodeRawTransactionResponse;

    export function ElementsCreateDestroyAmount(jsonObject: ElementsCreateDestroyAmountRequest): ElementsCreateDestroyAmountResponse;

    export function ElementsCreatePegInAddress(jsonObject: ElementsCreatePegInAddressRequest): ElementsCreatePegInAddressResponse;

    export function ElementsCreateRawPegin(jsonObject: ElementsCreateRawPeginRequest): ElementsCreateRawPeginResponse;

    export function ElementsCreateRawPegout(jsonObject: ElementsCreateRawPegoutRequest): ElementsCreateRawPegoutResponse;

    export function ElementsCreateRawTransaction(jsonObject: ElementsCreateRawTransactionRequest): ElementsCreateRawTransactionResponse;

    export function ElementsDecodeRawTransaction(jsonObject: ElementsDecodeRawTransactionRequest): ElementsDecodeRawTransactionResponse;

    export function GetConfidentialAddress(jsonObject: GetConfidentialAddressRequest): GetConfidentialAddressResponse;

    export function GetUnblindedAddress(jsonObject: GetUnblindedAddressRequest): GetUnblindedAddressResponse;

    export function SetRawIssueAsset(jsonObject: SetRawIssueAssetRequest): SetRawIssueAssetResponse;

    export function SetRawReissueAsset(jsonObject: SetRawReissueAssetRequest): SetRawReissueAssetResponse;

    export function UnblindRawTransaction(jsonObject: UnblindRawTransactionRequest): UnblindRawTransactionResponse;

    export function EncodeSignatureByDer(jsonObject: EncodeSignatureByDerRequest): EncodeSignatureByDerResponse;

    export function Error(): ErrorResponse;

    export function EstimateFee(jsonObject: EstimateFeeRequest): EstimateFeeResponse;

    export function FundRawTransaction(jsonObject: FundRawTransactionRequest): FundRawTransactionResponse;

    export function GetAddressesFromMultisig(jsonObject: GetAddressesFromMultisigRequest): GetAddressesFromMultisigResponse;

    export function GetAddressInfo(jsonObject: GetAddressInfoRequest): GetAddressInfoResponse;

    export function GetExtkeyInfo(jsonObject: GetExtkeyInfoRequest): GetExtkeyInfoResponse;

    export function GetIssuanceBlindingKey(jsonObject: GetIssuanceBlindingKeyRequest): GetIssuanceBlindingKeyResponse;

    export function GetMnemonicWordlist(jsonObject: GetMnemonicWordlistRequest): GetMnemonicWordlistResponse;

    export function GetPrivkeyFromExtkey(jsonObject: GetPrivkeyFromExtkeyRequest): GetPrivkeyFromExtkeyResponse;

    export function GetPubkeyFromExtkey(jsonObject: GetPubkeyFromExtkeyRequest): GetPubkeyFromExtkeyResponse;

    export function GetPubkeyFromPrivkey(jsonObject: GetPubkeyFromPrivkeyRequest): GetPubkeyFromPrivkeyResponse;

    export function GetWitnessStackNum(jsonObject: GetWitnessStackNumRequest): GetWitnessStackNumResponse;

    export function CreateMultisig(jsonObject: CreateMultisigRequest): CreateMultisigResponse;

    export function ParseDescriptor(jsonObject: ParseDescriptorRequest): ParseDescriptorResponse;

    export function ParseScript(jsonObject: ParseScriptRequest): ParseScriptResponse;

    export function SelectUtxos(jsonObject: SelectUtxosRequest): SelectUtxosResponse;

    export function CreateSignatureHash(jsonObject: CreateSignatureHashRequest): CreateSignatureHashResponse;

    export function CreateElementsSignatureHash(jsonObject: CreateElementsSignatureHashRequest): CreateElementsSignatureHashResponse;

    export function GetSupportedFunction(): GetSupportedFunctionResponse;

    export function CreateRawTransaction(jsonObject: CreateRawTransactionRequest): CreateRawTransactionResponse;

    export function UpdateWitnessStack(jsonObject: UpdateWitnessStackRequest): UpdateWitnessStackResponse;

    export function VerifySignature(jsonObject: VerifySignatureRequest): VerifySignatureResponse;
}