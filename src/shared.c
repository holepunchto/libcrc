#include <stddef.h>
#include <stdint.h>

#include "../include/crc.h"
#include "platform.h"

#ifdef __APPLE__
#include <errno.h>
#include <sys/sysctl.h>
#endif

crc32_t
crc32 (const uint8_t *buf, size_t len) {
#if defined(CRC_ARCH_ARM)
  return crc32__arm(buf, len);
#elif defined(CRC_ARCH_INTEL)
  return crc32__intel(buf, len);
#else
  return crc32__generic(buf, len);
#endif
}

int
crc__is_process_translated () {
  int ret = 0;

#ifdef __APPLE__
  size_t size = sizeof(ret);

  if (sysctlbyname("sysctl.proc_translated", &ret, &size, NULL, 0) == -1) {
    return errno == ENOENT ? 0 : -1;
  }
#endif

  return ret;
}
