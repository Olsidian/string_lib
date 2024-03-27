#include <check.h>
#include <limits.h>
#include <string.h>

#include "s21_string.h"

//функции сравнения

// strcmp

// strncmp

START_TEST(test_strncmp_comparsion2) {
  char str1[1024] = "12345";
  char str2[1024] = "12345";

  s21_size_t expected_result = strncmp(str1, str2, 5);

  s21_size_t my_result = s21_strncmp(str1, str2, 5);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №2 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion3) {
  char str1[1024] = "12345";
  char str2[1024] = "12345\0";

  s21_size_t expected_result = strncmp(str1, str2, 5);

  s21_size_t my_result = s21_strncmp(str1, str2, 5);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №3 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion4) {
  char str1[1024] = "";
  char str2[1024] = "";

  s21_size_t expected_result = strncmp(str1, str2, 1);

  s21_size_t my_result = s21_strncmp(str1, str2, 1);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №4 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion6) {
  char str1[1024] = "";
  char str2[1024] = "12345";

  s21_size_t expected_result = strncmp(str1, str2, 1);

  s21_size_t my_result = s21_strncmp(str1, str2, 1);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №6 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion7) {
  char str1[1024] = "A";
  char str2[1024] = "a";

  s21_size_t expected_result = strncmp(str1, str2, 1);

  s21_size_t my_result = s21_strncmp(str1, str2, 1);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №7 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion8) {
  char str1[1024] = "A";
  char str2[1024] = "a";

  s21_size_t expected_result = strncmp(str1, str2, 1);

  s21_size_t my_result = s21_strncmp(str1, str2, 1);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №8 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion9) {
  char str1[1024] = "   ";
  char str2[1024] = " ";

  s21_size_t expected_result = strncmp(str1, str2, 1);

  s21_size_t my_result = s21_strncmp(str1, str2, 1);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №9 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion10) {
  char str1[1024] = "\0";
  char str2[1024] = "\n";

  s21_size_t expected_result = strncmp(str1, str2, 1);

  s21_size_t my_result = s21_strncmp(str1, str2, 1);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №10 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion11) {
  char str1[10] = "";
  char str2[1024] = "";

  s21_size_t expected_result = strncmp(str1, str2, 1);

  s21_size_t my_result = s21_strncmp(str1, str2, 1);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №11 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion12) {
  char str1[10] = "";
  char str2[1024] = "";

  s21_size_t expected_result = strncmp(str1, str2, 1);

  s21_size_t my_result = s21_strncmp(str1, str2, 1);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №12 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

START_TEST(test_strncmp_comparsion13) {
  char str1[10] = "про";
  char str2[10] = "про";

  s21_size_t expected_result = strncmp(str1, str2, 5);

  s21_size_t my_result = s21_strncmp(str1, str2, 5);
  ck_assert_msg(
      my_result == expected_result,
      "s21_strncmp №13 failed: expected_result = %llu, my_result = %llu",
      expected_result, my_result);  //
}
END_TEST

//функции вычисления
// strlen

START_TEST(test_strlen_comparsion) {
  const char *test_string = "Testovaya stroka nomer odin";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №1 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion2) {
  const char *test_string = "";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №2 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion3) {
  const char *test_string = "\0";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №3 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion4) {
  const char *test_string = "\n";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №4 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion5) {
  const char *test_string = "Тестовая строка с не аскии";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №5 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion6) {
  const char *test_string =
      "010101001101001010100100101001010010101010101010000000000000000000111001"
      "01001011001";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №6 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion7) {
  const char *test_string =
      "екр54р345еикуh4brj756k6y8k67rr5hndhtrrt6j5er\0";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №7 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion8) {
  const char *test_string =
      "екр54р345еикуh4brj756k6y8k67rr5hndhtrrt6j5er\n";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №8 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion9) {
  const char *test_string =
      "\0екр54р345еикуh4brj756k6y8\0k67rr5hndhtrrt6j5er";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №9 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion10) {
  const char *test_string =
      "екр54р345еикуh4brj756k6y8k67rr5hndhtrrt6j5er";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №10 failed");  //
}
END_TEST

START_TEST(test_strlen_comparsion11) {
  const char test_string[11] = "0123456789";  //тестовое значение
  s21_size_t expected_length = strlen(test_string);

  s21_size_t my_lenght = s21_strlen(test_string);
  ck_assert_msg(my_lenght == expected_length, "s21_strlen №11 failed");  //
}
END_TEST

// strspn

START_TEST(test_strspn_comparsion) {
  const char *test_string = "12345678910";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(my_lenght == expected_length,
                "s21_strspn failed: expected_length = %llu, my_lenght = %llu",
                expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion2) {
  const char *test_string = "678910";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №2 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion2_1) {
  const char *test_string = "6574839201";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №2.1 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion2_2) {
  const char *test_string = "hreth4dehfedh5";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №2.2 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion2_3) {
  const char *test_string = "hr1ethdehfe12345dh";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №2.3 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion2_4) {
  const char *test_string = "hrethdehfe2345dh";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №2.4 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion2_5) {
  const char *test_string = "0123456789";  //тестовое значение
  const char *test_template = "210";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №2.5 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion3) {
  const char *test_string = "67890";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №3 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion4) {
  const char *test_string = "";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №4 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion5) {
  const char *test_string = "123";  //тестовое значение
  const char *test_template = "";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №5 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion6) {
  const char *test_string = "";  //тестовое значение
  const char *test_template = "";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №6 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion7) {
  const char *test_string = "\0";  //тестовое значение
  const char *test_template = "\0";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №7 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion8) {
  const char *test_string = "\n";  //тестовое значение
  const char *test_template = "\n";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №8 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion9) {
  const char *test_string = "\\0";  //тестовое значение
  const char *test_template = "\\0";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №9 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion10) {
  const char *test_string = " ";  //тестовое значение
  const char *test_template = " ";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №10 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion11) {
  const char *test_string =
      "reghb4hdber45egwrgerhrtjertjrjnhr";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №11 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strspn_comparsion12) {
  const char *test_string = "ткеаткнкно";  //тестовое значение
  const char *test_template = "фа";
  s21_size_t expected_length = strspn(test_string, test_template);

  s21_size_t my_lenght = s21_strspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strspn №12 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

// strcspn

START_TEST(test_strcspn_comparsion) {
  const char *test_string = "12345678910";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(my_lenght == expected_length,
                "s21_strcspn failed: expected_length = %llu, my_lenght = %llu",
                expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion2) {
  const char *test_string = "678910";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №2 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion2_1) {
  const char *test_string = "6574839201";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №2.1 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion2_2) {
  const char *test_string = "hreth4dehfedh5";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №2.2 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion2_3) {
  const char *test_string = "hr1ethdehfe12345dh";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №2.3 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion2_4) {
  const char *test_string = "hrethdehfe2345dh";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №2.4 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion2_5) {
  const char *test_string = "0123456789";  //тестовое значение
  const char *test_template = "210";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №2.5 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion3) {
  const char *test_string = "67890";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №3 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion4) {
  const char *test_string = "";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №4 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion5) {
  const char *test_string = "123";  //тестовое значение
  const char *test_template = "";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №5 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion6) {
  const char *test_string = "";  //тестовое значение
  const char *test_template = "";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №6 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion7) {
  const char *test_string = "\0";  //тестовое значение
  const char *test_template = "\0";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №7 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion8) {
  const char *test_string = "\n";  //тестовое значение
  const char *test_template = "\n";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №8 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion9) {
  const char *test_string = "\\0";  //тестовое значение
  const char *test_template = "\\0";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №9 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion10) {
  const char *test_string = " ";  //тестовое значение
  const char *test_template = " ";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №10 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion11) {
  const char *test_string =
      "reghb4hdber45egwrgerhrtjertjrjnhr";  //тестовое значение
  const char *test_template = "12345";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №11 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

START_TEST(test_strcspn_comparsion12) {
  const char *test_string = "ткеаткнкно";  //тестовое значение
  const char *test_template = "фа";
  s21_size_t expected_length = strcspn(test_string, test_template);

  s21_size_t my_lenght = s21_strcspn(test_string, test_template);
  ck_assert_msg(
      my_lenght == expected_length,
      "s21_strcspn №12 failed: expected_length = %llu, my_lenght = %llu",
      expected_length, my_lenght);  //
}
END_TEST

// memcmp

START_TEST(test_memcmp_comparsion) {
  const char str1[] = "String1";
  const char str2[] = "String2";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №1 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion2) {
  const char str1[] = "";
  const char str2[] = "";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №2 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion3) {
  const char str1[] = "String1";
  const char str2[] = "";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №3 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion4) {
  const char str1[] = "gbrtyh5hjyuhjk677jk";
  const char str2[] = "String2";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №4 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion5) {
  const char str1[] = "\0";
  const char str2[] = "\0";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №5 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion6) {
  const char str1[] = "\n";
  const char str2[] = "\n";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №6 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion7) {
  const char str1[] = "\0";
  const char str2[] = "\n";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №7 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion8) {
  const char str1[] = "String1";
  const char str2[] = "\0";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №8 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion9) {
  const char str1[] = "String1";
  const char str2[] = "\n";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №9 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion10) {
  const char str1[] = "\0";
  const char str2[] = "String2";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №10 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion11) {
  const char str1[] = "\n";
  const char str2[] = "String2";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №11 failed");
}
END_TEST

START_TEST(test_memcmp_comparsion12) {
  unsigned char str1[15] = "1234567890";
  unsigned char str2[15] = "1234567890";
  s21_size_t n = 3;
  s21_size_t expected_work = memcmp(&str1, &str2, n);

  s21_size_t test_result = s21_memcmp(&str1, &str2, n);
  ck_assert_msg(expected_work == test_result, "s21_memcmp №12 failed");
}
END_TEST

// strpbrk

START_TEST(test_strpbrk_comparsion) {
  const char *str1 = "Find chars";
  const char *str2 = "aeiou";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №1 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion2) {
  const char *str1 = "";
  const char *str2 = "";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №2 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion3) {
  const char *str1 = "fgdthnhgjtdg";
  const char *str2 = "aaa";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №3 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion4) {
  const char *str1 = "65uyjyk";
  const char *str2 = "\0";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №4 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion5) {
  const char *str1 = "fjkulityiultryk";
  const char *str2 = "\n";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №5 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion6) {
  const char *str1 = "dfhbgmgfyhgt";
  const char *str2 = "";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №6 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion7) {
  const char *str1 = "";
  const char *str2 = "grthyjkuikloli";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №7 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion8) {
  const char *str1 = "Asian gagarin";
  const char *str2 = "rg";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №8 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion9) {
  const char *str1 = "rhedjmegedrged";
  const char *str2 = "m";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №9 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion10) {
  const char *str1 = "gsrhftr\0hbetjnryj";
  const char *str2 = "\0";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №10 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion11) {
  const char *str1 = "икаепркрп4репорте";
  const char *str2 = "апук";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №11 failed");
}
END_TEST

START_TEST(test_strpbrk_comparsion12) {
  const char str1[11] = "0123456789";
  const char str2[10] = "369";
  char *expected_work = strpbrk(str1, str2);

  char *test_result = s21_strpbrk(str1, str2);
  ck_assert_msg(expected_work == test_result, "s21_strpbk №12 failed");
}
END_TEST

// strchr

START_TEST(test_strchr_comparsion) {
  const char *str = "Find char";
  int c = 'a';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №1 failed");
}
END_TEST

START_TEST(test_strchr_comparsion2) {
  const char *str = "aA find char";
  int c = 'a';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №2 failed");
}
END_TEST

START_TEST(test_strchr_comparsion3) {
  const char *str = "";
  int c = 'a';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №3 failed");
}
END_TEST

START_TEST(test_strchr_comparsion4) {
  const char *str = "";
  int c = '\0';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №4 failed");
}
END_TEST

START_TEST(test_strchr_comparsion5) {
  const char *str = "";
  int c = '\n';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №5 failed");
}
END_TEST

START_TEST(test_strchr_comparsion6) {
  const char *str = "";
  int c = ' ';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №6 failed");
}
END_TEST

START_TEST(test_strchr_comparsion7) {
  const char *str = "\\\\";
  int c = '\\';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №7 failed");
}
END_TEST

START_TEST(test_strchr_comparsion8) {
  const char *str = "10101011001010101001010101010100001010";
  int c = '1';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №8 failed");
}
END_TEST

START_TEST(test_strchr_comparsion9) {
  const char *str = "фаафврероапцупацкриуе";
  int c = 'e';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №9 failed");
}
END_TEST

START_TEST(test_strchr_comparsion10) {
  const char *str = "jkgeogrj453gfhkj5lhkbлоиркеро";
  int c = '4';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №10 failed");
}
END_TEST

START_TEST(test_strchr_comparsion11) {
  const char *str = "546437474";
  int c = 'b';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №11 failed");
}
END_TEST

START_TEST(test_strchr_comparsion12) {
  const char str[11] = "0123456789";
  int c = '6';

  char *expected_work = strchr(str, c);

  char *test_result = s21_strchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strchr №12 failed");
}
END_TEST

// strrchr

START_TEST(test_strrchr_comparsion) {
  const char *str = "Find chars immidiately a";
  int c = 'a';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №1 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion2) {
  const char *str = "a Find chars immidiately";
  int c = 'a';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №2 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion3) {
  const char *str = "yyyyyyyyyyy gggggggg";
  int c = 'a';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №3 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion4) {
  const char *str = " ";
  int c = ' ';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №4 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion5) {
  const char *str = "yyyyyyyyyyy gggggggg";
  int c = ' ';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №5 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion6) {
  const char *str = "yyyyy\0yyyyyy gggggggg\0";
  int c = 'a';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №6 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion7) {
  const char *str = "\0";
  int c = '\0';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №7 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion8) {
  const char *str = "\n";
  int c = '\n';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №8 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion9) {
  const char *str = "ркекео46окатконлонглн";
  int c = 'n';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №9 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion10) {
  const char *str = ":!*_0+)_()*,/ЭЖ*?%%;?*:;?:";
  int c = ')';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №10 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion11) {
  const char *str = "Hello!";
  int c = '!';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №11 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion12) {
  const char *str = "Hello!";
  int c = 'H';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №12 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion13) {
  const char *str = "";
  int c = 'x';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №13 failed");
}
END_TEST

START_TEST(test_strrchr_comparsion14) {
  const char *str = "0163456769";
  int c = '6';

  char *expected_work = strrchr(str, c);

  char *test_result = s21_strrchr(str, c);
  ck_assert_msg(expected_work == test_result, "s21_strrchr №14 failed");
}
END_TEST

// memchr

START_TEST(test_memchr_comparsion) {
  unsigned char src[15] = "1234567890";
  unsigned char s21_src[15] = "1234567890";
  char *test_sym = memchr(src, '4', 10);
  char *s21_sym = s21_memchr(s21_src, '4', 10);
  if (test_sym != NULL) {
    test_sym[0] = '!';
  }
  if (s21_sym != NULL) {
    s21_sym[0] = '!';
  }

  ck_assert_msg(memcmp(src, s21_src, sizeof(src)) == 0,
                "s21_memchr №1 failed: test - %s,s21_test - %s", src, s21_src);
}
END_TEST

START_TEST(test_memchr_comparsion2) {
  unsigned char src[15] = "123567890";
  unsigned char s21_src[15] = "123567890";
  char *test_sym = memchr(src, '4', 10);
  char *s21_sym = s21_memchr(s21_src, '4', 10);
  if (test_sym != NULL) {
    test_sym[0] = '!';
  }
  if (s21_sym != NULL) {
    s21_sym[0] = '!';
  }

  ck_assert_msg(memcmp(src, s21_src, sizeof(src)) == 0,
                "s21_memchr №3 failed: test - %s,s21_test - %s", src, s21_src);
}
END_TEST

START_TEST(test_memchr_comparsion3) {
  unsigned char src[15] = "";
  unsigned char s21_src[15] = "";
  char *test_sym = memchr(src, '4', 10);
  char *s21_sym = s21_memchr(s21_src, '4', 10);
  if (test_sym != NULL) {
    test_sym[0] = '!';
  }
  if (s21_sym != NULL) {
    s21_sym[0] = '!';
  }

  ck_assert_msg(memcmp(src, s21_src, sizeof(src)) == 0,
                "s21_memchr №4 failed: test - %s,s21_test - %s", src, s21_src);
}
END_TEST

// START_TEST(test_memchr_comparsion4) {
//   unsigned char src[15] = "test test test";
//   unsigned char s21_src[15] = "";
//   char *test_sym = memchr(src, 's', 10);
//   char *s21_sym = s21_memchr(s21_src, 's', 10);
//   if (test_sym != NULL) {
//     test_sym[0] = '!';
//   }
//   if (s21_sym != NULL) {
//     s21_sym[0] = '!';
//   }

//   ck_assert_msg(memcmp(src, s21_src, sizeof(src)) == 0,
//                 "s21_memchr №4 failed: test - %s,s21_test - %s", src,
//                 s21_src);
// }
// END_TEST

// START_TEST(test_memchr_comparsion5) {
//   unsigned char src[15] = "test test test";
//   unsigned char s21_src[15] = "";
//   char *test_sym = memchr(src, 's', 0);
//   char *s21_sym = s21_memchr(s21_src, 's', 0);
//   if (test_sym != NULL) {
//     test_sym[0] = '!';
//   }
//   if (s21_sym != NULL) {
//     s21_sym[0] = '!';
//   }

//   ck_assert_msg(memcmp(src, s21_src, sizeof(src)) == 0,
//                 "s21_memchr №5 failed: test - %s,s21_test - %s", src,
//                 s21_src);
// }
// END_TEST

// START_TEST(test_memchr_comparsion6) {
//   unsigned char src[100000] = "test test test";
//   unsigned char s21_src[100000] = "";
//   char *test_sym = memchr(src, 's', 10);
//   char *s21_sym = s21_memchr(s21_src, 's', 10);
//   if (test_sym != NULL) {
//     test_sym[0] = '!';
//   }
//   if (s21_sym != NULL) {
//     s21_sym[0] = '!';
//   }

//   ck_assert_msg(memcmp(src, s21_src, sizeof(src)) == 0,
//                 "s21_memchr №6 failed: test - %s,s21_test - %s", src,
//                 s21_src);
// }
// END_TEST

// START_TEST(test_memchr_comparsion7) {
//   unsigned char src[15] = "test test test";
//   unsigned char s21_src[15] = "";
//   char *test_sym = memchr(src, 's', -1);
//   char *s21_sym = s21_memchr(s21_src, 's', -1);
//   if (test_sym != NULL) {
//     test_sym[0] = '!';
//   }
//   if (s21_sym != NULL) {
//     s21_sym[0] = '!';
//   }

//   ck_assert_msg(memcmp(src, s21_src, sizeof(src)) == 0,
//                 "s21_memchr №7 failed: test - %s,s21_test - %s", src,
//                 s21_src);
// }
// END_TEST

// strstr

START_TEST(test_strstr_comparsion) {
  const char *haystack = "Find chars";
  const char *needle = "chars";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №1 failed");
}
END_TEST

START_TEST(test_strstr_comparsion2) {
  const char *haystack = "";
  const char *needle = "";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №2 failed");
}
END_TEST

START_TEST(test_strstr_comparsion3) {
  const char *haystack = "Find chars";
  const char *needle = "";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №3 failed");
}
END_TEST

START_TEST(test_strstr_comparsion4) {
  const char *haystack = "Find chars";
  const char *needle = "aboba";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №4 failed");
}
END_TEST

START_TEST(test_strstr_comparsion5) {
  const char *haystack = "";
  const char *needle = "aboba";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №5 failed");
}
END_TEST

START_TEST(test_strstr_comparsion6) {
  const char *haystack = "aboba borealis";
  const char *needle = "aboba";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №6 failed");
}
END_TEST

START_TEST(test_strstr_comparsion7) {
  const char *haystack = "aboba\0borealis";
  const char *needle = "\0";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №7 failed");
}
END_TEST

START_TEST(test_strstr_comparsion8) {
  const char *haystack = "aboba borealis\n";
  const char *needle = "\n";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №8 failed");
}
END_TEST

START_TEST(test_strstr_comparsion9) {
  const char *haystack = "Aboba borealis";
  const char *needle = "A";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №9 failed");
}
END_TEST

START_TEST(test_strstr_comparsion10) {
  const char *haystack = "Aboba borealis!";
  const char *needle = "borealis!";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №10 failed");
}
END_TEST

START_TEST(test_strstr_comparsion11) {
  const char *haystack = "Aboba a borealis!";
  const char *needle = "a";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №11 failed");
}
END_TEST

START_TEST(test_strstr_comparsion12) {
  const char *haystack = "Aboba borealis!";
  const char *needle = "borealis!";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №12 failed");
}
END_TEST

START_TEST(test_strstr_comparsion13) {
  const char haystack[11] = "0123456789";
  const char needle[10] = "345";

  char *expected_work = strstr(haystack, needle);

  char *test_result = s21_strstr(haystack, needle);
  ck_assert_msg(expected_work == test_result, "s21_strstr №13 failed");
}
END_TEST

//функции копирования

// memcpy
START_TEST(test_memcpy_comparsion) {
  const char *src =
      "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 "
      "28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 "
      "52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 "
      "76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 "
      "100";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 10;

  s21_memcpy(s21_dest, src, i);
  memcpy(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memcpy №1 failed");
}
END_TEST

START_TEST(test_memcpy_comparsion2) {
  const char *src = "";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 1;

  s21_memcpy(s21_dest, src, i);
  memcpy(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memcpy №2 failed");
}
END_TEST

START_TEST(test_memcpy_comparsion3) {
  const char *src = "\0";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 1;

  s21_memcpy(s21_dest, src, i);
  memcpy(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memcpy №3 failed");
}
END_TEST

START_TEST(test_memcpy_comparsion4) {
  const char *src = "\n";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 1;

  s21_memcpy(s21_dest, src, i);
  memcpy(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memcpy №4 failed");
}
END_TEST

START_TEST(test_memcpy_comparsion5) {
  const char *src =
      "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 "
      "28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 "
      "52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 "
      "76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 "
      "100";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 1;

  s21_memcpy(s21_dest, src, i);
  memcpy(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memcpy №5 failed");
}
END_TEST

START_TEST(test_memcpy_comparsion6) {
  const char *src =
      "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 "
      "28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 "
      "52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 "
      "76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 "
      "100";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 100;

  s21_memcpy(s21_dest, src, i);
  memcpy(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memcpy №6 failed");
}
END_TEST

START_TEST(test_memcpy_comparsion7) {
  const char *src =
      "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 "
      "28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 \0 50 "
      "51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 "
      "75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 "
      "99 100";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 60;

  s21_memcpy(s21_dest, src, i);
  memcpy(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memcpy №7 failed");
}
END_TEST

START_TEST(test_memcpy_comparsion9) {
  unsigned char src[10] = "123456";
  char dest[10] = "";
  char s21_dest[10] = "";
  int i = 6;

  s21_memcpy(s21_dest, src, i);
  memcpy(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memcpy №9 failed");
}
END_TEST

// memmove
START_TEST(test_memmove_comparsion) {
  const char *src =
      "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 "
      "28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 "
      "52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 "
      "76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 "
      "100";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 10;

  s21_memmove(s21_dest, src, i);
  memmove(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(memcmp(dest, s21_dest, i) == 0, "s21_memmove №1 failed");
}
END_TEST

START_TEST(test_memmove_comparsion2) {
  const char *src = "";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 10;

  s21_memmove(s21_dest, src, i);
  memmove(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(memcmp(dest, s21_dest, i) == 0, "s21_memmove №2 failed");
}
END_TEST

START_TEST(test_memmove_comparsion3) {
  const char *src = "\0";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 1;

  s21_memmove(s21_dest, src, i);
  memmove(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(memcmp(dest, s21_dest, i) == 0, "s21_memmove №3 failed");
}
END_TEST

START_TEST(test_memmove_comparsion4) {
  const char *src = "\0";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 10;

  s21_memmove(s21_dest, src, i);
  memmove(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(memcmp(dest, s21_dest, i) == 0, "s21_memmove №4 failed");
}
END_TEST

START_TEST(test_memmove_comparsion5) {
  const char *src = "\n";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 1;

  s21_memmove(s21_dest, src, i);
  memmove(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(memcmp(dest, s21_dest, i) == 0, "s21_memmove №5 failed");
}
END_TEST

START_TEST(test_memmove_comparsion6) {
  const char *src = "12345 \0 678910";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 10;

  s21_memmove(s21_dest, src, i);
  memmove(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(memcmp(dest, s21_dest, i) == 0, "s21_memmove №6 failed");
}
END_TEST

START_TEST(test_memmove_comparsion7) {
  const char *src = "\0 12345678910";
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 10;

  s21_memmove(s21_dest, src, i);
  memmove(dest, src, i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(memcmp(dest, s21_dest, i) == 0, "s21_memmove №7 failed");
}
END_TEST

START_TEST(test_memset_comparsion) {
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 10;

  s21_memset(s21_dest, 'A', i);
  memset(dest, 'A', i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memset №1 failed");
}
END_TEST

START_TEST(test_memset_comparsion2) {
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 10;

  s21_memset(s21_dest, '\0', i);
  memset(dest, '\0', i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memset №2 failed");
}
END_TEST

START_TEST(test_memset_comparsion3) {
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 10;

  s21_memset(s21_dest, '\n', i);
  memset(dest, '\n', i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memset №3 failed");
}
END_TEST

START_TEST(test_memset_comparsion4) {
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 100;

  s21_memset(s21_dest, 'b', i);
  memset(dest, 'b', i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memset №4 failed");
}
END_TEST

START_TEST(test_memset_comparsion5) {
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 0;

  s21_memset(s21_dest, 'b', i);
  memset(dest, 'b', i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memset №5 failed");
}
END_TEST

START_TEST(test_memset_comparsion7) {
  char dest[100] = "\0";
  char s21_dest[100] = "\0";
  int i = 50;

  s21_memset(s21_dest, ' ', i);
  memset(dest, ' ', i);

  s21_dest[i] = '\0';
  dest[i] = '\0';

  ck_assert_msg(strcmp(dest, s21_dest) == 0, "s21_memset №7 failed");
}
END_TEST

START_TEST(test_memset_comparsion8) {
  unsigned char src[15] = "1234567890";
  unsigned char s21_src[15] = "1234567890";
  int i = 10;

  s21_memset(&s21_src, '1', i);
  memset(&src, '1', i);

  ck_assert_msg(memcmp(src, s21_src, i) == 0, "s21_memset №8 failed");
}
END_TEST

// strcpy

START_TEST(test_strcpy_comparsion) {
  char *original = "12345678910";
  char test[100] = "\0";
  char s21_test[100] = "\0";

  s21_strcpy(s21_test, original);
  strcpy(test, original);

  ck_assert_msg(strcmp(test, s21_test) == 0, "s21_strcpy №1 failed");
}
END_TEST

START_TEST(test_strcpy_comparsion2) {
  char *original = "";
  char test[100] = "\0";
  char s21_test[100] = "\0";

  s21_strcpy(s21_test, original);
  strcpy(test, original);

  ck_assert_msg(strcmp(test, s21_test) == 0, "s21_strcpy №2 failed");
}
END_TEST

START_TEST(test_strcpy_comparsion3) {
  char *original = "\0";
  char test[100] = "\0";
  char s21_test[100] = "\0";

  s21_strcpy(s21_test, original);
  strcpy(test, original);

  ck_assert_msg(strcmp(test, s21_test) == 0, "s21_strcpy №3 failed");
}
END_TEST

START_TEST(test_strcpy_comparsion5) {
  char *original = "\n";
  char test[100] = "\0";
  char s21_test[100] = "\0";

  s21_strcpy(s21_test, original);
  strcpy(test, original);

  ck_assert_msg(strcmp(test, s21_test) == 0, "s21_strcpy №5 failed");
}
END_TEST

START_TEST(test_strcpy_comparsion6) {
  char *original = "12345\0 678910";
  char test[100] = "\0";
  char s21_test[100] = "\0";

  s21_strcpy(s21_test, original);
  strcpy(test, original);

  ck_assert_msg(strcmp(test, s21_test) == 0, "s21_strcpy №6 failed");
}
END_TEST

START_TEST(test_strcpy_comparsion7) {
  char *original = "\0 12345678910";
  char test[100] = "\0";
  char s21_test[100] = "\0";

  s21_strcpy(s21_test, original);
  strcpy(test, original);

  ck_assert_msg(strcmp(test, s21_test) == 0, "s21_strcpy №7 failed");
}
END_TEST

START_TEST(test_strcpy_comparsion8) {
  char src[1024] = "первая строка\0вторая строка";
  char test[1024] = "";
  char s21_test[1024] = "";

  s21_strcpy(s21_test, src);
  strcpy(test, src);

  ck_assert_msg(strcmp(test, s21_test) == 0, "s21_strcpy №8 failed");
}
END_TEST

// strncpy

START_TEST(test_strncpy_comparsion) {
  char *original = "1234567891011121314151617181920";
  char test[100] = "\0";
  char s21_test[100] = "\0";
  int i = 10;

  s21_strncpy(s21_test, original, i);
  strncpy(test, original, i);

  ck_assert_msg(strncmp(test, s21_test, i) == 0, "s21_strncpy №1 failed");
}
END_TEST

START_TEST(test_strncpy_comparsion2) {
  char *original = "";
  char test[100] = "\0";
  char s21_test[100] = "\0";
  int i = 10;

  s21_strncpy(s21_test, original, i);
  strncpy(test, original, i);

  ck_assert_msg(strncmp(test, s21_test, i) == 0,
                "s21_strncpy №2 failed: dest=%s, s21_dest=%s", test, s21_test);
}
END_TEST

START_TEST(test_strncpy_comparsion3) {
  char *original = "\0";
  char test[100] = "\0";
  char s21_test[100] = "\0";
  int i = 10;
  s21_strncpy(s21_test, original, i);
  strncpy(test, original, i);

  ck_assert_msg(strncmp(test, s21_test, i) == 0,
                "s21_strncpy №3 failed: dest=%s, s21_dest=%s", test, s21_test);
}
END_TEST

START_TEST(test_strncpy_comparsion5) {
  char *original = "123";
  char test[3] = "\0";
  char s21_test[3] = "\0";
  int i = 3;

  s21_strncpy(s21_test, original, i);
  strncpy(test, original, i);

  ck_assert_msg(strncmp(test, s21_test, i) == 0, "s21_strncpy №5 failed");
}
END_TEST

START_TEST(test_strncpy_comparsion7) {
  char *original = "12\0 3";
  char test[7] = "\0";
  char s21_test[7] = "\0";
  int i = 7;

  s21_strncpy(s21_test, original, i);
  strncpy(test, original, i);

  ck_assert_msg(strncmp(test, s21_test, i) == 0, "s21_strncpy №7 failed");
}
END_TEST

START_TEST(test_strncpy_comparsion8) {
  char original[10] = "12345\0006789";
  char test[10] = "111111111";
  char s21_test[10] = "111111111";
  int i = 3;

  s21_strncpy(s21_test, original, i);
  strncpy(test, original, i);

  ck_assert_msg(strncmp(test, s21_test, i) == 0, "s21_strncpy №8 failed");
}
END_TEST

START_TEST(test_strncpy_comparsion9) {
  char original[10] = "12345\0006789";
  char test[10] = "111111111";
  char s21_test[10] = "111111111";
  int i = 7;

  s21_strncpy(s21_test, original, i);
  strncpy(test, original, i);

  ck_assert_msg(strncmp(test, s21_test, i) == 0, "s21_strncpy №9 failed");
}
END_TEST

//блок дополнительных функций

// strok
START_TEST(test_strtok_comparsion) {
  char str[24] = "test1/test2/test3/test4";
  char str21[24] = "test1/test2/test3/test4";
  char separator[10] = "/";

  char *test_str = strtok(str, separator);
  char *s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok did not reach the end");
}
END_TEST

START_TEST(test_strtok_comparsion2) {
  char str[24] = "test1,test2,test3,test4";
  char str21[24] = "test1,test2,test3,test4";
  char separator[10] = ",";
  char *test_str;
  char *s21_str;

  test_str = strtok(str, separator);
  s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok №2 failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok 2 did not reach the end");
}
END_TEST

START_TEST(test_strtok_comparsion3) {
  char str[1] = "";
  char str21[1] = "";
  char separator[10] = ",";
  char *test_str;
  char *s21_str;

  test_str = strtok(str, separator);
  s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok №3 failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok 3 did not reach the end");
}
END_TEST

START_TEST(test_strtok_comparsion4) {
  char str[50] = "test1//test2//test3//test4";
  char str21[50] = "test1//test2//test3//test4";
  char separator[10] = "//";
  char *test_str;
  char *s21_str;

  test_str = strtok(str, separator);
  s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok №4 failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok 4 did not reach the end");
}
END_TEST

START_TEST(test_strtok_comparsion5) {
  char str[24] = "test1";
  char str21[24] = "test1";
  char separator[10] = "/";
  char *test_str;
  char *s21_str;

  test_str = strtok(str, separator);
  s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok №5 failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok 5 did not reach the end");
}
END_TEST

START_TEST(test_strtok_comparsion6) {
  char str[24] = "test1////test2/test3/";
  char str21[24] = "test1////test2/test3/";
  char separator[10] = "/";
  char *test_str;
  char *s21_str;

  test_str = strtok(str, separator);
  s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok №6 failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok 6 did not reach the end");
}
END_TEST

START_TEST(test_strtok_comparsion7) {
  char str[24] = "test1\ttest2\n\ntest3\t\t";
  char str21[24] = "test1\ttest2\n\ntest3\t\t";
  char separator[10] = "\t\n";
  char *test_str;
  char *s21_str;

  test_str = strtok(str, separator);
  s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok №7 failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok 7 did not reach the end");
}
END_TEST

START_TEST(test_strtok_comparsion8) {
  char str[24] = "test1%test2%test3";
  char str21[24] = "test1%test2%test3";
  char separator[10] = "%";
  char *test_str;
  char *s21_str;

  test_str = strtok(str, separator);
  s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok №8 failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok 8 did not reach the end");
}
END_TEST

START_TEST(test_strtok_comparsion9) {
  char *str = "\0";
  char *str21 = "\0";
  char separator[] = ",";
  char *test_str;
  char *s21_str;

  test_str = strtok(str, separator);
  s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok №8 failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok 9 did not reach the end");
}
END_TEST

START_TEST(test_strtok_comparsion10) {
  char str[] = "\0";
  char str21[] = "\0";
  char separator[] = "\0";
  char *test_str;
  char *s21_str;

  test_str = strtok(str, separator);
  s21_str = s21_strtok(str21, separator);

  while (test_str != NULL && s21_str != NULL) {
    ck_assert_msg(strcmp(test_str, s21_str) == 0, "s21_strtok №8 failed");
    test_str = strtok(NULL, separator);
    s21_str = s21_strtok(NULL, separator);
  }

  ck_assert_msg(s21_str == s21_NULL, "s21_strtok 10 did not reach the end");
}
END_TEST

// strerror

// strcat

START_TEST(test_strcat_comparsion) {
  char str[1024] = "first string";
  char s21_dst[1024] = "second string";
  char test_dst[1024] = "second string";

  s21_strcat(s21_dst, str);
  strcat(test_dst, str);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strcat failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

START_TEST(test_strcat_comparsion2) {
  char str[1024] = "";
  char s21_dst[1024] = "second string";
  char test_dst[1024] = "second string";

  s21_strcat(s21_dst, str);
  strcat(test_dst, str);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strcat 2 failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

START_TEST(test_strcat_comparsion3) {
  char str[1024] = "";
  char s21_dst[1024] = "";
  char test_dst[1024] = "";

  s21_strcat(s21_dst, str);
  strcat(test_dst, str);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strcat 3 failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

START_TEST(test_strcat_comparsion4) {
  char str[1024] = "first string";
  char s21_dst[1024] = "";
  char test_dst[1024] = "";

  s21_strcat(s21_dst, str);
  strcat(test_dst, str);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strcat 4 failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

START_TEST(test_strcat_comparsion5) {
  char str[1024] = "first string";
  char s21_dst[1024] = "second string";
  char test_dst[1024] = "second string";

  s21_strcat(s21_dst, str);
  strcat(test_dst, str);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strcat 5 failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

// strncat

START_TEST(test_strncat_comparsion) {
  char str[1024] = "first string";
  char s21_dst[1024] = "second string";
  char test_dst[1024] = "second string";
  int i = 5;

  s21_strncat(s21_dst, str, i);
  strncat(test_dst, str, i);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strncat failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

START_TEST(test_strncat_comparsion2) {
  char str[1024] = "first string";
  char s21_dst[1024] = "second string";
  char test_dst[1024] = "second string";
  int i = 0;

  s21_strncat(s21_dst, str, i);
  strncat(test_dst, str, i);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strncat 2 failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

START_TEST(test_strncat_comparsion3) {
  char str[1024] = "000";
  char s21_dst[1024] = "12345";
  char test_dst[1024] = "12345";
  int i = 5;

  s21_strncat(s21_dst, str, i);
  strncat(test_dst, str, i);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strncat 3 failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

START_TEST(test_strncat_comparsion4) {
  char str[1024] = "000";
  char s21_dst[1024] = "";
  char test_dst[1024] = "";
  int i = 5;

  s21_strncat(s21_dst, str, i);
  strncat(test_dst, str, i);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strncat 4 failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

START_TEST(test_strncat_comparsion5) {
  char str[1024] = "000";
  char s21_dst[1024] = "";
  char test_dst[1024] = "";
  int i = 1024;

  s21_strncat(s21_dst, str, i);
  strncat(test_dst, str, i);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strncat 5 failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

START_TEST(test_strncat_comparsion6) {
  char str[1024] = "000";
  char s21_dst[1024] = "";
  char test_dst[1024] = "";
  int i = 1024;

  s21_strncat(s21_dst, str, i);
  strncat(test_dst, str, i);

  ck_assert_msg(strcmp(s21_dst, test_dst) == 0,
                "s21_strncat 6 failed: test_dst = %s, s21_dst = %s", test_dst,
                s21_dst);
}
END_TEST

// s21_strerr

START_TEST(test_strerr) {
  char test_err[200];
  char s21_err[200];
  for (int err = 0; err <= 160; err++) {
    strcpy(test_err, strerror(err));
    strcpy(s21_err, s21_strerror(err));

    ck_assert_msg(strcmp(test_err, s21_err) == 0,
                  "s21_strncat 6 failed: test_dst = %s, s21_dst = %s", test_err,
                  s21_err);
  }
}
END_TEST

START_TEST(test_s21_sprintf_s) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Hello, %s!", "World");
  test_return = sprintf(str_test, "Hello, %s!", "World");
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_s failed: str_test = %s, s21_str = %s, s21_return "
                "= %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_s2) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Number, %s", "12345678910");
  test_return = sprintf(str_test, "Number, %s", "12345678910");
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_s №2 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_s3) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Rus, %s", "Абырвалг");
  test_return = sprintf(str_test, "Rus, %s", "Абырвалг");
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_s №3 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_s4) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "%s", "");
  test_return = sprintf(str_test, "%s", "");
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_s №4 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_s5) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "%s", "\0");
  test_return = sprintf(str_test, "%s", "\0");
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_s №5 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

//%d
START_TEST(test_s21_sprintf_d) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Decimal: %d", 123);
  test_return = sprintf(str_test, "Decimal: %d", 123);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_d failed: str_test = %s, s21_str = %s, s21_return "
                "= %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_d2) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Decimal: %d", -123);
  test_return = sprintf(str_test, "Decimal: %d", -123);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_d2 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_d3) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Decimal: %d", 0);
  test_return = sprintf(str_test, "Decimal: %d", 0);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_d3 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_d4) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Decimal: %d", 2147483647);
  test_return = sprintf(str_test, "Decimal: %d", 2147483647);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_d4 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

//%f
START_TEST(test_s21_sprintf_f) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Float: %f", 1.01);
  test_return = sprintf(str_test, "Float: %f", 1.01);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_f failed: str_test = %s, s21_str = %s, s21_return "
                "= %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_f2) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Float: %f", -1.01);
  test_return = sprintf(str_test, "Float: %f", -1.01);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_f2 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_f3) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Float: %f", 0.0);
  test_return = sprintf(str_test, "Float: %f", 0.0);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_f3 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_f4) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Float: %f", 1e+10);
  test_return = sprintf(str_test, "Float: %f", 1e+10);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_f4 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

//%c
START_TEST(test_s21_sprintf_c) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Char: %c", 'A');
  test_return = sprintf(str_test, "Char: %c", 'A');
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_c failed: str_test = %s, s21_str = %s, s21_return "
                "= %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_c2) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Char: %c", '2');
  test_return = sprintf(str_test, "Char: %c", '2');
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_c2 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_c3) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Char: %c", '\n');
  test_return = sprintf(str_test, "Char: %c", '\n');
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_c3 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

//%u
START_TEST(test_s21_sprintf_u) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Unsigned %u", 999);
  test_return = sprintf(str_test, "Unsigned %u", 999);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_u failed: str_test = %s, s21_str = %s, s21_return "
                "= %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_u2) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Unsigned %u", 500);
  test_return = sprintf(str_test, "Unsigned %u", 500);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_u2 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_u3) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Unsigned %u", 0);
  test_return = sprintf(str_test, "Unsigned %u", 0);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_u3 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_u4) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  s21_return = s21_sprintf(s21_str, "Unsigned %u", UINT_MAX);
  test_return = sprintf(str_test, "Unsigned %u", UINT_MAX);
  ck_assert_msg(strcmp(str_test, s21_str) == 0 && s21_return == test_return,
                "s21_sprintf_u4 failed: str_test = %s, s21_str = %s, "
                "s21_return = %d test_return = %d",
                str_test, s21_str, s21_return, test_return);
}
END_TEST

//%l и h

START_TEST(test_s21_sprintf_ld) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  long int test_val = 999;
  s21_return = s21_sprintf(s21_str, "Long %ld", test_val);
  test_return = sprintf(str_test, "Long %ld", test_val);
  ck_assert_msg(
      strcmp(str_test, s21_str) == 0 && s21_return == test_return,
      "s21_sprintf_ld failed: str_test = %s, s21_str = %s, s21_return "
      "= %d test_return = %d",
      str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_llu) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  unsigned long long int test_val = 999;
  s21_return = s21_sprintf(s21_str, "Unsigned Long Long %llu", test_val);
  test_return = sprintf(str_test, "Unsigned Long Long %llu", test_val);
  ck_assert_msg(
      strcmp(str_test, s21_str) == 0 && s21_return == test_return,
      "s21_sprintf_llu failed: str_test = %s, s21_str = %s, s21_return "
      "= %d test_return = %d",
      str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_hd) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  short int test_val = 999;
  s21_return = s21_sprintf(s21_str, "Short %hd", test_val);
  test_return = sprintf(str_test, "Short %hd", test_val);
  ck_assert_msg(
      strcmp(str_test, s21_str) == 0 && s21_return == test_return,
      "s21_sprintf_hd failed: str_test = %s, s21_str = %s, s21_return "
      "= %d test_return = %d",
      str_test, s21_str, s21_return, test_return);
}
END_TEST

START_TEST(test_s21_sprintf_hhu) {
  char str_test[1024], s21_str[1024];
  int s21_return, test_return;

  unsigned short int test_val = 999;
  s21_return = s21_sprintf(s21_str, "Unsigned Short %hhu", test_val);
  test_return = sprintf(str_test, "Unsigned Short %hhu", test_val);
  ck_assert_msg(
      strcmp(str_test, s21_str) == 0 && s21_return == test_return,
      "s21_sprintf_hhu failed: str_test = %s, s21_str = %s, s21_return "
      "= %d test_return = %d",
      str_test, s21_str, s21_return, test_return);
}
END_TEST

//все флаги подряд

START_TEST(one_d) {
  char str1[1000];
  char str2[1000];

  char *format = "This is number %d";
  int val = 789;

  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(width_d) {
  char str1[1000];
  char str2[1000];

  char *format = "This is number %10d";
  int val = 789;

  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(width_precision_d) {
  char str1[1000];
  char str2[1000];

  char *format = "This is number %10.8d";
  int val = 789;

  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(minus_width_d) {
  char str1[1000];
  char str2[1000];

  char *format = "%-5i";
  int val = 789;

  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(plus_width_i) {
  char str1[1000];
  char str2[1000];

  char *format = "%+10i";
  int val = 789;

  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(long_i) {
  char str1[1000];
  char str2[1000];

  char *format = "%+7.29li";
  long int val = 56789016;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(short_i) {
  char str1[1000];
  char str2[1000];

  char *format = "%-13.8hi";
  short int val = 4567;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(space_d) {
  char str1[1000];
  char str2[1000];

  char *format = "% d";
  int val = 7;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(u) {
  char str1[1000];
  char str2[1000];

  char *format = "%u";
  unsigned int val = 45678;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(width_u) {
  char str1[1000];
  char str2[1000];

  char *format = "%15u";
  unsigned int val = 45678;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(minus_width_u) {
  char str1[1000];
  char str2[1000];

  char *format = "%-16u";
  unsigned int val = 45678;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(precision_u) {
  char str1[1000];
  char str2[1000];

  char *format = "%.10u";
  unsigned int val = 45678;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(many_flags_u) {
  char str1[1000];
  char str2[1000];

  char *format = "% 5.10u";
  unsigned int val = 45678;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(short_u) {
  char str1[1000];
  char str2[1000];

  char *format = "%hu";
  unsigned short int val = 45678;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(long_u) {
  char str1[1000];
  char str2[1000];

  char *format = "%lu";
  unsigned long int val = 456789012345;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(many_u) {
  char str1[1000];
  char str2[1000];

  char *format = "%lu, %u, %hu, %.5u, %5.u";
  unsigned long int val = 456789012345;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 15, 4567, 98765, 3456),
      sprintf(str2, format, val, (unsigned)15, (unsigned short)4567,
              (unsigned)98765, (unsigned)3456));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(plus_d) {
  char str1[2000];
  char str2[2000];
  char *str3 = "%+d Test %+3.d Test %+5.7d TEST %8.2d";
  int val = -3015;
  int val2 = -712;
  int val3 = -99;
  int val4 = -2939;
  ck_assert_int_eq(sprintf(str1, str3, val, val2, val3, val4),
                   s21_sprintf(str2, str3, val, val2, val3, val4));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(minus_space_d) {
  char str1[2000];
  char str2[2000];
  char *str3 = "%- d Test %- 15d sdasda %- 15d sdsad %- d";
  int val = -3231;
  int val2 = -3231;
  int val3 = 3231;
  int val4 = 3231;
  ck_assert_int_eq(sprintf(str1, str3, val, val2, val3, val4),
                   s21_sprintf(str2, str3, val, val2, val3, val4));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST
// =============================== float
// ====================================================

START_TEST(width_f) {
  char str1[1000];
  char str2[1000];
  char *format = "%10lf";
  long double val = 45.67;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(precision_zero_f) {
  char str1[1000];
  char str2[1000];
  char *format = "%.0lf";
  long double val = 45.67;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(flag_space_f) {
  char str1[1000];
  char str2[1000];
  char *format = "% f";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(many_f) {
  char str1[1000];
  char str2[1000];
  char *format = "% .0f %.lf %lf %f %lf %lf";
  float val = 0;
  double val1 = 0;
  double val2 = 47890.1236;
  float val3 = 4.5;
  double val4 = 9851.51351;
  double val5 = 5438765.4561234;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val1, val2, val3, val4, val5),
                   sprintf(str2, format, val, val1, val2, val3, val4, val5));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// =============================== char
// ====================================================
START_TEST(one_c) {
  char str1[1000];
  char str2[1000];

  char *format = "%c";
  char val = 'Q';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(precision_c) {
  char str1[1000];
  char str2[1000];

  char *format = "%.5c";
  char val = 'q';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(flag_c) {
  char str1[1000];
  char str2[1000];

  char *format = "% -5c";
  char val = 'q';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(width_c) {
  char str1[1000];
  char str2[1000];

  char *format = "%15c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(many_c) {
  char str1[1000];
  char str2[1000];

  char *format = "%-5.3c%c%c%c%c This is sting";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                   sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(many_flags_c) {
  char str1[1000];
  char str2[1000];

  char *format = "%-5.3c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// =============================== string
// ==========================================

START_TEST(precision_s) {
  char str1[1000];
  char str2[1000];

  char *format = "%.10s";
  char *val = "This is string";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(width_s) {
  char str1[1000];
  char str2[1000];

  char *format = "%12s";
  char *val = "This is string";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_flags) {
  char str1[1000];
  char str2[1000];

  char *format = "%-11.10s";
  char *val = "This is string";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(many_s) {
  char str1[1000];
  char str2[1000];

  char *format = "%s%s%s%s";
  char *val = "This is string.";
  char *s1 = "";
  char *s2 = "And this is also a string 1234567890";
  char *s3 = "Need more strings";
  ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
                   sprintf(str2, format, val, s1, s2, s3));

  ck_assert_str_eq(str1, str2);
}
END_TEST
//пятое

// s21_to_upper

START_TEST(s21_to_upper_test1) {
  char test1[] = "This TEXT is test";
  char test2[] = "ChTo-to uHtePecHoe";

  char *str = s21_to_upper(test1);

  if (str) {
    ck_assert_str_eq(str, "THIS TEXT IS TEST");
    free(str);
  }

  str = s21_to_upper(test2);

  if (str) {
    ck_assert_str_eq(str, "CHTO-TO UHTEPECHOE");
    free(str);
  }
}

END_TEST

START_TEST(s21_to_upper_test2) {
  char s1[30] = "Hello, world!";
  char *s2 = s21_to_upper(s1);
  char s3[] = "HELLO, WORLD!";
  ck_assert_pstr_eq(s3, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_upper_test3) {
  char s1[30] = "\nh\t\\g123123";
  char *s2 = s21_to_upper(s1);
  char s3[] = "\nH\t\\G123123";
  ck_assert_pstr_eq(s3, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_upper_test4) {
  char s1[30] = "ALREADY UPPER";
  char *s2 = s21_to_upper(s1);
  char s3[] = "ALREADY UPPER";
  ck_assert_pstr_eq(s3, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_upper_test5) {
  char s1[30] = "";
  char *s2 = s21_to_upper(s1);
  char s3[] = "";
  ck_assert_pstr_eq(s3, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_upper_test6) {
  char s1[30] = "abcdefghijklmnopqrstuvwxyz";
  char *s2 = s21_to_upper(s1);
  char s3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  ck_assert_pstr_eq(s3, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_upper_test7) {
  char s1[30] = "_?};!234";
  char *s2 = s21_to_upper(s1);
  char s3[] = "_?};!234";
  ck_assert_pstr_eq(s3, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_upper_test8) {
  char *s1 = s21_NULL;
  char *s2 = s21_to_upper(s1);
  char *s3 = s21_NULL;
  ck_assert_pstr_eq(s3, s2);
  if (s2) free(s2);
}
END_TEST

// to lower

START_TEST(s21_to_lower_test) {
  char test1[] = "This TEXT is test";
  char test2[] = "ChTo-to uHtePecHoe";
  char *str = s21_to_lower(test1);

  if (str) {
    ck_assert_str_eq(str, "this text is test");
    free(str);
  }

  str = s21_to_lower(test2);

  if (str) {
    ck_assert_str_eq(str, "chto-to uhtepechoe");
    free(str);
  }
}

END_TEST

START_TEST(s21_to_lower_test1) {
  char s1[30] = "hello, world!";
  char s3[] = "hELLO, WORLD!";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_lower_test2) {
  char s1[30] = "\nh\t\\g123123";
  char s3[] = "\nH\t\\G123123";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_lower_test3) {
  char s1[30] = "already lower";
  char s3[] = "already lower";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_lower_test4) {
  char s1[30] = "";
  char s3[] = "";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_lower_test5) {
  char s1[30] = "abcdefghijklmnopqrstuvwxyz";
  char s3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_lower_test6) {
  char s1[30] = "_?};!234";
  char s3[] = "_?};!234";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(s21_to_lower_test7) {
  char *s1 = s21_NULL;
  char *s3 = s21_NULL;
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) free(s2);
}
END_TEST

// insert

START_TEST(test_insert_1) {
  char s1[30] = "hello, world!";
  char s3[] = "hELLO, WORLD!";
  char s4[] = "hello, hELLO, WORLD!world!";
  s21_size_t num = 7;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_insert_2) {
  char s1[30] = "";
  char s3[] = "";
  char *s4 = s21_NULL;
  s21_size_t num = 7;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_insert_3) {
  char *s1 = s21_NULL;
  char s3[] = "";
  char *s4 = s21_NULL;
  s21_size_t num = 0;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_insert_4) {
  char s1[30] = "abcdefghij";
  char s3[] = "\'I WAS HERE\'";
  char s4[] = "abc\'I WAS HERE\'defghij";
  s21_size_t num = 3;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_insert_5) {
  char s1[30] = "abc";
  char s3[] = "333";
  char *s4 = s21_NULL;
  s21_size_t num = 10;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_insert_6) {
  char s1[30] = "hello, world!";
  char s3[] = "hELLO, WORLD!";
  char *s4 = s21_NULL;
  s21_size_t num = -1;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_insert_7) {
  char *s1 = s21_NULL;
  char *s3 = s21_NULL;
  char *s4 = s21_NULL;
  s21_size_t num = 0;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_insert_8) {
  char s1[30] = "";
  char s3[] = "";
  char s4[] = "";
  s21_size_t num = 0;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_insert_9) {
  char s1[] = "wtf";
  char *s3 = s21_NULL;
  char *s4 = s21_NULL;
  s21_size_t num = 0;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_insert_10) {
  char s1[] = "";
  char *s3 = s21_NULL;
  char *s4 = s21_NULL;
  s21_size_t num = 0;
  char *s2 = s21_insert(s1, s3, num);
  ck_assert_pstr_eq(s2, s4);
  if (s2) free(s2);
}
END_TEST

// trim

START_TEST(test_trim_1) {  //валится если не прибавлять 1
  char s1[30] = "-?hello, world!";
  char s3[] = "!?-";
  char s4[] = "hello, world";
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_trim_2) {
  char s1[30] = "";
  char s3[] = "";
  char *s4 = "";
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_trim_3) {
  char *s1 = s21_NULL;
  char s3[] = "";
  char *s4 = s21_NULL;
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_trim_4) {  //валится если не прибавлять 1 и прибавлять 1
  char s1[30] = "!!!abcdefghij!?!";
  char s3[] = "!?";
  char s4[] = "abcdefghij";
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_trim_5) {
  char s1[30] = "abc";
  char s3[] = "333";
  char *s4 = "abc";
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_trim_6) {  //валится если прибавлять 1
  char s1[30] = "hello, world!";
  char s3[] = "?!";
  char *s4 = "hello, world";
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_trim_7) {
  char *s1 = s21_NULL;
  char *s3 = s21_NULL;
  char *s4 = s21_NULL;
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_trim_8) {
  char s1[30] = "";
  char s3[] = "";
  char s4[] = "";
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_trim_9) {
  char s1[] = " wtf ";
  char *s3 = s21_NULL;
  char *s4 = " wtf ";
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

START_TEST(test_trim_10) {
  char s1[] = " wtf ";
  char *s3 = "";
  char *s4 = " wtf ";
  char *s2 = s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, s2);
  if (s2) free(s2);
}
END_TEST

Suite *string_suite_create(void) {
  Suite *suite = suite_create("String Functions");
  TCase *tcase_core = tcase_create("Core of string functions");
  //   //функции сравнения
  //   // strcmp

  //   // strncmp

  tcase_add_test(tcase_core, test_strncmp_comparsion2);
  tcase_add_test(tcase_core, test_strncmp_comparsion3);
  tcase_add_test(tcase_core, test_strncmp_comparsion4);
  tcase_add_test(tcase_core, test_strncmp_comparsion6);
  tcase_add_test(tcase_core, test_strncmp_comparsion7);
  tcase_add_test(tcase_core, test_strncmp_comparsion8);
  tcase_add_test(tcase_core, test_strncmp_comparsion9);
  tcase_add_test(tcase_core, test_strncmp_comparsion10);
  tcase_add_test(tcase_core, test_strncmp_comparsion11);
  tcase_add_test(tcase_core, test_strncmp_comparsion12);
  tcase_add_test(tcase_core, test_strncmp_comparsion13);
  //   //функции вычисления
  //   // strlen
  tcase_add_test(tcase_core, test_strlen_comparsion);
  tcase_add_test(tcase_core, test_strlen_comparsion2);
  tcase_add_test(tcase_core, test_strlen_comparsion3);
  tcase_add_test(tcase_core, test_strlen_comparsion4);
  tcase_add_test(tcase_core, test_strlen_comparsion5);
  tcase_add_test(tcase_core, test_strlen_comparsion6);
  tcase_add_test(tcase_core, test_strlen_comparsion7);
  tcase_add_test(tcase_core, test_strlen_comparsion8);
  tcase_add_test(tcase_core, test_strlen_comparsion9);
  tcase_add_test(tcase_core, test_strlen_comparsion10);
  tcase_add_test(tcase_core, test_strlen_comparsion11);
  //   // strspn
  tcase_add_test(tcase_core, test_strspn_comparsion);
  tcase_add_test(tcase_core, test_strspn_comparsion2);
  tcase_add_test(tcase_core, test_strspn_comparsion2_1);
  tcase_add_test(tcase_core, test_strspn_comparsion2_2);
  tcase_add_test(tcase_core, test_strspn_comparsion2_3);
  tcase_add_test(tcase_core, test_strspn_comparsion2_4);
  tcase_add_test(tcase_core, test_strspn_comparsion2_5);
  tcase_add_test(tcase_core, test_strspn_comparsion3);
  tcase_add_test(tcase_core, test_strspn_comparsion4);
  tcase_add_test(tcase_core, test_strspn_comparsion5);
  tcase_add_test(tcase_core, test_strspn_comparsion6);
  tcase_add_test(tcase_core, test_strspn_comparsion7);
  tcase_add_test(tcase_core, test_strspn_comparsion8);
  tcase_add_test(tcase_core, test_strspn_comparsion9);
  tcase_add_test(tcase_core, test_strspn_comparsion10);
  tcase_add_test(tcase_core, test_strspn_comparsion11);
  tcase_add_test(tcase_core, test_strspn_comparsion12);
  // strcspn
  tcase_add_test(tcase_core, test_strcspn_comparsion);
  tcase_add_test(tcase_core, test_strcspn_comparsion2);
  tcase_add_test(tcase_core, test_strcspn_comparsion2_1);
  tcase_add_test(tcase_core, test_strcspn_comparsion2_2);
  tcase_add_test(tcase_core, test_strcspn_comparsion2_3);
  tcase_add_test(tcase_core, test_strcspn_comparsion2_4);
  tcase_add_test(tcase_core, test_strcspn_comparsion2_5);
  tcase_add_test(tcase_core, test_strcspn_comparsion3);
  tcase_add_test(tcase_core, test_strcspn_comparsion4);
  tcase_add_test(tcase_core, test_strcspn_comparsion5);
  tcase_add_test(tcase_core, test_strcspn_comparsion6);
  tcase_add_test(tcase_core, test_strcspn_comparsion7);
  tcase_add_test(tcase_core, test_strcspn_comparsion8);
  tcase_add_test(tcase_core, test_strcspn_comparsion9);
  tcase_add_test(tcase_core, test_strcspn_comparsion10);
  tcase_add_test(tcase_core, test_strcspn_comparsion11);
  tcase_add_test(tcase_core, test_strcspn_comparsion12);
  // memcmp
  tcase_add_test(tcase_core, test_memcmp_comparsion);
  tcase_add_test(tcase_core, test_memcmp_comparsion2);
  tcase_add_test(tcase_core, test_memcmp_comparsion3);
  tcase_add_test(tcase_core, test_memcmp_comparsion4);
  tcase_add_test(tcase_core, test_memcmp_comparsion5);
  tcase_add_test(tcase_core, test_memcmp_comparsion6);
  tcase_add_test(tcase_core, test_memcmp_comparsion7);
  tcase_add_test(tcase_core, test_memcmp_comparsion8);
  tcase_add_test(tcase_core, test_memcmp_comparsion9);
  tcase_add_test(tcase_core, test_memcmp_comparsion10);
  tcase_add_test(tcase_core, test_memcmp_comparsion11);
  tcase_add_test(tcase_core, test_memcmp_comparsion12);
  // strchr
  tcase_add_test(tcase_core, test_strchr_comparsion);
  tcase_add_test(tcase_core, test_strchr_comparsion2);
  tcase_add_test(tcase_core, test_strchr_comparsion3);
  tcase_add_test(tcase_core, test_strchr_comparsion4);
  tcase_add_test(tcase_core, test_strchr_comparsion5);
  tcase_add_test(tcase_core, test_strchr_comparsion6);
  tcase_add_test(tcase_core, test_strchr_comparsion7);
  tcase_add_test(tcase_core, test_strchr_comparsion8);
  tcase_add_test(tcase_core, test_strchr_comparsion9);
  tcase_add_test(tcase_core, test_strchr_comparsion10);
  tcase_add_test(tcase_core, test_strchr_comparsion11);
  tcase_add_test(tcase_core, test_strchr_comparsion12);
  // strpbrk
  tcase_add_test(tcase_core, test_strpbrk_comparsion);
  tcase_add_test(tcase_core, test_strpbrk_comparsion2);
  tcase_add_test(tcase_core, test_strpbrk_comparsion3);
  tcase_add_test(tcase_core, test_strpbrk_comparsion4);
  tcase_add_test(tcase_core, test_strpbrk_comparsion5);
  tcase_add_test(tcase_core, test_strpbrk_comparsion6);
  tcase_add_test(tcase_core, test_strpbrk_comparsion7);
  tcase_add_test(tcase_core, test_strpbrk_comparsion8);
  tcase_add_test(tcase_core, test_strpbrk_comparsion9);
  tcase_add_test(tcase_core, test_strpbrk_comparsion10);
  tcase_add_test(tcase_core, test_strpbrk_comparsion11);
  tcase_add_test(tcase_core, test_strpbrk_comparsion12);
  // strrchr
  tcase_add_test(tcase_core, test_strrchr_comparsion);
  tcase_add_test(tcase_core, test_strrchr_comparsion2);
  tcase_add_test(tcase_core, test_strrchr_comparsion3);
  tcase_add_test(tcase_core, test_strrchr_comparsion4);
  tcase_add_test(tcase_core, test_strrchr_comparsion5);
  tcase_add_test(tcase_core, test_strrchr_comparsion6);
  tcase_add_test(tcase_core, test_strrchr_comparsion7);
  tcase_add_test(tcase_core, test_strrchr_comparsion8);
  tcase_add_test(tcase_core, test_strrchr_comparsion9);
  tcase_add_test(tcase_core, test_strrchr_comparsion10);
  tcase_add_test(tcase_core, test_strrchr_comparsion11);
  tcase_add_test(tcase_core, test_strrchr_comparsion12);
  tcase_add_test(tcase_core, test_strrchr_comparsion13);
  tcase_add_test(tcase_core, test_strrchr_comparsion14);
  // memchr
  tcase_add_test(tcase_core, test_memchr_comparsion);
  tcase_add_test(tcase_core, test_memchr_comparsion2);
  tcase_add_test(tcase_core, test_memchr_comparsion3);
  // tcase_add_test(tcase_core, test_memchr_comparsion4);
  // tcase_add_test(tcase_core, test_memchr_comparsion5);
  // tcase_add_test(tcase_core, test_memchr_comparsion6);
  // strstr
  tcase_add_test(tcase_core, test_strstr_comparsion);
  tcase_add_test(tcase_core, test_strstr_comparsion2);
  tcase_add_test(tcase_core, test_strstr_comparsion3);
  tcase_add_test(tcase_core, test_strstr_comparsion4);
  tcase_add_test(tcase_core, test_strstr_comparsion5);
  tcase_add_test(tcase_core, test_strstr_comparsion6);
  tcase_add_test(tcase_core, test_strstr_comparsion7);
  tcase_add_test(tcase_core, test_strstr_comparsion8);
  tcase_add_test(tcase_core, test_strstr_comparsion9);
  tcase_add_test(tcase_core, test_strstr_comparsion10);
  tcase_add_test(tcase_core, test_strstr_comparsion11);
  tcase_add_test(tcase_core, test_strstr_comparsion12);
  tcase_add_test(tcase_core, test_strstr_comparsion13);
  //функции копирования

  // memcpy
  tcase_add_test(tcase_core, test_memcpy_comparsion);
  tcase_add_test(tcase_core, test_memcpy_comparsion2);
  tcase_add_test(tcase_core, test_memcpy_comparsion3);
  tcase_add_test(tcase_core, test_memcpy_comparsion4);
  tcase_add_test(tcase_core, test_memcpy_comparsion5);
  tcase_add_test(tcase_core, test_memcpy_comparsion6);
  tcase_add_test(tcase_core, test_memcpy_comparsion7);
  tcase_add_test(tcase_core, test_memcpy_comparsion9);
  // memmove
  tcase_add_test(tcase_core, test_memmove_comparsion);
  tcase_add_test(tcase_core, test_memmove_comparsion2);
  tcase_add_test(tcase_core, test_memmove_comparsion3);
  tcase_add_test(tcase_core, test_memmove_comparsion4);
  tcase_add_test(tcase_core, test_memmove_comparsion5);
  tcase_add_test(tcase_core, test_memmove_comparsion6);
  tcase_add_test(tcase_core, test_memmove_comparsion7);

  // memset
  tcase_add_test(tcase_core, test_memset_comparsion);
  tcase_add_test(tcase_core, test_memset_comparsion2);
  tcase_add_test(tcase_core, test_memset_comparsion3);
  tcase_add_test(tcase_core, test_memset_comparsion4);
  tcase_add_test(tcase_core, test_memset_comparsion5);
  tcase_add_test(tcase_core, test_memset_comparsion7);
  tcase_add_test(tcase_core, test_memset_comparsion8);

  // strcpy
  tcase_add_test(tcase_core, test_strcpy_comparsion);
  tcase_add_test(tcase_core, test_strcpy_comparsion2);
  tcase_add_test(tcase_core, test_strcpy_comparsion3);
  tcase_add_test(tcase_core, test_strcpy_comparsion5);
  tcase_add_test(tcase_core, test_strcpy_comparsion6);
  tcase_add_test(tcase_core, test_strcpy_comparsion7);
  tcase_add_test(tcase_core, test_strcpy_comparsion8);
  // strncpy
  tcase_add_test(tcase_core, test_strncpy_comparsion);
  tcase_add_test(tcase_core, test_strncpy_comparsion2);
  tcase_add_test(tcase_core, test_strncpy_comparsion3);
  tcase_add_test(tcase_core, test_strncpy_comparsion5);
  tcase_add_test(tcase_core, test_strncpy_comparsion7);
  tcase_add_test(tcase_core, test_strncpy_comparsion8);
  tcase_add_test(tcase_core, test_strncpy_comparsion9);

  //блок дополнительных функций

  // strtok
  tcase_add_test(tcase_core, test_strtok_comparsion);
  tcase_add_test(tcase_core, test_strtok_comparsion2);
  tcase_add_test(tcase_core, test_strtok_comparsion3);
  tcase_add_test(tcase_core, test_strtok_comparsion4);
  tcase_add_test(tcase_core, test_strtok_comparsion5);
  tcase_add_test(tcase_core, test_strtok_comparsion6);
  tcase_add_test(tcase_core, test_strtok_comparsion7);
  tcase_add_test(tcase_core, test_strtok_comparsion8);
  tcase_add_test(tcase_core, test_strtok_comparsion9);
  tcase_add_test(tcase_core, test_strtok_comparsion10);

  // s21_strcat
  tcase_add_test(tcase_core, test_strcat_comparsion);
  tcase_add_test(tcase_core, test_strcat_comparsion2);
  tcase_add_test(tcase_core, test_strcat_comparsion3);
  tcase_add_test(tcase_core, test_strcat_comparsion4);
  tcase_add_test(tcase_core, test_strcat_comparsion5);

  // s21_strncat
  tcase_add_test(tcase_core, test_strncat_comparsion);
  tcase_add_test(tcase_core, test_strncat_comparsion2);
  tcase_add_test(tcase_core, test_strncat_comparsion3);
  tcase_add_test(tcase_core, test_strncat_comparsion4);
  tcase_add_test(tcase_core, test_strncat_comparsion5);
  tcase_add_test(tcase_core, test_strncat_comparsion6);

  // s21_strerr
  tcase_add_test(tcase_core, test_strerr);

  //второе задание printf
  //%s
  tcase_add_test(tcase_core, test_s21_sprintf_s);
  tcase_add_test(tcase_core, test_s21_sprintf_s2);
  tcase_add_test(tcase_core, test_s21_sprintf_s3);
  tcase_add_test(tcase_core, test_s21_sprintf_s4);
  tcase_add_test(tcase_core, test_s21_sprintf_s5);
  //%d
  tcase_add_test(tcase_core, test_s21_sprintf_d);
  tcase_add_test(tcase_core, test_s21_sprintf_d2);
  tcase_add_test(tcase_core, test_s21_sprintf_d3);
  tcase_add_test(tcase_core, test_s21_sprintf_d4);
  //%f
  tcase_add_test(tcase_core, test_s21_sprintf_f);
  tcase_add_test(tcase_core, test_s21_sprintf_f2);
  tcase_add_test(tcase_core, test_s21_sprintf_f3);
  tcase_add_test(tcase_core, test_s21_sprintf_f4);
  //%c
  tcase_add_test(tcase_core, test_s21_sprintf_c);
  tcase_add_test(tcase_core, test_s21_sprintf_c2);
  tcase_add_test(tcase_core, test_s21_sprintf_c3);
  //%u
  tcase_add_test(tcase_core, test_s21_sprintf_u);
  tcase_add_test(tcase_core, test_s21_sprintf_u2);
  tcase_add_test(tcase_core, test_s21_sprintf_u3);
  tcase_add_test(tcase_core, test_s21_sprintf_u4);
  //%l и h
  tcase_add_test(tcase_core, test_s21_sprintf_ld);
  tcase_add_test(tcase_core, test_s21_sprintf_llu);
  tcase_add_test(tcase_core, test_s21_sprintf_hd);
  tcase_add_test(tcase_core, test_s21_sprintf_hhu);
  // все флаги подряд

  tcase_add_test(tcase_core, one_d);
  tcase_add_test(tcase_core, width_d);
  tcase_add_test(tcase_core, width_precision_d);
  tcase_add_test(tcase_core, minus_width_d);
  tcase_add_test(tcase_core, plus_width_i);
  tcase_add_test(tcase_core, long_i);
  tcase_add_test(tcase_core, short_i);
  tcase_add_test(tcase_core, space_d);
  tcase_add_test(tcase_core, u);
  tcase_add_test(tcase_core, width_u);
  tcase_add_test(tcase_core, minus_width_u);
  tcase_add_test(tcase_core, precision_u);
  tcase_add_test(tcase_core, many_flags_u);
  tcase_add_test(tcase_core, short_u);
  tcase_add_test(tcase_core, long_u);
  tcase_add_test(tcase_core, many_u);
  tcase_add_test(tcase_core, plus_d);
  tcase_add_test(tcase_core, minus_space_d);

  tcase_add_test(tcase_core, width_f);
  tcase_add_test(tcase_core, precision_zero_f);

  tcase_add_test(tcase_core, flag_space_f);
  tcase_add_test(tcase_core, many_f);

  tcase_add_test(tcase_core, one_c);
  tcase_add_test(tcase_core, precision_c);
  tcase_add_test(tcase_core, flag_c);
  tcase_add_test(tcase_core, width_c);
  tcase_add_test(tcase_core, many_c);
  tcase_add_test(tcase_core, many_flags_c);

  tcase_add_test(tcase_core, precision_s);
  tcase_add_test(tcase_core, width_s);
  tcase_add_test(tcase_core, string_flags);
  tcase_add_test(tcase_core, many_s);

  //пятое
  // to upper
  tcase_add_test(tcase_core, s21_to_upper_test1);
  tcase_add_test(tcase_core, s21_to_upper_test2);
  tcase_add_test(tcase_core, s21_to_upper_test3);
  tcase_add_test(tcase_core, s21_to_upper_test4);
  tcase_add_test(tcase_core, s21_to_upper_test5);
  tcase_add_test(tcase_core, s21_to_upper_test6);
  tcase_add_test(tcase_core, s21_to_upper_test7);
  tcase_add_test(tcase_core, s21_to_upper_test8);
  // to lower
  tcase_add_test(tcase_core, s21_to_lower_test1);
  tcase_add_test(tcase_core, s21_to_lower_test2);
  tcase_add_test(tcase_core, s21_to_lower_test3);
  tcase_add_test(tcase_core, s21_to_lower_test4);
  tcase_add_test(tcase_core, s21_to_lower_test5);
  tcase_add_test(tcase_core, s21_to_lower_test6);
  tcase_add_test(tcase_core, s21_to_lower_test7);
  tcase_add_test(tcase_core, s21_to_lower_test);

  // insert
  tcase_add_test(tcase_core, test_insert_1);
  tcase_add_test(tcase_core, test_insert_2);
  tcase_add_test(tcase_core, test_insert_3);
  tcase_add_test(tcase_core, test_insert_4);
  tcase_add_test(tcase_core, test_insert_5);
  tcase_add_test(tcase_core, test_insert_6);
  tcase_add_test(tcase_core, test_insert_7);
  tcase_add_test(tcase_core, test_insert_8);
  tcase_add_test(tcase_core, test_insert_9);
  tcase_add_test(tcase_core, test_insert_10);

  // trim
  tcase_add_test(tcase_core, test_trim_1);
  tcase_add_test(tcase_core, test_trim_2);
  tcase_add_test(tcase_core, test_trim_3);
  tcase_add_test(tcase_core, test_trim_4);
  tcase_add_test(tcase_core, test_trim_5);
  tcase_add_test(tcase_core, test_trim_6);
  tcase_add_test(tcase_core, test_trim_7);
  tcase_add_test(tcase_core, test_trim_8);
  tcase_add_test(tcase_core, test_trim_9);
  tcase_add_test(tcase_core, test_trim_10);

  suite_add_tcase(suite, tcase_core);
  return suite;
}

int main(void) {
  Suite *suite = string_suite_create();
  SRunner *suite_runner = srunner_create(suite);
  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);

  if (failed_count != 0) {
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
