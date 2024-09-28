int ifs1(int a)
{
    if (a >= 0)
    {
        a += 1;
    }
    return a;
}
int ifs2(int a)
{
    if (a >= 0)
    {
        a += 1;
        return a;
    }
    a -= 2;
    return a;
}
int ifs3(int a)
{
    if (a > 0)
    {
        a += 1;
        return a;
    }
    if (a < 0)
    {
        a -= 2;
        return a;
    }
    a += 10;
    return a;
}
int ifs4(int a, int b, int c)
{
    int positiveCount = 0;

    if (a > 0)
    {
        positiveCount++;
    }

    if (b > 0)
    {
        positiveCount++;
    }

    if (c > 0)
    {
        positiveCount++;
    }

    return positiveCount;
}
int ifs5(int a, int b, int c)
{
    int positivecount = 0;
    int negativecount = 0;

    if (a > 0)
    {
        positivecount++;
    }
    else if (a < 0)
    {
        negativecount++;
    }
    if (b > 0)
    {
        positivecount++;
    }
    else if (b < 0)
    {
        negativecount++;
    }
    if (c > 0)
    {
        positivecount++;
    }
    else if (c < 0)
    {
        negativecount++;
    }
    return negativecount + positivecount;
}
int ifs6(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int ifs7(int a, int b)
{
    if (a < b)
    {
        return 1;
    }
    else if (b < a)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int test(int a)
{
    int result = 0;
    if (a % 2 == 0)
    {
        result += 1;
        return result;
    }
    result += 2;
    return result;
}
void ifs8(int a, int b)
{
    if (a > b)
    {
        std::swap(a, b);
    }
    std::cout << a << ' ' << b << std::endl;
}
void ifs9(double a, double b)
{
    if (a > b)
    {
        // std::swap(a, b);
        double c = a;
        a = b;
        b = c;
    }
    std::cout << a << " " << b << std::endl;
}
void ifs10(int a, int b)
{
    if (a != b)
    {
        a = a + b;
        b = a;
    }
    else
    {
        a = 0;
        b = 0;
    }
    std::cout << a << " " << b << std::endl;
}
void ifs11(int a, int b)
{
    if (a != b)
    {
        a = std::max(a, b);
        b = a;
    }
    else
    {
        a = 0;
        b = 0;
    }
    std::cout << a << ' ' << b << std::endl;
}
void ifs12(int a, int b, int c)
{
    int smallest = std::min({a, b, c});
    std::cout << smallest << std::endl;
}
void ifs13(int asmallest, int bmiddle, int clargest)
{
    if (asmallest >= bmiddle && asmallest <= clargest)
    {
        std::cout << asmallest << std::endl;
    }
    else if (bmiddle >= asmallest && bmiddle <= clargest)
    {
        std::cout << bmiddle << std::endl;
    }
    else
    {
        std::cout << clargest << std::endl;
    }
}
void ifs14(int a, int b, int c)
{
    int min, max;

    if (a < b && a < c)
    {
        min = a;
        max = std::max(b, c);
    }
    else if (b < a && b < c)
    {
        min = b;
        max = std::max(a, c);
    }
    else
    {
        min = c;
        max = std::max(a, b);
    }

    std::cout << min << ' ' << max << std::endl;
}
void ifs15(int a, int b, int c)
{
    int max1, max2, sum;

    if (a >= b && a >= c)
    {
        max1 = a;
        if (b >= c)
        {
            max2 = b;
        }
        else
        {
            max2 = c;
        }
        sum = max1 + max2;
    }
    else if (b >= a && b >= c)
    {
        max1 = b;
        if (a >= c)
        {
            max2 = a;
        }
        else
        {
            max2 = c;
        }
        sum = max1 + max2;
    }
    else
    {
        max1 = c;
        if (a >= b)
        {
            max2 = a;
        }
        else
        {
            max2 = b;
        }
        sum = max1 + max2;
    }
    std::cout << sum << std::endl;
}
void ifs16(double a, double b, double c)
{
    if (a <= b && b <= c)
    {
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else
    {
        a = -a;
        b = -b;
        c = -c;
    }
    std::cout << a << " " << b << " " << c << std::endl;
}
void ifs17(double a, double b, double c)
{
    if ((a <= b && b <= c) || (a >= b && b >= c))
    {
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else
    {
        a = -a;
        b = -b;
        c = -c;
    }
    std::cout << a << " " << b << " " << c << std::endl;
}
void ifs18(int a, int b, int c)
{
    if (a == b && b == c)
    {
        std::cout << " Все числа равны " << std::endl;
    }
    else if (a == b)
    {
        std::cout << 3 << std::endl;
    }
    else if (a == c)
    {
        std::cout << 2 << std::endl;
    }
    else if (b == c)
    {
        std::cout << 1 << std::endl;
    }
    else
    {
        std::cout << " Нет чисел равных между собой" << std::endl;
    }
}
void ifs19(int a, int b, int c, int d)
{
    if (a == b && a == c && a == d)
    {
        std::cout << "Все числа равны" << std::endl;
    }
    else if (a != b && a != c && a != d)
    {
        std::cout << 1 << std::endl;
    }
    else if (b != a && b != c && b != d)
    {
        std::cout << 2 << std::endl;
    }
    else if (c != a && c != b && c != d)
    {
        std::cout << 3 << std::endl;
    }
    else if (d != a && d != b && d != c)
    {
        std::cout << 4 << std::endl;
    }
    else
    {
        std::cout << "Нет решения" << std::endl;
    }
}
void ifs20(double a, double b, double c)
{
    double dist_ab = abs(a - b);
    double dist_ac = abs(a - c);

    if (dist_ab < dist_ac)
    {
        std::cout << "Точка b ближе к точке a. Расстояние: " << dist_ab << std::endl;
    }
    else if (dist_ac < dist_ab)
    {
        std::cout << "Точка c ближе к точке a. Расстояние: " << dist_ac << std::endl;
    }
    else
    {
        std::cout << "Точки b и c находятся на одинаковом расстоянии от точки a." << std::endl;
    }
}
void ifs21(int x, int y)
{
    int zero = 0;
    int one = 1;
    int two = 2;
    int tree = 3;
    if (x == 0 && y == 0)
    {
        std::cout << zero << std::endl;
    }
    else if (x == 0 && y != 0)
    {
        std::cout << one << std::endl;
    }
    else if (x != 0 && y == 0)
    {
        std::cout << two << std::endl;
    }
    else
    {
        std::cout << tree << std::endl;
    }
}
void ifs22(int x, int y)
{
    if (x > 0 && y > 0)
    {
        std::cout << "Точка находится в I четверти." << std::endl;
    }
    else if (x < 0 && y > 0)
    {
        std::cout << "Точка находится во II четверти." << std::endl;
    }
    else if (x < 0 && y < 0)
    {
        std::cout << "Точка находится в III четверти." << std::endl;
    }
    else
    {
        std::cout << "Точка находится в IV четверти." << std::endl;
    }
}
void ifs23(int x1, int x2, int x3, int y1, int y2, int y3)
{
    if (x1 == x2 && y1 == y3)
    {
        std::cout << "(" << x3 << ", " << y2 << ")" << std::endl;
    }
    else if (x1 == x3 && y1 == y2)
    {
        std::cout << "(" << x2 << ", " << y3 << ")" << std::endl;
    }
    else if (x2 == x3 && y2 == y1)
    {
        std::cout << "(" << x1 << ", " << y3 << ")" << std::endl;
    }
    else
    {
        std::cout << "Невозможно найти координаты вершины. " << std::endl;
    }
}
int max2(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int max(int a, int b, int c)
{
    return max2(a, max2(b, c));
}
int max(int a, int b, int c, int d)
{
    return max2(max2(a, b), max2(c, d));
}
void ifs24(double x)
{
    double f;
    if (x > 0)
    {
        f = 2 * sin(x);
    }
    else
    {
        f = 6 - x;
    }
    std::cout << f << std::endl;
}
void ifs25(double x)
{
    double f;
    if (x < -2 || x > 2)
    {
        f = 2 * x;
    }
    else
    {
        f = -3 * x;
    }
    std::cout << f << std::endl;
}
void ifs26(double x)
{
    double f;
    if (x <= 0)
    {
        f = -x;
    }
    else if (0 < x < 2)
    {
        f = x * x;
    }
    else
    {
        f = 4;
    }
    std::cout << f << std::endl;
}
int ifs27(double x)
{
    if (x < 0)
        return 0;
    int n = static_cast<int>(x); // уточнить
    return (n % 2 == 0) ? 1 : -1;
}
void ifs28(int x)
{
    int a = 365;
    int b = 366;
    if (x % 4 == 0)
    {
        if (x % 100 == 0)
        {
            if (x % 400 == 0)
            {
                std::cout << a << std::endl;
            }
            else
            {
                std::cout << b << std::endl;
            }
        }
        else
        {
            std::cout << a << std::endl;
        }
    }
}
std::string ifs29(int x)
{
    std::string sign = (x < 0) ? "отрицательное" : "положительное";
    if (x == 0)
        sign = "нулевое";
    std::string parity = (x % 2 == 0) ? "четное" : "нечетное";
    return sign + " " + parity + " число";
}
std::string ifs30(int x)
{
    std::string result;
    if (x < 10)
    {
        result = "однозначное";
    }
    else if (x < 100)
    {
        result = "двузначное";
    }
    else
    {
        result = "трехзначное";
    }
    if (x % 2 == 0)
    {
        result = "четное " + result + " число";
    }
    else
    {
        result = "нечетное " + result + " число";
    }
    return result;
}