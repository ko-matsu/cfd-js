module.exports = {
  transform: {
    '\\.[t]sx?$': [
      'ts-jest',
      {
        tsconfig: 'tsconfig.json',
      },
    ],
  },
  modulePathIgnorePatterns: [
    '<rootDir>/external/.*/external',
    '<rootDir>/external/libwally-core/src/wrap_js',
    '<rootDir>/external/libwally-core/src/wasm_package',
    '<rootDir>/wrap_js/__test__',
  ],
  testMatch: [
    '<rootDir>/wrap_js/__integration_test__/*.spec.ts',
  ],
};
