#ifndef CRC_PLATFORM_H
#define CRC_PLATFORM_H

#include <stddef.h>
#include <stdint.h>

#if defined(__aarch64__) && defined(__ARM_NEON__)
#define CRC_ARCH_ARM
#else
#define CRC_ARCH_GENERIC
#endif

crc32_t
crc32__generic (const uint8_t *buf, size_t len);

crc32_t
crc32__arm (const uint8_t *buf, size_t len);

int
crc__is_process_translated ();

#endif // CRC_PLATFORM_H
