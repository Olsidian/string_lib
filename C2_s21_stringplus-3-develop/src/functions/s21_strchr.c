#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  char *res = s21_NULL;
  s21_size_t len = s21_strlen(str);
  if (!len && c == '\0') len = 1;
  if (len) {
    for (const char *p = str; (s21_size_t)(p - str) <= len; p++) {
      if (*p == c) {
        res = (char *)p;
        break;
      }
    }
  }
  return res;
}
