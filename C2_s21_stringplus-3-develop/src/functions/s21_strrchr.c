#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *res = s21_NULL;
  s21_size_t len = s21_strlen(str);
  const char *str_tmp = str;
  int is_match = 0;
  str += len;
  for (; str >= str_tmp; str--) {
    if (*str == c) {
      is_match = 1;
      break;
    }
  }
  if (is_match) res = (char *)str;

  return res;
}