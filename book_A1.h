#include <cmath>
#include <iostream>
using namespace std;
// 1.2.1
void task1(int a)
{
    int x1 = a % 10;
    int x2 = (a / 10) % 10;
    int x3 = (a / 100) % 10;
    int x4 = (a / 1000) % 10;
    std::cout << x4 << x3 << x2 << x1 << std::endl;
}
int task2(int k)
{
    return (k % 10) + ((k / 10) % 10) + ((k / 100) % 10);
}
int task3(int k)
{
    return (k / 100) % 10;
}
bool task4(int n)
{
    return ((n % 10) == ((n / 1000) % 10) && 
            ((n / 10) % 10) == ((n / 100) % 10));
}
bool task5(int n)
{
    return ((n % 10) == ((n / 1000) % 10) || 
            ((n / 10) % 10) == ((n / 100) % 10)) || 
            ((n % 10) == ((n / 100) % 10) || 
            ((n / 10) % 10) == ((n / 1000) % 10));
}
int task6(int n)
{
    int a = n / 1000;
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int d = n % 10;
    int count = (a == b) + (a == c) + (a == d) + (b == c) + (b == d) + (c == d);
    return count == 3;
}
bool task7(int n)
{
    int a = n / 1000;
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int d = n % 10;
    return a != b && a != c && a != d && b != c && b != d && c != d;
}
// task8 анологичен task7 бгу руина
bool task9(int n)
{
    return (n*n) == (pow((double)((n % 10) + ((n / 10) % 10) + ((n / 100) % 10)), 3));
}
bool task10(int n)
{
    int a = n / 1000;
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int d = n % 10;
    return (a == b && a == c) ||
           (a == b && a == d) ||
           (a == c && a == d) ||
           (b == c && b == d);
}
// task11 анологичен task9 бгу руина
bool task12(int n)
{
    int a = n / 1000;
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int d = n % 10;
    return (a == b && a == c && a == d) ||
           (a == b && a == c && a == d) ||
           (a == b && a == d && b == c) ||
           (a == c && a == d && c == b);
}
//1.2.2