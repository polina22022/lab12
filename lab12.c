#include <stdio.h>
#include <locale.h>
int main() {
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