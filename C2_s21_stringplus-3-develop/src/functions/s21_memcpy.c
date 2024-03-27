#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  unsigned char *dest_tmp =
      (unsigned char *)dest;  // приводится к типу для корректной работы с
                              // отдельными байтами в блоке памяти
  const unsigned char *src_tmp =
      (const unsigned char *)src;  // приводится к типу для корректной работы с
                                   // отдельными байтами в блоке памяти
  for (s21_size_t i = 0; i < n; i++) {  // В цикле for происходит копирование
                                        // байтов из src_tmp в dest_tmp.
    dest_tmp[i] = src_tmp[i];  // Цикл продолжается до тех пор, пока не будет
                               // скопировано n байтов.
  }
  return dest;
}
