#include <stdio.h>
const int salary = 1500;
double money(int n) // 方式一  递归
{
    if (n == 1)
    {
        return salary;
    }
    else
    {
        return 1.1 * money(n - 1);
    }
}
int main()
{
    double sum=salary;
    int n;
    scanf("%d", &n);
    printf("%.2lf\n", money(n));
    for (int i = 1; i < n; i++)
    {
        sum *= 1.1;
    }
    printf("%.2lf", sum);
}