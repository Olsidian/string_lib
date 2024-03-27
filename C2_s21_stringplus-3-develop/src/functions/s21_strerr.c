#include "s21_string.h"

char *s21_strerror(int errnum) {
  static char result[128];
#ifdef __linux__
  if ((errnum < 0) || (errnum > (LASTERR))) {
    s21_sprintf(result, "Unknown error %d", errnum);
  } else {
    s21_strcpy(result, __s21_get_errlist(errnum));
  }
#elif defined __APPLE__
  if ((errnum < 0) || (errnum > (LASTERR))) {
    s21_sprintf(result, "Unknown error: %d", errnum);
  } else {
    s21_strcpy(result, __s21_get_errlist(errnum));
  }
#endif
  return result;
}