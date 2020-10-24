const TestHelper = require('./JsonTestHelper');

const hasExecTest = (testName) => {
  switch (testName) {
  case 'Privkey.AddTweak':
  case 'Privkey.MulTweak':
  case 'Privkey.Negate':
    return false;
  default:
    return true;
  }
};

const createTestFunc = (helper) => {
  return async (cfd, testName, req, isError) => {
    let resp;
    switch (testName) {
    case 'Privkey.GenerateKeyPair':
      resp = cfd.CreateKeyPair(req);
      resp = await helper.getResponse(resp);
      resp = {...req, ...resp};
      break;
    case 'Privkey.FromHex':
      resp = cfd.GetPrivkeyWif(req);
      resp = await helper.getResponse(resp);
      resp = {...req, ...resp};
      break;
    case 'Privkey.FromWif':
      resp = cfd.GetPrivkeyFromWif(req);
      resp = await helper.getResponse(resp);
      resp = {...req, ...resp};
      break;
    case 'Privkey.GetPubkey':
      resp = cfd.GetPubkeyFromPrivkey(req);
      resp = await helper.getResponse(resp);
      resp = {...req, ...resp};
      break;
    case 'Privkey.AddTweak':
      // fixme
      break;
    case 'Privkey.MulTweak':
      // fixme
      break;
    case 'Privkey.Negate':
      // fixme
      break;
    case 'Privkey.CalculateEcSignature':
      resp = cfd.CalculateEcSignature(req);
      resp = await helper.getResponse(resp);
      resp = {...req, ...resp};
      break;
    default:
      throw new Error('unknown name: ' + testName);
    }
    return resp;
  };
};

const createCheckFunc = (helper) => {
  return (resp, exp, errorData) => {
    if (errorData) {
      const errMsg = TestHelper.getErrorMessage(errorData);
      expect(errMsg).toEqual(resp);
      return;
    }
    if (exp.wif) expect(resp.wif).toEqual(exp.wif);
    if (exp.hex) expect(resp.hex).toEqual(exp.hex);
    if (exp.network) expect(resp.network).toEqual(exp.network);
    if (exp.isCompressed) expect(resp.isCompressed).toEqual(exp.isCompressed);
    if (exp.signature) expect(resp.signature).toEqual(exp.signature);
  };
};

TestHelper.doTest('Privkey', 'key_test', createTestFunc, createCheckFunc, hasExecTest);
