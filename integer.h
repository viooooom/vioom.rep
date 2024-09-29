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