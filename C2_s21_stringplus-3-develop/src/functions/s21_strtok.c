#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *buffer = s21_NULL;

  if (str == s21_NULL) {
    str = buffer;
  }

  char *token_end, *result;

  if (*str == '\0') {
    buffer = str, result = s21_NULL;
  } else {
    str += s21_strspn(str, delim);
    if (*str == '\0') {
      buffer = str, result = s21_NULL;
    }
  }

  if (result != s21_NULL) {
    token_end = str + s21_strcspn(str, delim);
    if (*token_end == '\0') {
      buffer = token_end, result = str;
    } else {
      *token_end = '\0';
      buffer = token_end + 1;
      result = str;
    }
  }

  return result;
}