const {SchnorrSign} = require('../cfdjs_raw_module');
const TestHelper = require('./TestHelper');

const testCase = [
  TestHelper.createBitcoinTestCase(
    'SchnorrSign hashed no nonce',
    SchnorrSign,
    [
      '{"message":"e48441762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"privkey": "688c77bc2d5aaff5491cf309d4753b732135470d05b7b2cd21add0744fe97bef","nonceOrAux":"02cce08e913f22a36c5648d6405a2c7c50106e7aa2f1649e381c7f09d16b80ab"}',
    ],
    '{"hex":"6470fd1303dda4fda717b9837153c24a6eab377183fc438f939e0ed2b620e9ee5077c4a8b8dca28963d772a94f5f0ddf598e1c47c137f91933274c7c3edadce8"}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrSign non hashed no nonce',
    SchnorrSign,
    [
      '{"message":"5214612220693526874","isHashed":false,"privkey": "688c77bc2d5aaff5491cf309d4753b732135470d05b7b2cd21add0744fe97bef","nonceOrAux":"02cce08e913f22a36c5648d6405a2c7c50106e7aa2f1649e381c7f09d16b80ab"}',
    ],
    '{"hex":"1a5e01b7a94dce17ea8cdaab2998fee753797c79a4537714b1ffd9b7cbc2b03f068add0979bfd93e9aea2ab3909fa54002fd74ed3941250d0152d302e4a584d7"}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrSign hashed with nonce',
    SchnorrSign,
    [
      '{"message":"e48441762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"privkey": "688c77bc2d5aaff5491cf309d4753b732135470d05b7b2cd21add0744fe97bef","isNonce":true,"nonceOrAux":"8c8ca771d3c25eb38de7401818eeda281ac5446f5c1396148f8d9d67592440fe"}',
    ],
    '{"hex":"5da618c1936ec728e5ccff29207f1680dcf4146370bdcfab0039951b91e3637a958e91d68537d1f6f19687cec1fd5db1d83da56ef3ade1f3c611babd7d08af42"}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrSign non hashed with nonce',
    SchnorrSign,
    [
      '{"message":"5214612220693526874","isHashed":false,"privkey": "688c77bc2d5aaff5491cf309d4753b732135470d05b7b2cd21add0744fe97bef","isNonce":true,"nonceOrAux":"8c8ca771d3c25eb38de7401818eeda281ac5446f5c1396148f8d9d67592440fe"}',
    ],
    '{"hex":"5da618c1936ec728e5ccff29207f1680dcf4146370bdcfab0039951b91e3637a79c44609c105d1bd218c3176ebec6b8fab9c3ec62fe252917db4e4162c396048"}',
  ),
];

const errorCase = [
  TestHelper.createBitcoinTestCase(
    'SchnorrSign bad privkey',
    SchnorrSign,
    [
      '{"message":"e48441762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"privkey": "68c77bc2d5aaff5491cf309d4753b732135470d05b7b2cd21add0744fe97bef","nonceOrAux":"02cce08e913f22a36c5648d6405a2c7c50106e7aa2f1649e381c7f09d16b80ab"}',
    ],
    '{"error":{"code":1,"type":"illegal_argument","message":"hex to byte convert error."}}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrSign bad message',
    SchnorrSign,
    [
      '{"message":"e4441762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"privkey": "688c77bc2d5aaff5491cf309d4753b732135470d05b7b2cd21add0744fe97bef","nonceOrAux":"02cce08e913f22a36c5648d6405a2c7c50106e7aa2f1649e381c7f09d16b80ab"}',
    ],
    '{"error":{"code":1,"type":"illegal_argument","message":"hex to byte convert error."}}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrSign bad nonce',
    SchnorrSign,
    [
      '{"message":"e48441762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"privkey": "688c77bc2d5aaff5491cf309d4753b732135470d05b7b2cd21add0744fe97bef","nonceOrAux":"0cce08e913f22a36c5648d6405a2c7c50106e7aa2f1649e381c7f09d16b80ab"}',
    ],
    '{"error":{"code":1,"type":"illegal_argument","message":"hex to byte convert error."}}',
  ),
];

TestHelper.doTest('SchnorrSign', testCase);
TestHelper.doTest('SchnorrSign', errorCase);
