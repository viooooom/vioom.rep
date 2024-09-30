#include <cmath>
#include <iostream>
using namespace std;
int integer1(int l1)
{
    return l1 / 100;
}
int integer2(int m1)
{
    return m1 / 1000;
}
int integer3(int byte)
{
    return byte / 1024;
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
    return (a / 100) % 10;
}
int integer18(int a)
{
    return a / 1000;
}
int integer19(int n)
{
    return n / 60;
}
int integer20(int n)
{
    return n / 3600;
}
int integer21(int n)
{
    return n % 60;
}
int integer22(int n)
{
    return n % 3600;
}
int integer23(int n)
{
    return (n % 3600) / 60;
}
int integer24(int k)
{
    return ((k - 1) % 7 + 1) % 7;
}

int integer25(int k)
{
    return ((k - 1) % 7 + 3) % 7;
}

int integer26(int k)
{
    return (((k - 1) % 7 + 1) % 7 + 1);
}

int integer27(int k)
{
    return ((k + 1) % 7) + 1;
}

int integer28(int k, int n)
{
    return ((k - 1 + n - 1) % 7) + 1;
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
    return (a + 99) / 100;
}