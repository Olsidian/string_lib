#include "s21_string.h"

s21_size_t s21_strspn(const char *s, const char *accept) {
  s21_size_t size = 0;
  s21_size_t template_size = s21_strlen(accept);
  char *template = (char *)calloc(template_size, sizeof(char));
  s21_memcpy(template, accept, template_size);
  for (s21_size_t i = 0; i < s21_strlen(s); i++) {
    int found = 0;
    for (s21_size_t template_count = 0; template_count < template_size;
         template_count++) {
      if (s[i] == template[template_count] && found == 0) {
        size++;
        found = 1;
      }
    }
    if (!found) {
      break;
    }
  }
  free(template);
  return size;
}
