bool boolean1(int a)
{
    return a >= 0;
}

bool boolean2(int a)
{
    return a % 2 != 0;
}
bool boolean3(int a)
{
    return a % 2 == 0;
}
bool boolean4(int a, int b)
{
    return (a > 2) && (b <= 3);
}
bool boolean5(int a, int b)
{
    return (a >= 0) || (b < -2);
}
bool boolean6(int a, int b, int c)
{
    return (a < b < c);
}
bool boolean7(int a, int b, int c)
{
    return (a <= b <= c);
}
bool boolean8(int a, int b)
{
    return (a % 2 != 0) && (b % 2 != 0);
}
bool boolean9(int a, int b)
{
    return (a % 2 != 0) || (b % 2 != 0);
}
bool boolean10(int a, int b)
{
    return ((a % 2 != 0) && (b % 2 == 0)) || ((a % 2 == 0) && (b % 2 != 0));
}
bool boolean11(int a, int b)
{
    return ((a % 2 == 0) && (b % 2 == 0)) || ((a % 2 != 0) && (b % 2 != 0));
}
bool boolean12(int a, int b, int c)
{
    return (a >= 0) && (b >= 0) && (c >= 0);
}
bool boolean13(int a, int b, int c)
{
    return (a >= 0) || (b >= 0) || (c >= 0);
}
bool boolean14(int a, int b, int c)
{
    return ((a >= 0) || (b >= 0) || (c >= 0)) == 1;
}
bool boolean16(int a)
{
    return a % 2 == 0 && a >= 10 && a <= 99;
}
bool boolean17(int a)
{
    return a % 2 != 0 && a >= 100 && a <= 999;
}
