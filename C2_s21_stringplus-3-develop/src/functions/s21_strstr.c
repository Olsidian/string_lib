#include "s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  s21_size_t needle_len = s21_strlen(needle);
  s21_size_t haystack_len = s21_strlen(haystack);
  int is_match = 0;
  char *res = s21_NULL;
  for (; haystack_len >= needle_len; haystack++, haystack_len--) {
    if (!s21_memcmp(haystack, needle, needle_len)) {
      is_match = 1;
      break;
    }
  }
  if (is_match) res = (char *)haystack;

  return res;
}
