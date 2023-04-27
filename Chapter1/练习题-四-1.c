#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double sum = 0, x;
    int n;
    double *a;
    scanf("%lf %d", &x, &n);
    a = (double *)malloc(n * sizeof(double));
    for (int i = 0; i <= n; i++)
    {
        scanf("%lf", a + i);
        sum += a[i - 1] * pow(x, i + 1);
    }
    printf("%lf", sum);
}