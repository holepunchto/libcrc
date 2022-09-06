#include <assert.h>
#include <string.h>

#include "../include/crc.h"

#define crc_u32__test(input, expected) \
  assert(crc_u32((uint8_t *) input, strlen(input)) == expected)

int
main () {
  // 0 to 7 bytes
  crc_u32__test("", 0x0);
  crc_u32__test("a", 0xe8b7be43);
  crc_u32__test("ab", 0x9e83486d);
  crc_u32__test("abc", 0x352441c2);
  crc_u32__test("abcd", 0xed82cd11);
  crc_u32__test("abcde", 0x8587d865);
  crc_u32__test("abcdef", 0x4b8e39ef);
  crc_u32__test("abcdefg", 0x312a6aa6);

  // 8 to 64 bytes
  crc_u32__test("abcdefgh", 0xaeef2a50);
  crc_u32__test("abcdefghabcdefgh", 0xb80137e4);
  crc_u32__test("abcdefghabcdefghabcdefgh", 0x2f5a0a67);
  crc_u32__test("abcdefghabcdefghabcdefghabcdefgh", 0x3e354ff8);
  crc_u32__test("abcdefghabcdefghabcdefghabcdefghabcdefghabcdefghabcdefghabcdefgh", 0x6b64f5d);
}
