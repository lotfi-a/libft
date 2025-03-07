#include "libft.h"

void *memccpy(void *restrict dest, const void *restrict src, int ch, size_t n)
{
  unsigned char *d = (unsigned char *)dest;
  const unsigned char *s = (unsigned char *)src;
  unsigned char c = (unsigned char)ch;

  while (n-- || c != *s) {
    *d++ = *s++;
  }
  return dest;
}
