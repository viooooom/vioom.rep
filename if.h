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