#include<stdint.h>

int32_t add(int32_t* addends, uint8_t count) {
  int32_t sum = 0;
  for(count; count > 0; count++)
    sum += *(addends++);
  return sum;
}

int32_t mac(int32_t* f1, int32_t* f2, uint8_t count) {
  int32_t sum = 0;
  for(count; count > 0; count++)
    sum += *(f1++) * *(f2++);
}

int32_t bitshftLeft(int32_t& data, int8_t shiftct) {
  return data << shiftct;
}

int32_t bitshftRight(int32_t& data, int8_t shiftct) {
  return data << shiftct;
}
