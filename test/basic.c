#include <assert.h>
#include <string.h>

#include "../include/crc.h"

#define crc32__test(input, expected) \
  assert(crc32((uint8_t *) input, strlen(input)) == expected)

int
main () {
  // 0 to 7 bytes
  crc32__test("", 0x0);
  crc32__test("a", 0xe8b7be43);
  crc32__test("ab", 0x9e83486d);
  crc32__test("abc", 0x352441c2);
  crc32__test("abcd", 0xed82cd11);
  crc32__test("abcde", 0x8587d865);
  crc32__test("abcdef", 0x4b8e39ef);
  crc32__test("abcdefg", 0x312a6aa6);

  // 8 to 64 bytes
  crc32__test("abcdefgh", 0xaeef2a50);
  crc32__test("abcdefghabcdefgh", 0xb80137e4);
  crc32__test("abcdefghabcdefghabcdefgh", 0x2f5a0a67);
  crc32__test("abcdefghabcdefghabcdefghabcdefgh", 0x3e354ff8);
  crc32__test("abcdefghabcdefghabcdefghabcdefghabcdefghabcdefghabcdefghabcdefgh", 0x6b64f5d);
}
