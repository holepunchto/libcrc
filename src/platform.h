#ifndef CRC_PLATFORM_H
#define CRC_PLATFORM_H

#include <stddef.h>
#include <stdint.h>

#ifdef __aarch64__
#define CRC_ARCH_ARM
#else
#define CRC_ARCH_GENERIC
#endif

crc32_t
crc32__generic (const uint8_t *buf, size_t len);

crc32_t
crc32__arm (const uint8_t *buf, size_t len);

#endif // CRC_PLATFORM_H
