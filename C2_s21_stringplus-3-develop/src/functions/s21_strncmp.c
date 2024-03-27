#include "s21_string.h"

int s21_strncmp(const char *s1, const char *s2, s21_size_t n) {
  while (n && *s1 && (*s1 == *s2)) {
    ++s1;
    ++s2;
    --n;
  }
  if (n == 0) {
    return 0;
  } else {
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
  }
}
