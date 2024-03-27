#include "s21_string.h"

void *s21_trim(const char *src, const char *trim_chars) {
  if (src == s21_NULL) {
    return s21_NULL;
  }

  s21_size_t new_length = 0;
  s21_size_t string_size = s21_strlen(src);
  char *string_mod = (char *)calloc(string_size + 1, sizeof(char));

  if (string_mod) {
    s21_size_t first_trim = 0;
    s21_size_t end_trim = string_size;

    if (trim_chars != s21_NULL) {
      while (first_trim < string_size &&
             s21_strchr(trim_chars, src[first_trim])) {
        first_trim++;
      }

      while (end_trim > 0 && s21_strchr(trim_chars, src[end_trim])) {
        end_trim--;
      }
    }

    new_length = end_trim - first_trim + 1;

    if (new_length > 0) {
      s21_memcpy(string_mod, src + first_trim, new_length);
      string_mod[new_length] = '\0';
    } else {
      s21_memcpy(string_mod, src, string_size);
      string_mod[string_size] = '\0';
    }
  }
  return string_mod;
}

// куда, источник + strspn , strrspn - strspn

// массив = *привет

// массив +3 = при*вет