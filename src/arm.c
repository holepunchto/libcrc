#include <stddef.h>
#include <stdint.h>

#include "../include/crc.h"
#include "platform.h"

#ifdef CRC_ARCH_ARM

#include <arm_acle.h>

crc32_t
crc32__arm (const uint8_t *buf, size_t len) {
  uint32_t crc = ~0;

  while (len >= 8) {
    crc = __crc32d(crc, *(const uint64_t *) buf);
    buf += 8;
    len -= 8;
  }

  if (len & 4) {
    crc = __crc32w(crc, *(const uint32_t *) buf);
    buf += 4;
  }

  if (len & 2) {
    crc = __crc32h(crc, *(const uint16_t *) buf);
    buf += 2;
  }

  if (len & 1) {
    crc = __crc32b(crc, *buf);
  }

  return ~crc;
}

#endif
