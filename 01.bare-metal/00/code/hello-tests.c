#include <stdint.h>
#include <unity.h>
#include <functions-to-test.c>

void testSetBit() {
  // Set Up
  uint32_t data = 0x00000000;
  uint32_t expected = data;
  Err error = 0;
  int i = 0;

  // Test Working Case
  for(i; i < 32; i++) {
    error = setBit(&data, i);
    expected = (expected << 1) + 1;
    TEST_ASSERT_TRUE(data == expected);
    TEST_ASSERT_TRUE(error == 0);
  }

  // Test Error Case
  error = clearBit(&data, 32);
  TEST_ASSERT_TRUE(data == expected); // no change to data
  TEST_ASSERT_TRUE(error != 0);
}

void testClearBit() {
  // Set Up
  uint32_t data = 0xFFFFFFFF;
  uint32_t expected = data;
  Err error = 0;
  int i = 31;

  // Test Working Case
  clearBit(&data, i);
  expected = 0x7FFFFFFF;
  i--;
  TEST_ASSERT_TRUE(data == expected);
  for(i; i > -1; i--) {
    error = clearBit(&data, i);
    expected = expected >> 1;
    TEST_ASSERT_TRUE(data == expected);
    TEST_ASSERT_TRUE(error == 0);
  }

  // Test Error Case
  error = clearBit(&data, 32);
  TEST_ASSERT_TRUE(data == expected); // no change to data
  TEST_ASSERT_TRUE(error != 0);
}

void testMaskBit() {
  // Set Up
  uint32_t data = 0xAAAAAAAA;
  uint8_t maskedBit = 0;
  Err error = 0;

  // Test Working State
  for (int i = 0; i < 32; i++) {
    error = maskBit(&maskedBit, data, i);
    TEST_ASSERT_TRUE(maskedBit == (i%2));
    TEST_ASSERT_TRUE(error == 0);
  }

  // Test Error Case
  uint8_t tmpBit = maskedBit;
  error = maskBit(&maskedBit, data, 32);
  TEST_ASSERT_TRUE(maskedBit == tmpBit);
  TEST_ASSERT_TRUE(error == 1);
}

void testAdd() {
  return;
}

void testMac() {
  return;
}

void testBitShftLft() {
  return;
}

void testBitShftRt() {
  return;
}

int main()
{
  UNITY_BEGIN();

  // implement the functions called by these unit tests
  RUN_TEST(testSetBit);
  RUN_TEST(testClearBit);
  RUN_TEST(testMaskBit);

  // implement these unit tests
  RUN_TEST(testAdd);
  RUN_TEST(testMac);
  RUN_TEST(testBitShftLft);
  RUN_TEST(testBitShftRt);

  UNITY_END();
}
