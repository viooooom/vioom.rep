#include <cmath>
#include <iostream>
using namespace std;
int integer1(int l1)
{
    int l2 = l1 / 100;
    return l2;
}
int integer2(int m1)
{
    int m2 = m1 / 1000;
    return m2;
}
int integer3(int byte)
{
    int kbyte = byte / 1024;
    return kbyte;
}
int integer4(int a, int b)
{
    if (a > b)
    {
        int c = a / b;
        std::cout << c << std::endl;
    }
    else
    {
        std::cout << "Нет решения" << std::endl;
    }
    return 0;
}
int integer5(int a, int b)
{
    if (a > b)
    {
        int c = a % b;
        std::cout << c << std::endl;
    }
    else
    {
        std::cout << "Нет решения" << std::endl;
    }
    return 0;
}
int integer6(int a)
{
    int tens = a / 10;
    int ones = a % 10;
    std::cout << tens << " " << ones << std::endl;
    return 0;
}
int integer7(int a)
{
    int tens = a / 10;
    int ones = a % 10;
    int sum = tens + ones;
    int prod = tens * ones;
    std::cout << sum << " " << prod << std::endl;
    return 0;
}
int integer8(int a)
{
    int tens = a / 10;
    int ones = a % 10;
    int sum = tens + ones;
    int res = ones * 10 + tens;
    std::cout << sum << " " << res << std::endl;
    return 0;
}
int integer9(int a)
{
    int hund = a / 100;
    return hund;
}
int integer10(int a)
{
    int ones = a % 10;
    int tens = (a / 10) % 10;
    std::cout << ones << " " << tens << std::endl;
    return 0;
}
int integer11(int a)
{
    int ones = a % 10;
    int tens = (a / 10) % 10;
    int hundreds = (a / 100) % 10;
    int sum = ones + tens + hundreds;
    int prod = ones * tens * hundreds;
    std::cout << sum << " " << prod << std::endl;
    return 0;
}
int integer12(int a)
{
    int ones = a % 10;
    int tens = (a / 10) % 10;
    int hundreds = (a / 100) % 10;
    int res = ones * 100 + tens * 10 + hundreds;
    return res;
}
int integer13(int a)
{
    int ones = a % 10;
    int tens = (a / 10) % 10;
    int hundreds = a / 100;
    int res = tens * 100 + ones * 10 + hundreds;
    return res;
}
int integer14(int a)
{
    int ones = a % 10;
    int tens = (a / 10) % 10;
    int hundreds = a / 100;
    int res = ones * 100 + hundreds * 10 + tens;
    return res;
}
int integer15(int a)
{
    int ones = a % 10;
    int tens = (a / 10) % 10;
    int hundreds = a / 100;
    int res = ones * 100 + hundreds * 10 + tens;
    return res;
}
int integer16(int a)
{
    int ones = a % 10;
    int tens = (a / 10) % 10;
    int hundreds = a / 100;
    int res = hundreds * 100 + ones * 10 + tens;
    return res;
}
int integer17(int a)
{
    int hund = (a / 100) % 10;
    return hund;
}
int integer18(int a)
{
    int thousands = a / 1000;
    return thousands;
}
int integer19(int n)
{
    int minutes = n / 60;
    return minutes;
}
int integer20(int n)
{
    int hours = n / 3600;
    return hours;
}
int integer21(int n)
{
    int sec_in_last_min = n % 60;
    return sec_in_last_min;
}
int integer22(int n)
{
    int sec_in_last_hour = n % 3600;
    return sec_in_last_hour;
}
int integer23(int n)
{
    int min_in_last_hour = (n % 3600) / 60;
    return min_in_last_hour;
}
int integer24(int k)
{
    int dofw = ((k - 1) % 7 + 1) % 7;
    return dofw;
}

int integer25(int k)
{
    int dowf = ((k - 1) % 7 + 3) % 7;
    return dowf;
}

int integer26(int k)
{
    int dowf = (((k - 1) % 7 + 1) % 7 + 1);
    return dowf;
}

int integer27(int k)
{
    int dowf = ((k + 1) % 7) + 1;
    return dowf;
}

int integer28(int k, int n)
{
    int dowf = ((k - 1 + n - 1) % 7) + 1;
    return dowf;
}

int integer29(int a, int b, int c)
{
    int x1 = (a / c) * (b / c);
    int x2 = (a * b) - x1 * (c * c);
    std::cout << x1 << " " << x2 << std::endl;
    return 0;
}

int integer30(int a)
{
    int century = (a + 99) / 100;
    return century;
}