#include "s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t size = 0;
  int found = 0;
  s21_size_t reject_size = s21_strlen(str2);
  char *template = (char *)calloc(reject_size, sizeof(char));
  s21_memcpy(template, str2, reject_size);
  for (s21_size_t i = 0; i < s21_strlen(str1); i++) {
    for (s21_size_t reject_count = 0; reject_count < reject_size;
         reject_count++) {
      if (str1[i] == template[reject_count] && found == 0) {
        found = 1;
      }
    }
    if (found) {
      break;
    }
    size++;
  }
  free(template);
  return size;
}
