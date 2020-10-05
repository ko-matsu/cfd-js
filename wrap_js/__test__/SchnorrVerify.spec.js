const {SchnorrVerify} = require('../cfdjs_raw_module');
const TestHelper = require('./TestHelper');

const testCase = [
  TestHelper.createBitcoinTestCase(
    'SchnorrVerify hashed valid signature',
    SchnorrVerify,
    [
      '{"message":"e48441762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"signature":"6470fd1303dda4fda717b9837153c24a6eab377183fc438f939e0ed2b620e9ee5077c4a8b8dca28963d772a94f5f0ddf598e1c47c137f91933274c7c3edadce8","pubkey": "b33cc9edc096d0a83416964bd3c6247b8fecd256e4efa7870d2c854bdeb33390"}',
    ],
    '{"valid":true}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrSign non hashed valid signature',
    SchnorrVerify,
    [
      '{"message":"5214612220693526874","isHashed":false,"signature":"1a5e01b7a94dce17ea8cdaab2998fee753797c79a4537714b1ffd9b7cbc2b03f068add0979bfd93e9aea2ab3909fa54002fd74ed3941250d0152d302e4a584d7","pubkey": "b33cc9edc096d0a83416964bd3c6247b8fecd256e4efa7870d2c854bdeb33390"}',
    ],
    '{"valid":true}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrVerify hashed invalid signature',
    SchnorrVerify,
    [
      '{"message":"e43441762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"signature":"6470fd1303dda4fda717b9837153c24a6eab377183fc438f939e0ed2b620e9ee5077c4a8b8dca28963d772a94f5f0ddf598e1c47c137f91933274c7c3edadce8","pubkey": "b33cc9edc096d0a83416964bd3c6247b8fecd256e4efa7870d2c854bdeb33390"}',
    ],
    '{"valid":false}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrSign non hashed invalid signature',
    SchnorrVerify,
    [
      '{"message":"5224612220693526874","isHashed":false,"signature":"1a5e01b7a94dce17ea8cdaab2998fee753797c79a4537714b1ffd9b7cbc2b03f068add0979bfd93e9aea2ab3909fa54002fd74ed3941250d0152d302e4a584d7","pubkey": "b33cc9edc096d0a83416964bd3c6247b8fecd256e4efa7870d2c854bdeb33390"}',
    ],
    '{"valid":false}',
  ),
];

const errorCase = [
  TestHelper.createBitcoinTestCase(
    'SchnorrVerify bad pubkey',
    SchnorrVerify,
    [
      '{"message":"e48441762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"signature":"6470fd1303dda4fda717b9837153c24a6eab377183fc438f939e0ed2b620e9ee5077c4a8b8dca28963d772a94f5f0ddf598e1c47c137f91933274c7c3edadce8","pubkey": "b33c9edc096d0a83416964bd3c6247b8fecd256e4efa7870d2c854bdeb33390"}',
    ],
    '{"error":{"code":1,"type":"illegal_argument","message":"hex to byte convert error."}}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrVerify bad message',
    SchnorrVerify,
    [
      '{"message":"e48g1762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"signature":"1a5e01b7a94dce17ea8cdaab2998fee753797c79a4537714b1ffd9b7cbc2b03f068add0979bfd93e9aea2ab3909fa54002fd74ed3941250d0152d302e4a584d7","pubkey": "b33cc9edc096d0a83416964bd3c6247b8fecd256e4efa7870d2c854bdeb33390"}',
    ],
    '{"error":{"code":1,"type":"illegal_argument","message":"hex to byte convert error."}}',
  ),
  TestHelper.createBitcoinTestCase(
    'SchnorrVerify bad signature',
    SchnorrVerify,
    [
      '{"message":"e441762fb75010b2aa31a512b62b4148aa3fb08eb0765d76b252559064a614","isHashed":true,"signature":"","pubkey": "b33cc9edc096d0a83416964bd3c6247b8fecd256e4efa7870d2c854bdeb33390"}',
    ],
    '{"error":{"code":1,"type":"illegal_argument","message":"Invalid Schnorr signature data."}}',
  ),
];

TestHelper.doTest('SchnorrSign', testCase);
TestHelper.doTest('SchnorrSign', errorCase);
