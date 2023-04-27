#include <stdio.h>
long long fun(long long x,long long y)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y% 2 == 0)
    {
        return fun(x * x, y / 2);
    }
    else
    {
        return x * fun(x, y - 1);
    }
}
int main()
{
    long long x, y;
    scanf("%lld %lld", &x, &y);
    printf("%lld", fun(x, y));
}