#include <cmath>
#include <iostream>
using namespace std;
int begin1(double a)
{
    return 4 * a;
}
int begin2(double a)
{
    return a * a;
}
void begin3(double a, double b)
{
    double s = a * b;
    double p = 2 * (a + b);
    std::cout << s << " " << p << std::endl;
}
int begin4(double d)
{
    return 3.14 * d;
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
    return (a + b) / 2;
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
    return std::abs(x1 - x2);
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
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
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
    return 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
}
int begin26(double x)
{
    return 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
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
int bogin29(double a_grad)
{
    return a_grad * 3.14 / 180;
}
int begin30(double a_rad)
{
    return a_rad * 180 / 3.14;
}
int begin31(double tf)
{
    return (tf - 32) * 5 / 9;
}
int begin32(double tc)
{
    return tc * 9 / 5 + 32;
}
void begin33(double x, double a, double y)
{
    double kg1 = a / x;
    double kgy = kg1 * y;
    std::cout << kgy << " " << kg1 << std::endl;
}
void begin34(double x, double y, double a, double b)
{
    double kg1choc = a / x;
    double kg1iris = b / y;
    double diff = kg1choc / kg1iris;
    std::cout << kg1choc << " " << kg1iris << " " << diff << std::endl;
}
int begin35(double v, double u, double t1, double t2)
{
    double s1 = v * t1;
    double s2 = (v - u) * t2;
    double s = s1 + s2;
    return s;
}
int begin36(double v1, double v2, double s, double t)
{
    return s + (v2 + v1) * t;
}

int begin37(double v1, double v2, double s, double t)
{
    return std::abs(s - (v2 - v1) * t);
}
int begin38(double a, double b)
{
    if (a != 0)
    {
        double x = -b / a;
        std::cout << x << std::endl;
    }
    else
    {
        std::cout << "Нет решения" << std::endl;
    }
    return 0;
}
int begin39(double a, double b, double c, double d, double x1, double x2)
{
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << x1 << " " << x2 << std::endl;
    }
    else
    {
        std::cout << "Нет решения" << std::endl;
    }
    return 0;
}
int begin40(double a1, double b1, double c1, double a2, double b2, double c2)
{
    double d = a1 * b2 - a2 * b1;
    if (d != 0)
    {
        double x = (c1 * b2 - c2 * b1) / d;
        double y = (a1 * c2 - a2 * c1) / d;
        std::cout << x << " " << y << std::endl;
    }
    else
    {
        std::cout << "Нет решения" << std::endl;
    }
    return 0;
}