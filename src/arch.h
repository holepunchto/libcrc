#ifndef CRC_ARCH_H
#define CRC_ARCH_H

#if defined(__aarch64__) && defined(__ARM_NEON)
#define CRC_ARCH_ARM
#else
#define CRC_ARCH_GENERIC
#endif

#endif // CRC_ARCH_H
