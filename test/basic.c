#include <assert.h>

#include "../include/crc.h"

int
main () {
  assert(crc32((uint8_t *) "hello", 5) == 0x3610a686);
}
