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

void ifs9(double a, double b) {
    if (a > b) 
    {
        
    }
}

