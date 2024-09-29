#include <cmath>
#include <iostream>
using namespace std;
int begin1(double a)
{
    double p = 4 * a;
    return p;
}
int begin2(double a)
{
    double s = a * a;
    return s;
}
void begin3(double a, double b)
{
    double s = a * b;
    double p = 2 * (a + b);
    std::cout << s << " " << p << std::endl;
}
int begin4(double d)
{
    const double pi = 3.14;
    double l = pi * d;
    return l;
}
void begin5(double a)
{
    double v = a * a * a;
    double s = 6 * (a * a);
    std::cout << v << " " << s << std::endl;
}
void begin6(double a, double b, double c)
{
    double v = a * b * c;
    double s = 2 * (a * b + b * c + a * c);
    std::cout << v << " " << s << std::endl;
}
void begin7(double r)
{
    const double pi = 3.14;
    double l = 2 * pi * r;
    double s = pi * r * r;
    std::cout << l << " " << s << std::endl;
}
int begin8(double a, double b)
{
    double c = (a + b) / 2;
    return c;
}
int begin9(double a, double b)
{
    double c = sqrt(a * b);
    return c;
}
void begin10()
{
    double a = 3;
    double b = 4;
    double sum = a * a + b * b;
    double diff = a * a - b * b;
    double prod = (a * a) * (b * b);
    double div = (a * a) / (b * b);
    std::cout << sum << " " << diff << " " << prod << " " << div << std::endl;
}
void begin11()
{
    double a = 3;
    double b = 4;
    double c = std::abs(a);
    double d = std::abs(b);
    double sum = c + d;
    double diff = c - d;
    double prod = c * d;
    double div = c / d;
    std::cout << sum << " " << diff << " " << prod << " " << div << std::endl;
}
void begin12(double a, double b)
{
    double c = sqrt(a * a + b * b);
    double p = a + b + c;
    std::cout << c << " " << p << std::endl;
}
void begin13()
{
    double r1 = 6;
    double r2 = 4;
    const double pi = 3.14;
    double s1 = pi * r1 * r1;
    double s2 = pi * r2 * r2;
    double s = s1 - s2;
    std::cout << s1 << " " << s2 << " " << s << std::endl;
}
void begin14(double l)
{
    const double pi = 3.14;
    double r = l / (2 * pi);
    double s = pi * r * r;
    std::cout << r << " " << s << std::endl;
}
void begin15(double s)
{
    const double pi = 3.14;
    double l = 2 * pi * s;
    double s = pi * s * s;
    double r = sqrt(s / pi);
    double d = 2 * r;
    std::cout << l << " " << r << " " << d << std::endl;
}
int begin16(double x1, double x2)
{
    double c = std::abs(x1 - x2);
    return c;
}
void begin17(double a, double b, double c)
{
    double ac = std::abs(c - a);
    double bc = std::abs(c - b);
    double sum = ac + bc;
    std::cout << ac << " " << bc << " " << sum << std::endl;
}
void begin18()
{
    double a = 1;
    double b = 3;
    double c = 2;
    double ac = std::abs(c - a);
    double bc = std::abs(b - c);
    double prod = ac * bc;
    std::cout << ac << " " << bc << " " << prod << std::endl;
}
void begin19(double x1, double y1, double x2, double y2)
{
    double l = std::abs(x2 - x1);
    double w = std::abs(y2 - y1);
    double s = l * w;
    double p = 2 * (l + w);
    std::cout << s << " " << p << std::endl;
}
int begin20(double x1, double y1, double x2, double y2)
{
    double s = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return s;
}
void begin21(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double P = a + b + c;
    double p = P / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << P << " " << s << std::endl;
}
void begin22(double a, double b)
{
    std::swap(a, b);
    std::cout << a << " " << b << std::endl;
}
void begin23(double a, double b, double c)
{
    std::swap(a, b);
    std::swap(b, c);
    std::swap(c, a);
    std::cout << a << " " << b << " " << c << std::endl;
}
void begin24(double a, double b, double c)
{
    std::swap(a, c);
    std::swap(b, a);
    std::swap(c, b);
    std::cout << a << " " << b << " " << c << std::endl;
}
int begin25(double x)
{
    double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    return y;
}
int begin26(double x)
{
    double y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    return y;
}
void begin27(double a)
{
    double a2 = a * a;
    double a4 = a2 * a2;
    double a8 = a4 * a2;
    std::cout << a << " " << a2 << " " << a4 << " " << a8 << std::endl;
}
void begin28(double a)
{
    double a2 = a * a;
    double a3 = a2 * a;
    double a5 = a3 * a2;
    double a10 = a5 * a5;
    double a15 = a10 * a5;
    std::cout << a << " " << a2 << " " << a3 << " " << a5 << " " << a10 << " " << a15 << std::endl;
}
void bogin29(double a_grad)
{
    const double pi = 3.14;
    double a_rad = a_grad * pi / 180;
    std::cout << a_rad << std::endl;
}
void begin30(double a_rad)
{
    const double pi = 3.14;
    double a_grad = a_rad * 180 / pi;
    std::cout << a_grad << std::endl;
}
int begin31(double tf)
{
    double tc = (tf - 32) * 5 / 9;
    return tc;
}
int begin32(double tc)
{
    double tf = tc * 9 / 5 + 32;
    return tf;
}
void begin33(double x, double a, double y)
{
    double kg1 = a / x;
    double kgy = kg1 * y;
    std::cout << kgy << " " << kg1 << std::endl;
}
