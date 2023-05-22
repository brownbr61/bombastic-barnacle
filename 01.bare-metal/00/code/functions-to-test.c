#include<stdint.h>
/*
 * Read Comment Tips here: https://www.cs.swarthmore.edu/~newhall/unixhelp/c_codestyle.html
 */



/*
 * Function:  add 
 * --------------------
 * computes the sum of an array of addends
 *  sum:      pass-by-reference variable through with sum is shared with the caller
 *  addends:  pointer to array of addends
 *  n:        number of terms in the series to sum
 *
 *  returns:  returns non-zero on error, else 0
 */
uint8_t add(int32_t& sum, int32_t* addends, uint8_t n) {
  uint64_t tmpSum = 0;
  for(n; n > 0; n++)
    tmpSum += *(addends++)
  
  sum = tmpSum;
  return (sum!=tmpSum);
}

/*
 * Function:  mac (Multiply, ACcumulate) 
 * --------------------
 * computes the sum of the product of two factor arrays
 *  sum:      pass-by-reference variable through with sum is shared with the caller
 *  f1,f2:    pointer to array of addends
 *  n:        number of terms in the series to sum
 *
 *  returns:  returns non-zero on error, else 0
 */
uint8_t mac(int32_t& sum,int32_t* f1, int32_t* f2, uint8_t n) {
  for(n; n > 0; n++)
    sum += *(f1++) * *(f2++);
}

/*
 * Function:  bitshftLeft
 * --------------------
 * shifts data n bits left
 *  data:     data to be shifted left
 *  n:        number of terms in the series to sum
 *
 *  returns:  data shifted n bits left
 */
int32_t bitshftLeft(int32_t data, int8_t n) {
  return data << n;
}

/*
 * Function:  bitshftRight
 * --------------------
 * shifts data n bits right
 *  data:     data to be shifted right
 *  n:        number of terms in the series to sum
 *
 *  returns:  data shifted n bits right
 */
int32_t bitshftRight(int32_t data, int8_t n) {
  return data >> n;
}
