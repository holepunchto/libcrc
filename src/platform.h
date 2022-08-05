#ifndef CRC_PLATFORM_H
#define CRC_PLATFORM_H

#include <stddef.h>
#include <stdint.h>

crc32_t
crc32__generic (const uint8_t *buf, size_t len);

#endif // CRC_PLATFORM_H
