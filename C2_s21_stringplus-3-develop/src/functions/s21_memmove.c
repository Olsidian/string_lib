#include "s21_string.h"

void *s21_memmove(void *dest, const void *src,
                  s21_size_t n) {  // dest - назначение (куда перезаписывается),
                                   // src - исходник (откуда перезаписывается),
                                   // n - кол-во байт перезаписиваемых данных
  char *copy_src = (char *)src;    // копируем исходник
  char *copy_dest = (char *)dest;  // копируем назначение
  char *temp =
      (char *)malloc(n * sizeof(char));  // выделяем память под временную копию
  for (s21_size_t i = 0; i < n; i++) {
    temp[i] = copy_src[i];  // копируем скопированный исходник в временную копию
    if (copy_src[i] == '\n') {  // если символ '\n' в исходнике
      temp[i] = copy_src[i];  // копируем '\n' в временную копию
    }
  }
  for (s21_size_t i = 0; i < n; i++) {
    copy_dest[i] = temp[i];  // копируем временную копию в назначение
    if (temp[i] == '\n') {  // если символ '\n' в временной копии
      copy_dest[i] = temp[i];  // копируем '\n' в назначение
    }
  }
  free(temp);  // освобождаем память
  return dest;
}
