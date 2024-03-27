#include "s21_string.h"

//Копирует символ c (беззнаковый тип) в первые n символов строки, на которую
//указывает аргумент str.
void *s21_memset(void *str, int c, s21_size_t n) {
  unsigned char *byte =
      (unsigned char *)str;  // приводим str к типу unsigned char
  if (n == 0) {
    return str;
  }
  while (n > 0) {
    *byte = c;  // записываем c в byte
    byte++;     // увеличиваем byte на 1
    n--;        // уменьшаем n на 1
  }
  return str;  // возвращаем byte
}
