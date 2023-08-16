// 5436 mod 100 = 36
// 5436 div 100 = 54

int mod (int a, int b)
{
    return a - (int)((double)a / b) * b;
}

int div (int a, int b)
{
    return (int)(a / b);
}