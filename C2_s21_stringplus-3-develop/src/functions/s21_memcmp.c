#include "s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  const unsigned char *p1 = (const unsigned char *)str1;
  const unsigned char *p2 = (const unsigned char *)str2;
  int res = 0;

  for (s21_size_t i = 0; i < n; i++, p1++, p2++)
    if (*p1 != *p2) {
      res = *p1 - *p2;
      break;
    }

  return res;
}
