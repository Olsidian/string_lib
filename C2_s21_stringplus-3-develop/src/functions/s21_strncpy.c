#include "s21_string.h"

//Копирует до n символов из строки, на которую указывает src, в dest
char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  s21_size_t i;  // счётчик
  for (i = 0; i < n && src[i] != '\0';
       i++) {  // В цикле for происходит копирование символов из src в dest.
    dest[i] = src[i];  // Цикл продолжается до тех пор, пока не будет
                       // скопировано n символов или пока не будет достигнут
                       // конец строки src (обозначенный символом '\0').
  }
  for (; i < n; i++) {  // После завершения цикла копирования, дополнительный
                        // цикл for используется для заполнения оставшейся части
                        // dest символами '\0',
    dest[i] =
        '\0';  // чтобы гарантировать, что dest является корректной строкой.
  }
  return dest;
}
