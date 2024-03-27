#include "s21_string.h"

void *s21_to_lower(const char *str) {
  if (str == s21_NULL) {
    return s21_NULL;
  }
  s21_size_t string_size = s21_strlen(str) + 1;
  char *string_mod = (char *)calloc(string_size, sizeof(char));
  if (string_mod) {
    s21_memcpy(string_mod, str, string_size);
    for (s21_size_t i = 0; i < string_size; i++) {
      if (string_mod[i] >= 'A' && string_mod[i] <= 'Z') {
        string_mod[i] = string_mod[i] + 32;
      }
    }
  }
  return string_mod;
}