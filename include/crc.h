#ifndef CRC_H
#define CRC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdint.h>

typedef uint32_t crc32_t;

crc32_t
crc32 (const uint8_t *buf, size_t len);

#ifdef __cplusplus
}
#endif
#endif // FS_EXT_H
