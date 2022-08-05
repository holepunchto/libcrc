#include <stddef.h>
#include <stdint.h>

#include "../include/crc.h"
#include "platform.h"

crc32_t
crc32 (const uint8_t *buf, size_t len) {
  return crc32__generic(buf, len);
}
