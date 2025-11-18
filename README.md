# Домашнее задание к работе 12
## Условие задачи
 Напишите программу, которая вычисляет размер основных типов данных в байтах:

1) char

2) short int

3) unsigned short int

4) int

5) unsigned char

6) wchar_t

7) long long int

8) size_t

9) float

10) double

11) signed int
## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Ввод данных сторон А,В,С:
3.  Проверить условие существования треугольника:
   - если (a + b > c) и (a + c > b) и (b + c > a), то продолжить.
   - иначе вывести сообщение о недопустимых сторонах и завершить.
4. Вывести меню:
   - 1. Вычислить площадь
   - 2. Нарисовать треугольник
   - 3. Описание 
5. Считать выбор пользователя.
6. В зависимости от выбора:
   - 1: вызвать `area_triangle(a, b, c)` и вывести результат.
   - 2: вызвать `draw_triangle((int)a)`.
   - 3: вызвать `name(3)`.
7. **Конец**
### Блок-схема
<img width="471" height="539" alt="image" src="https://github.com/user-attachments/assets/79391160-7b3c-49b4-b6bb-f0429d9cd31f" />
https://github.com/polina22022/lab10/blob/master/lab10.drawio



## 2. Реализация программы
#include <stdio.h>

#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    char c1, c2;
    short s1, s2;
    unsigned short us1, us2;
    int i1, i2;
    unsigned char uc1, uc2;
    wchar_t wc1, wc2;
    long long ll1, ll2;
    size_t st1, st2;
    float f1, f2;
    double d1, d2;
    signed int si1, si2;
    printf("char: %ld байт\n", (char*)(&c2) - (char*)(&c1));
    printf("short int: %ld байт\n", (short*)(&s2) - (short*)(&s1));
    printf("unsigned short int: %ld байт\n", (unsigned short*)(&us2) - (unsigned short*)(&us1));
    printf("int: %ld байт\n", (int*)(&i2) - (int*)(&i1));
    printf("unsigned char: %ld байт\n", (unsigned char*)(&uc2) - (unsigned char*)(&uc1));
    printf("wchar_t: %ld байт\n", (wchar_t*)(&wc2) - (wchar_t*)(&wc1));
    printf("long long int: %ld байт\n", (long long*)(&ll2) - (long long*)(&ll1));
    printf("size_t: %ld байт\n", (size_t*)(&st2) - (size_t*)(&st1));
    printf("float: %ld байт\n", (float*)(&f2) - (float*)(&f1));
    printf("double: %ld байт\n", (double*)(&d2) - (double*)(&d1));
    printf("signed int: %ld байт\n", (signed int*)(&si2) - (signed int*)(&si1));

    return 0;
}

## 3. Результаты работы программы
char: 32 байт
short int: 16 байт
unsigned short int: 16 байт
int: 8 байт
unsigned char: 32 байт
wchar_t: 16 байт
long long int: 4 байт
size_t: 4 байт
float: 8 байт
double: 4 байт
signed int: 8 байт

## 4. Информация о разработчике
Медведева Полина бИЦ-252
