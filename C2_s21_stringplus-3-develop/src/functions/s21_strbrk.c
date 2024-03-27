#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  int is_match = 0;
  char *res = s21_NULL;
  s21_size_t str1_len = s21_strlen(str1);
  s21_size_t str2_len = s21_strlen(str2);

  for (const char *p1 = str1; (s21_size_t)(p1 - str1) < str1_len; p1++) {
    for (const char *p2 = str2; (s21_size_t)(p2 - str2) < str2_len; p2++) {
      if (*p1 == *p2) {
        is_match = 1;
        break;
      }
    }
    if (is_match) {
      res = (char *)p1;
      break;
    }
  }

  return res;
}
