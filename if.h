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
    else if (c > 0)
    {
        negativecount++;
    }
    return a;
}