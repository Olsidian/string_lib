#include "../s21_string.h"

typedef struct {
  int fractional_part;
  int point;
  int digit_num;
  int unsigned_num;
  int float_num;
  int l_counter;
  int h_counter;
  int flag_plus;
  int flag_minus;
  int flag_space;
  int width;
  int accuracy_point;
  int accuracy_num;
} sprFeatures;

void modificator_parse(const char **format, sprFeatures *keys);
int print_format(char spec, va_list ap, char *str, sprFeatures *keys);
int digit_type_setting(va_list ap, char *str, sprFeatures *keys);
int unsigned_type_setting(va_list ap, char *str, sprFeatures *keys);
int s21_atoi(char *str);
int arr_moving(char *str, int count, sprFeatures keys);
int space_putting(char *str, sprFeatures keys);
int print_char(int c, char *str, sprFeatures keys);
int print_str(char *str_out, char *str_in, sprFeatures keys);
int s21_itoa(double d, char *str, int count, sprFeatures keys);
void digit_accuracy_zeroes(double d, char *str, int *res, sprFeatures keys);
int print_digit(double d, char *str, sprFeatures keys);
int print_float(double f, char *str, sprFeatures *keys);

int s21_sprintf(char *str, const char *format, ...) {
  int count = 0;
  va_list ap;
  sprFeatures keys = {0};
  va_start(ap, format);

  for (; *format != '\0'; format++) {
    if (*format == '%') {
      format++;  //Переход к модификаторам и спецификаторам
      modificator_parse(&format, &keys);  //определение модификаторов
      count += print_format(*format, ap, str + count,
                            &keys);  //определение спецификаторов и печать
    } else {
      str[count] = *format;
      count++;
    }
  }
  va_end(ap);
  str += count;
  s21_memset(str, '\0', count);  //избавляемся от мусора в конце массива
  return count;
}

void modificator_parse(const char **format, sprFeatures *keys) {
  char buf_width[100] = "";  //буферный массив для чисел ширины
  char buf_accuracy[100] = "";  //буферный массив для чисел точности
  keys->accuracy_num = 0;
  keys->accuracy_point = 0;
  keys->width = 0;
  keys->flag_minus = 0;
  keys->flag_plus = 0;
  keys->flag_space = 0;
  while (**format == 'l' || **format == 'h' || **format == '+' ||
         **format == '-' || **format == ' ' ||
         (**format >= '0' && **format <= '9') ||
         (**format == '.')) {  // Считывание модификаторов
    if (**format == 'l') {
      keys->l_counter++;
      keys->h_counter = 0;
    } else if (**format == 'h') {
      keys->h_counter++;
      keys->l_counter = 0;
    } else if (**format == '+') {
      keys->flag_plus = 1;
    } else if (**format == '-') {
      keys->flag_minus = 1;
    } else if (**format == ' ') {
      keys->flag_space = 1;
    } else if (**format == '.') {
      keys->accuracy_point = 1;
    } else if (**format >= '0' && **format <= '9') {
      if (keys->accuracy_point) {  //если была точка, числа записываются в
                                   //буферный массив для точности
        s21_strcat(buf_accuracy, *format);
      } else {
        s21_strcat(buf_width, *format);
      }
    }
    (*format)++;
  }
  keys->width = s21_atoi(buf_width);  //преобразование массива из цифр в число
  if (s21_strlen(buf_accuracy) > 1)
    keys->accuracy_num = s21_atoi(buf_accuracy);
  else
    keys->accuracy_num = 0;
}

int print_format(char spec, va_list ap, char *str, sprFeatures *keys) {
  int res = 0;
  switch (spec) {
    case '%':
      *str = '%';
      res++;
      break;
    case 'c':
      res += print_char(va_arg(ap, int), str, *keys);
      break;
    case 's':
      res += print_str(va_arg(ap, char *), str, *keys);
      break;
    case 'd':
    case 'i':
      keys->digit_num = 1;
      res += digit_type_setting(ap, str, keys);
      break;
    case 'f':
      keys->float_num = 1;
      res += print_float(va_arg(ap, double), str, keys);
      break;
    case 'u':
      keys->unsigned_num = 1;
      res += unsigned_type_setting(ap, str, keys);
      break;
    default:
      *str = spec;
      res++;
      break;
  }
  return res;
}

int digit_type_setting(va_list ap, char *str, sprFeatures *keys) {
  int res = 0;
  if (!keys->h_counter && keys->l_counter) {
    switch (keys->l_counter) {
      case 2:
        res += print_digit(va_arg(ap, long long), str, *keys);
        break;
      case 1:
        res += print_digit(va_arg(ap, long), str, *keys);
        break;
    }
  } else if (keys->h_counter && !keys->l_counter) {
    switch (keys->h_counter) {
      case 2:
        res += print_digit((signed char)va_arg(ap, int), str, *keys);
        break;
      case 1:
        res += print_digit((short int)va_arg(ap, int), str, *keys);
        break;
    }
  } else if (!keys->h_counter && !keys->l_counter)
    res += print_digit(va_arg(ap, int), str, *keys);
  return res;
}

int unsigned_type_setting(va_list ap, char *str, sprFeatures *keys) {
  int res = 0;
  if (!keys->h_counter && keys->l_counter) {
    switch (keys->l_counter) {
      case 2:
        res += print_digit(va_arg(ap, unsigned long long), str, *keys);
        break;
      case 1:
        res += print_digit(va_arg(ap, unsigned long), str, *keys);
        break;
    }
  } else if (keys->h_counter && !keys->l_counter) {
    switch (keys->h_counter) {
      case 2:
        res += print_digit((unsigned char)va_arg(ap, int), str, *keys);
        break;
      case 1:
        res += print_digit(va_arg(ap, int), str, *keys);
        break;
    }
  } else if (!keys->h_counter && !keys->l_counter)
    res += print_digit(va_arg(ap, unsigned int), str, *keys);
  return res;
}

int s21_atoi(char *str) {
  int n = 0, isnegative = 0;
  if (str[0] == '-') {
    isnegative = 1, str++;
  }
  while (*str >= '0' && *str <= '9') {
    n *= 10;
    n += *str++;
    n -= '0';
  }
  if (isnegative) {
    n *= -1;
  }
  return n;
}

int arr_moving(char *str, int count, sprFeatures keys) {
  int res = 0;
  int len = count;
  int diff = keys.width - len;
  if (keys.flag_minus) {
    if (len < keys.width) {
      if (keys.flag_space) {  //все пробелы вытесняются назад
        char buf[128] = "";
        s21_strcat(buf, str);
        s21_strcpy(str, buf);
        s21_strcat(str, " ");
      }
      for (int i = 0; i < diff; i++) {
        res++;
        s21_strcat(str, " ");
      }
    }
  } else {
    if (len < keys.width) {
      char width_arr[128] = "";  //массив для пробелов
      for (int i = 0; i < diff; i++) {
        width_arr[i] = ' ';
        res++;
      }
      s21_strcat(width_arr, str);
      s21_strcpy(str, width_arr);
    }
  }
  return res;
}

int space_putting(char *str, sprFeatures keys) {
  char buf[128] = "";
  //при целых и вещественных числах пробел при минусе не выводится назад, кроме
  //случаев с плюсом
  if (keys.flag_minus && (!keys.digit_num || keys.flag_plus)) {
    s21_strcat(str, " ");
  } else {
    s21_strcat(buf, str);
    s21_strcpy(str, " ");
    s21_strcat(str, buf);
  }
  return 1;
}

int print_char(int c, char *str, sprFeatures keys) {
  int count = 0;
  *str = c;
  count++;

  if (keys.flag_space && !keys.fractional_part && !keys.point &&
      !keys.accuracy_point)
    count += space_putting(str, keys);

  if (keys.width && !keys.fractional_part && !keys.point)
    count += arr_moving(str, count, keys);

  return count;
}

int print_str(char *str_out, char *str_in, sprFeatures keys) {
  int count = 0;
  for (; *str_out; str_in++, str_out++, count++) {
    if (keys.accuracy_point &&
        (count > keys.accuracy_num || count == keys.accuracy_num))
      break;
    *str_in = *str_out;
  }

  *str_in = '\0';
  str_in -= count;

  if (keys.width) count += arr_moving(str_in, count, keys);

  return count;
}

int s21_itoa(double d, char *str, int count,
             sprFeatures keys) {  //запись числа в массив в символьном виде
  int length = 0;
  char temp[100] = "\0";  //массив для записи чисел в обратном порядке
  if ((int)d == 0 && !keys.fractional_part)  //если целая часть равна нулю
    temp[length++] = '0';
  while (d != 0 && d >= 1.0) {
    temp[length++] = '0' + fmod(d, 10.0);
    d /= 10;
  }
  for (int i = length - 1; i >= 0; i--) {
    str[count + length - 1 - i] = temp[i];  //запись значений в строку
  }
  return length;
}

int plus_minus_sign(double *d, char *str, sprFeatures keys) {
  int count = 0;
  if (*d < 0) {
    *d *= -1;
    *str = '-';
    str++;
    count++;
  } else if (*d > 0 && keys.flag_plus && !keys.fractional_part) {
    *str = '+';
    str++;
    count++;
  }
  return count;
}

void digit_accuracy_zeroes(double d, char *str, int *res, sprFeatures keys) {
  int len = ((keys.flag_plus && d > 0) || (d < 0)) ? *res - 1 : *res;
  int nil_quantity = keys.accuracy_num - len;
  if (len < keys.accuracy_num && !keys.float_num) {
    char buf[128] = "";
    if (keys.flag_plus) {
      str++;
    }
    s21_strcat(buf, str);
    s21_strcpy(str, "");
    for (int i = 0; i < nil_quantity; i++, (*res)++, str++) {
      s21_strcat(str, "0");
    }
    str -= nil_quantity;
    s21_strcat(str, buf);
  }
}

int print_digit(double d, char *str, sprFeatures keys) {
  int count = 0;  //счётчик знака перед числом
  double num = d;
  count += plus_minus_sign(&d, str, keys);
  int res = count + s21_itoa(d, str, count, keys);
  str[res] = '\0';
  digit_accuracy_zeroes(d, str, &res, keys);
  if (keys.flag_space && !keys.accuracy_point &&
      ((!keys.float_num && num >= 0 && !keys.unsigned_num) ||
       (keys.unsigned_num && keys.width)))
    res += space_putting(str, keys);
  if (keys.width && !keys.float_num) res += arr_moving(str, res, keys);
  char buf[128] = "";
  s21_strcpy(buf, str);
  return res;
}

int print_float(double f, char *str, sprFeatures *keys) {
  int res = 0;
  double int_part = 0;
  modf(f, &int_part);
  //целая часть
  res += print_digit(int_part, str, *keys);
  while (*str) {
    str++;
  }
  //точка
  keys->point = 1;
  if ((keys->accuracy_point && keys->accuracy_num) || !keys->accuracy_point) {
    s21_strcat(str, ".");
    str++;
    res++;
    *str = '\0';
  }
  //дробная часть
  keys->fractional_part = 1;
  double frac_part = fabsl(f - int_part);
  int frac_digits = (keys->accuracy_point) ? keys->accuracy_num : 6;
  frac_part *= pow(10, frac_digits);
  int new_frac = round(frac_part);
  int count = 0;
  int tmp = new_frac;  //хранение дробной части после (num).(0)
  while (new_frac != 0) {
    count++;
    new_frac /= 10;
  }
  if (count < frac_digits) {  //на случай, если дробная часть будет находиться
                              //не на десятой доле числа
    for (int i = 0; i < (frac_digits - count); i++) {
      s21_strcat(str++, "0");
      res++;
    }
    frac_digits = count;
  }
  int str_shift = res;  //число для смещения указателя
  if ((keys->accuracy_point && keys->accuracy_num) || !keys->accuracy_point)
    res += print_digit(tmp, str, *keys);  //запись дробной части в строку
  str -= str_shift;

  if (keys->flag_space) res += space_putting(str, *keys);

  if (keys->width) res += arr_moving(str, res, *keys);
  keys->fractional_part = 0;

  return res;
}
