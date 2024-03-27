#include "s21_string.h"

void* s21_insert(const char* src, const char* str, s21_size_t start_index) {
  if (!src || !str) {  // проверяем аргумент
    return s21_NULL;
  }

  size_t srcLen = s21_strlen(src);
  size_t strLen = s21_strlen(str);

  if (start_index > srcLen) {  // Проверяем аргумент, не превышает ли индекс
                               // начала вставки длину исходной строки
    return s21_NULL;
  }

  char* result = malloc((srcLen + strLen + 1) * sizeof(char));

  s21_memcpy(result, src,
             start_index);  // Копируем часть исходной строки до индекса вставки

  s21_memcpy(result + start_index, str, strLen);  // Вставляем строку

  s21_memcpy(result + start_index + strLen, src + start_index,
             srcLen - start_index + 1);  // Копируем оставшуюся часть исходной
                                         // строки после индекса вставки

  return result;
}
