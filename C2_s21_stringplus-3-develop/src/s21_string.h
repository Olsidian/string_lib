#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef unsigned long long s21_size_t;
#define s21_NULL (void *)0

//коды ошибок

#ifdef __linux__
#define __s21_get_errlist(x)                                          \
  ((x) == 0     ? "Success"                                           \
   : (x) == 1   ? "Operation not permitted"                           \
   : (x) == 2   ? "No such file or directory"                         \
   : (x) == 3   ? "No such process"                                   \
   : (x) == 4   ? "Interrupted system call"                           \
   : (x) == 5   ? "Input/output error"                                \
   : (x) == 6   ? "No such device or address"                         \
   : (x) == 7   ? "Argument list too long"                            \
   : (x) == 8   ? "Exec format "                                      \
                  "error"                                             \
   : (x) == 9   ? "Bad "                                              \
                  "file "                                             \
                  "descr"                                             \
                  "iptor"                                             \
   : (x) == 10  ? "No child processes"                                \
   : (x) == 11  ? "Resource temporarily unavailable"                  \
   : (x) == 12  ? "Cannot allocate memory"                            \
   : (x) == 13  ? "Permission denied"                                 \
   : (x) == 14  ? "Bad address"                                       \
   : (x) == 15  ? "Block device required"                             \
   : (x) == 16  ? "Device or resource busy"                           \
   : (x) == 17  ? "File exists"                                       \
   : (x) == 18  ? "Invalid cross-device link"                         \
   : (x) == 19  ? "No such device"                                    \
   : (x) == 20  ? "Not a directory"                                   \
   : (x) == 21  ? "Is a directory"                                    \
   : (x) == 22  ? "Invalid argument"                                  \
   : (x) == 23  ? "Too many open files in system"                     \
   : (x) == 24  ? "Too many open files"                               \
   : (x) == 25  ? "Inappropriate ioctl for device"                    \
   : (x) == 26  ? "Text file busy"                                    \
   : (x) == 27  ? "File too large"                                    \
   : (x) == 28  ? "No space left on device"                           \
   : (x) == 29  ? "Illegal seek"                                      \
   : (x) == 30  ? "Read-only file system"                             \
   : (x) == 31  ? "Too many links"                                    \
   : (x) == 32  ? "Broken pipe"                                       \
   : (x) == 33  ? "Numerical argument out of domain"                  \
   : (x) == 34  ? "Numerical result out of range"                     \
   : (x) == 35  ? "Resource deadlock avoided"                         \
   : (x) == 36  ? "File name too long"                                \
   : (x) == 37  ? "No locks available"                                \
   : (x) == 38  ? "Function not implemented"                          \
   : (x) == 39  ? "Directory not empty"                               \
   : (x) == 40  ? "Too many levels of symbolic links"                 \
   : (x) == 41  ? "Unknown error 41"                                  \
   : (x) == 42  ? "No message of desired type"                        \
   : (x) == 43  ? "Identifier removed"                                \
   : (x) == 44  ? "Channel number out of range"                       \
   : (x) == 45  ? "Level 2 not synchronized"                          \
   : (x) == 46  ? "Level 3 halted"                                    \
   : (x) == 47  ? "Level 3 reset"                                     \
   : (x) == 48  ? "Link number out of range"                          \
   : (x) == 49  ? "Protocol driver not attached"                      \
   : (x) == 50  ? "No CSI structure available"                        \
   : (x) == 51  ? "Level 2 halted"                                    \
   : (x) == 52  ? "Invalid exchange"                                  \
   : (x) == 53  ? "Invalid request descriptor"                        \
   : (x) == 54  ? "Exchange full"                                     \
   : (x) == 55  ? "No anode"                                          \
   : (x) == 56  ? "Invalid request code"                              \
   : (x) == 57  ? "Invalid slot"                                      \
   : (x) == 58  ? "Unknown error 58"                                  \
   : (x) == 59  ? "Bad font file format"                              \
   : (x) == 60  ? "Device not a stream"                               \
   : (x) == 61  ? "No data available"                                 \
   : (x) == 62  ? "Timer expired"                                     \
   : (x) == 63  ? "Out of streams resources"                          \
   : (x) == 64  ? "Machine is not on the network"                     \
   : (x) == 65  ? "Package not installed"                             \
   : (x) == 66  ? "Object is remote"                                  \
   : (x) == 67  ? "Link has been severed"                             \
   : (x) == 68  ? "Advertise error"                                   \
   : (x) == 69  ? "Srmount error"                                     \
   : (x) == 70  ? "Communication error on send"                       \
   : (x) == 71  ? "Protocol error"                                    \
   : (x) == 72  ? "Multihop attempted"                                \
   : (x) == 73  ? "RFS specific error"                                \
   : (x) == 74  ? "Bad message"                                       \
   : (x) == 75  ? "Value too large for defined data type"             \
   : (x) == 76  ? "Name not unique on network"                        \
   : (x) == 77  ? "File descriptor in bad state"                      \
   : (x) == 78  ? "Remote address changed"                            \
   : (x) == 79  ? "Can not access a needed shared library"            \
   : (x) == 80  ? "Accessing a corrupted shared library"              \
   : (x) == 81  ? ".lib section in a.out corrupted"                   \
   : (x) == 82  ? "Attempting to link in too many shared libraries"   \
   : (x) == 83  ? "Cannot exec a shared library directly"             \
   : (x) == 84  ? "Invalid or incomplete multibyte or wide character" \
   : (x) == 85  ? "Interrupted system call should be restarted"       \
   : (x) == 86  ? "Streams pipe error"                                \
   : (x) == 87  ? "Too many users"                                    \
   : (x) == 88  ? "Socket operation on non-socket"                    \
   : (x) == 89  ? "Destination address required"                      \
   : (x) == 90  ? "Message too long"                                  \
   : (x) == 91  ? "Protocol wrong type for socket"                    \
   : (x) == 92  ? "Protocol not available"                            \
   : (x) == 93  ? "Protocol not supported"                            \
   : (x) == 94  ? "Socket type not supported"                         \
   : (x) == 95  ? "Operation not supported"                           \
   : (x) == 96  ? "Protocol family not supported"                     \
   : (x) == 97  ? "Address family not supported by protocol"          \
   : (x) == 98  ? "Address already in use"                            \
   : (x) == 99  ? "Cannot assign requested address"                   \
   : (x) == 100 ? "Network is down"                                   \
   : (x) == 101 ? "Network is unreachable"                            \
   : (x) == 102 ? "Network dropped connection on reset"               \
   : (x) == 103 ? "Software caused connection abort"                  \
   : (x) == 104 ? "Connection reset by peer"                          \
   : (x) == 105 ? "No buffer space available"                         \
   : (x) == 106 ? "Transport endpoint is already connected"           \
   : (x) == 107 ? "Transport endpoint is not connected"               \
   : (x) == 108 ? "Cannot send after transport endpoint shutdown"     \
   : (x) == 109 ? "Too many references: cannot splice"                \
   : (x) == 110 ? "Connection timed out"                              \
   : (x) == 111 ? "Connection refused"                                \
   : (x) == 112 ? "Host is down"                                      \
   : (x) == 113 ? "No route to host"                                  \
   : (x) == 114 ? "Operation already in progress"                     \
   : (x) == 115 ? "Operation now in progress"                         \
   : (x) == 116 ? "Stale file handle"                                 \
   : (x) == 117 ? "Structure needs cleaning"                          \
   : (x) == 118 ? "Not a XENIX named type file"                       \
   : (x) == 119 ? "No XENIX semaphores available"                     \
   : (x) == 120 ? "Is a named type file"                              \
   : (x) == 121 ? "Remote I/O error"                                  \
   : (x) == 122 ? "Disk quota exceeded"                               \
   : (x) == 123 ? "No medium found"                                   \
   : (x) == 124 ? "Wrong medium type"                                 \
   : (x) == 125 ? "Operation canceled"                                \
   : (x) == 126 ? "Required key not available"                        \
   : (x) == 127 ? "Key has expired"                                   \
   : (x) == 128 ? "Key has been revoked"                              \
   : (x) == 129 ? "Key was rejected by service"                       \
   : (x) == 130 ? "Owner died"                                        \
   : (x) == 131 ? "State not recoverable"                             \
   : (x) == 132 ? "Operation not possible due to RF-kill"             \
   : (x) == 133 ? "Memory page has hardware error"                    \
                : "Unknown error")
#define LASTERR 133
#elif defined __APPLE__
#define __s21_get_errlist(x)                                        \
  ((x) == 0     ? "Undefined error: 0"                              \
   : (x) == 1   ? "Operation not permitted"                         \
   : (x) == 2   ? "No such file or directory"                       \
   : (x) == 3   ? "No such process"                                 \
   : (x) == 4   ? "Interrupted system call"                         \
   : (x) == 5   ? "Input/output error"                              \
   : (x) == 6   ? "Device not configured"                           \
   : (x) == 7   ? "Argument list too long"                          \
   : (x) == 8   ? "Exec format "                                    \
                  "error"                                           \
   : (x) == 9   ? "Bad "                                            \
                  "file "                                           \
                  "descr"                                           \
                  "iptor"                                           \
   : (x) == 10  ? "No child processes"                              \
   : (x) == 11  ? "Resource deadlock avoided"                       \
   : (x) == 12  ? "Cannot allocate memory"                          \
   : (x) == 13  ? "Permission denied"                               \
   : (x) == 14  ? "Bad address"                                     \
   : (x) == 15  ? "Block device required"                           \
   : (x) == 16  ? "Resource busy"                                   \
   : (x) == 17  ? "File exists"                                     \
   : (x) == 18  ? "Cross-device link"                               \
   : (x) == 19  ? "Operation not supported by device"               \
   : (x) == 20  ? "Not a directory"                                 \
   : (x) == 21  ? "Is a directory"                                  \
   : (x) == 22  ? "Invalid argument"                                \
   : (x) == 23  ? "Too many open files in system"                   \
   : (x) == 24  ? "Too many open files"                             \
   : (x) == 25  ? "Inappropriate ioctl for device"                  \
   : (x) == 26  ? "Text file busy"                                  \
   : (x) == 27  ? "File too large"                                  \
   : (x) == 28  ? "No space left on device"                         \
   : (x) == 29  ? "Illegal seek"                                    \
   : (x) == 30  ? "Read-only file system"                           \
   : (x) == 31  ? "Too many links"                                  \
   : (x) == 32  ? "Broken pipe"                                     \
   : (x) == 33  ? "Numerical argument out of domain"                \
   : (x) == 34  ? "Result too large"                                \
   : (x) == 35  ? "Resource temporarily unavailable"                \
   : (x) == 36  ? "Operation now in progress"                       \
   : (x) == 37  ? "Operation already in progress"                   \
   : (x) == 38  ? "Socket operation on non-socket"                  \
   : (x) == 39  ? "Destination address required"                    \
   : (x) == 40  ? "Message too long"                                \
   : (x) == 41  ? "Protocol wrong type for socket"                  \
   : (x) == 42  ? "Protocol not available"                          \
   : (x) == 43  ? "Protocol not supported"                          \
   : (x) == 44  ? "Socket type not supported"                       \
   : (x) == 45  ? "Operation not supported"                         \
   : (x) == 46  ? "Protocol family not supported"                   \
   : (x) == 47  ? "Address family not supported by protocol family" \
   : (x) == 48  ? "Address already in use"                          \
   : (x) == 49  ? "Can't assign requested address"                  \
   : (x) == 50  ? "Network is down"                                 \
   : (x) == 51  ? "Network is unreachable"                          \
   : (x) == 52  ? "Network dropped connection on reset"             \
   : (x) == 53  ? "Software caused connection abort"                \
   : (x) == 54  ? "Connection reset by peer"                        \
   : (x) == 55  ? "No buffer space available"                       \
   : (x) == 56  ? "Socket is already connected"                     \
   : (x) == 57  ? "Socket is not connected"                         \
   : (x) == 58  ? "Can't send after socket shutdown"                \
   : (x) == 59  ? "Too many references: can't splice"               \
   : (x) == 60  ? "Operation timed out"                             \
   : (x) == 61  ? "Connection refused"                              \
   : (x) == 62  ? "Too many levels of symbolic links"               \
   : (x) == 63  ? "File name too long"                              \
   : (x) == 64  ? "Host is down"                                    \
   : (x) == 65  ? "No route to host"                                \
   : (x) == 66  ? "Directory not empty"                             \
   : (x) == 67  ? "Too many processes"                              \
   : (x) == 68  ? "Too many users"                                  \
   : (x) == 69  ? "Disc quota exceeded"                             \
   : (x) == 70  ? "Stale NFS file handle"                           \
   : (x) == 71  ? "Too many levels of remote in path"               \
   : (x) == 72  ? "RPC struct is bad"                               \
   : (x) == 73  ? "RPC version wrong"                               \
   : (x) == 74  ? "RPC prog. not avail"                             \
   : (x) == 75  ? "Program version wrong"                           \
   : (x) == 76  ? "Bad procedure for program"                       \
   : (x) == 77  ? "No locks available"                              \
   : (x) == 78  ? "Function not implemented"                        \
   : (x) == 79  ? "Inappropriate file type or format"               \
   : (x) == 80  ? "Authentication error"                            \
   : (x) == 81  ? "Need authenticator"                              \
   : (x) == 82  ? "Device power is off"                             \
   : (x) == 83  ? "Device error"                                    \
   : (x) == 84  ? "Value too large to be stored in data type"       \
   : (x) == 85  ? "Bad executable (or shared library)"              \
   : (x) == 86  ? "Bad CPU type in executable"                      \
   : (x) == 87  ? "Shared library version mismatch"                 \
   : (x) == 88  ? "Malformed Mach-o file"                           \
   : (x) == 89  ? "Operation canceled"                              \
   : (x) == 90  ? "Identifier removed"                              \
   : (x) == 91  ? "No message of desired type"                      \
   : (x) == 92  ? "Illegal byte sequence"                           \
   : (x) == 93  ? "Attribute not found"                             \
   : (x) == 94  ? "Bad message"                                     \
   : (x) == 95  ? "EMULTIHOP (Reserved)"                            \
   : (x) == 96  ? "No message available on STREAM"                  \
   : (x) == 97  ? "ENOLINK (Reserved)"                              \
   : (x) == 98  ? "No STREAM resources"                             \
   : (x) == 99  ? "Not a STREAM"                                    \
   : (x) == 100 ? "Protocol error"                                  \
   : (x) == 101 ? "STREAM ioctl timeout"                            \
   : (x) == 102 ? "Operation not supported on socket"               \
   : (x) == 103 ? "Policy not found"                                \
   : (x) == 104 ? "State not recoverable"                           \
   : (x) == 105 ? "Previous owner died"                             \
   : (x) == 106 ? "Interface output queue is full"                  \
                : "Unknown error:")
#define LASTERR 106
#endif

//поиск
int s21_memcmp(const void *str1, const void *str2,
               s21_size_t n);  //Сравнивает первые n байтов str1 и str2.

char *s21_strchr(
    const char *str,
    int c);  //Выполняет поиск первого вхождения символа c (беззнаковый тип) в
             //строке, на которую указывает аргумент str.

char *s21_strpbrk(
    const char *str1,
    const char *str2);  // Находит первый символ в строке str1, который
                        // соответствует любому символу, указанному в str2.

char *s21_strrchr(
    const char *str,
    int c);  //Выполняет поиск последнего вхождения символа c (беззнаковый тип)
             //в строке, на которую указывает аргумент str.

char *s21_strstr(
    const char *haystack,
    const char *needle);  //Находит первое вхождение всей строки needle (не
                          //включая завершающий нулевой символ), которая
                          //появляется в строке haystack.

void *s21_memchr(const void *str, int c, s21_size_t n);

//сравнение memcmp strcmp strncmp

// int s21_strcmp(const char *s1, const char *s2); //

int s21_strncmp(
    const char *str1, const char *str2,
    s21_size_t n);  // Сравнивает не более первых n байтов str1 и str2.

// // memcpy memmove memset strcpy strncpy //копирование

void *s21_memcpy(void *dest, const void *src,
                 s21_size_t n);  //Копирует n символов из src в dest.

void *s21_memmove(void *dest, const void *src,
                  s21_size_t n);  // memmove - copy memory area

void *s21_memset(
    void *str, int c,
    s21_size_t n);  //Копирует символ c (беззнаковый тип) в первые n символов
                    //строки, на которую указывает аргумент str.

char *s21_strcpy(char *dest,
                 const char *src);  // strcpy, strncpy - copy a string

char *s21_strncpy(char *dest, const char *src,
                  s21_size_t n);  //Копирует до n символов из строки, на которую
                                  //указывает src, в dest.

// //вспомогательные?! strtok, strerror, strcat, strncat;

char *s21_strtok(char *str, const char *delim);  // Разбивает строку str на ряд
                                                 // токенов, разделенных delim.

char *s21_strerror(
    int errnum);  // Выполняет поиск во внутреннем массиве номера ошибки errnum
                  // и возвращает указатель на строку с сообщением об ошибке.
                  // Нужно объявить макросы, содержащие массивы сообщений об
                  // ошибке для операционных систем mac и linux. Описания ошибок
                  // есть в оригинальной библиотеке. Проверка текущей ОС
                  // осуществляется с помощью директив.

char *s21_strcat(char *dest, const char *src);  //- concatenate two strings

char *s21_strncat(
    char *dest, const char *src,
    s21_size_t n);  // Добавляет строку, на которую указывает src, в конец
                    // строки, на которую указывает dest, длиной до n символов.

// strlen strspn strcspn // вычисление

s21_size_t s21_strlen(const char *str);  //Вычисляет длину строки str, не
                                         //включая завершающий нулевой символ.

s21_size_t s21_strspn(const char *s,
                      const char *accept);  // get length of a prefix substring

s21_size_t s21_strrspn(const char *s, const char *accept);  //обратный strspn

s21_size_t s21_strcspn(
    const char *str1,
    const char *str2);  //Вычисляет длину начального сегмента str1, который
                        //полностью состоит из символов, не входящих в str2.

//задание 2, функции печати
int s21_sprintf(char *str, const char *format, ...);

//задание 5, функции обработки строк

void *s21_to_upper(const char *str);

void *s21_to_lower(const char *str);

void *s21_insert(const char *src, const char *str, s21_size_t start_index);

void *s21_trim(const char *src, const char *trim_chars);

#endif
