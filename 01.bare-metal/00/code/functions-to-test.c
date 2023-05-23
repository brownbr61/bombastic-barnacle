#include<stdint.h>
#define Err uint8_t
/*
 * Read Comment Tips here: https://www.cs.swarthmore.edu/~newhall/unixhelp/c_codestyle.html
 */

/*
 * Sets the nth bit to 1
 *  @param data:     bits to have one bit set (input/output)
 *  @param n:        bit number to be set (input)
 *
 *  @return:  non-zero on error
 */
Err setBit(uint32_t* data, uint8_t n) {
  return 0;
}

/*
 * Clears the nth bit to 0
 *  @param data:     bits to have one bit cleared (input/output)
 *  @param n:        bit number to be cleared (input)
 *
 *  @return:  non-zero on error
 */
Err clearBit(uint32_t* data, uint8_t n) {
  return 0;
}

/*
 * Clears the nth bit to 0
 *  @param masked_bit: value of bit mask (output)
 *  @param data:       bits from which to mask one (input)
 *  @param n:          bit number to be masked (input)
 *
 *  @return:  non-zero on error
 */
Err maskBit(uint8_t* masked_bit, uint32_t data, uint8_t n) {
  return 0;
}


/*
 * Computes the sum of an array of addends
 *  @param sum:      pass-by-reference variable through with sum is shared with the caller (output)
 *  @param addends:  pointer to array of addends (input)
 *  @param n:        number of terms in the series to sum (input)
 *
 *  @return:  @return non-zero on error, else 0
 */
uint8_t add(int32_t* sum, int32_t* addends, uint8_t n) {
  uint64_t tmpSum = 0;
  while(n--)
    tmpSum += *(addends++);
  
  (*sum) = tmpSum;
  return ((*sum)!=tmpSum);
}

/*
 * Computes the sum of the product of two factor arrays
 *  @param sum:      pass-by-reference variable through with sum is shared with the caller (output)
 *  @param f1:      pointer to array of addends (input)
 *  @param f2:      pointer to array of addends (input)
 *  @param n:        number of terms in the series to sum (input)
 *
 *  @return:  @return non-zero on error, else 0
 */
uint8_t mac(int32_t* sum, int32_t* f1, int32_t* f2, uint8_t n) {
  while(n--)
    (*sum) += *(f1++) * *(f2++);
  return 0;
}

/*
 * Shifts data n bits left
 *  @param data:     data to be shifted left (input)
 *  @param n:        number bits shifted left (input)
 *
 *  @return:  data shifted n bits left
 */
int32_t bitshftLeft(int32_t data, int8_t n) {
  return data << n;
}

/*
 * Shifts data n bits right
 *  @param data:     data to be shifted right (input)
 *  @param n:        number bits shifted right (input)
 *
 *  @return:  data shifted n bits right
 */
int32_t bitshftRight(int32_t data, int8_t n) {
  return data >> n;
}
