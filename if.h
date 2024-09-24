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
    }
    if (a < 0)
    {
        a -= 2;
    }
    return a;
}
int ifs3(int a)
{
    if (a > 0)
    {
        a += 1;
    }
    if (a < 0)
    {
        a -= 2;
    }
    if (a == 0)
    {
        a += 10;
    }
    return a;
}
int ifs4(int a, int b, int c)
{
    int count = 0;
    if (a > 0)
    {
        count++;
    }
    if (b > 0)
    {
        count++;
    }
    if (c > 0)
    {
        count++;
    }
    return count;
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
    else
    {
        return b;
    }
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
void ifs8(int a, int b)
{
    if (a > b)
    {
        std::cout << a << ' ' << b << std::endl;
    }
    else if (b > a)
    {
        std::cout << b << ' ' << a << std::endl;
    }
    else
    {
        std::cout << "a == b" << std::endl;
    }
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
    std::cout << a << " " << b << std::endl;
}
void ifs12(int a, int b, int c)
{
    if (a < b && a < c)
    {
        std::cout << a << std::endl;
    }
    else if (b < a && b < c)
    {
        std::cout << b << std::endl;
    }
    else
    {
        std::cout << c << std::endl;
    }
}
void ifs13(int a, int b, int c)
{
    if (a >= b && a <= c)
    {
        std::cout << a << std::endl;
    }
    else if (a >= c && a <= b)
    {
        std::cout << a << std::endl;
    }
    else if (b >= a && b <= c)
    {
        std::cout << b << std::endl;
    }
    else if (b >= c && b <= a)
    {
        std::cout << b << std::endl;
    }
    else if (c >= a && c <= b)
    {
        std::cout << c << std::endl;
    }
    else if (c >= b && c <= a)
    {
        std::cout << c << std::endl;
    }
}
void ifs14(int a, int b, int c)
{
    int min, max;
    if (a < b && a < c)
    {
        min = a;
        max = (b > c) ? b : c;
    }
    else if (b < a && b < c)
    {
        min = b;
        max = (a > c) ? a : c;
    }
    else
    {
        min = c;
        max = (a > b) ? a : b;
    }
    std::cout << min << " " << max << std::endl;
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
    int one = 1;
    int two = 2;
    int three = 3;
    if (a == b && b == c)
    {
        std::cout << " Все числа равны " << std::endl;
    }
    else if (a == b)
    {
        std::cout << three << std::endl;
    }
    else if (a == c)
    {
        std::cout << two << std::endl;
    }
    else if (b == c)
    {
        std::cout << one << std::endl;
    }
    else
    {
        std::cout << " Нет чисел равных между собой" << std::endl;
    }
}
void ifs19(int a, int b, int c, int d)
{
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;
    if (a == b && a == c && a == d)
    {
        std::cout << "Все числа равны" << std::endl;
    }
    else if (a != b && a != c && a != d)
    {
        std::cout << one << std::endl;
    }
    else if (b != a && b != c && b != d)
    {
        std::cout << two << std::endl;
    }
    else if (c != a && c != b && c != d)
    {
        std::cout << three << std::endl;
    }
    else if (d != a && d != b && d != c)
    {
        std::cout << four << std::endl;
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
