#include <stdio.h>
#define N 10
int main()
{
    int a[N], x,i,j;
    for ( i = 0; i < N - 1; i++)
    {
        a[i] = i;
    }
    scanf("%d", &x);
    for (i = 0; i < N; i++)
    {
        if (a[i] > x)
        {
            break;
        }
    }
    for (j = N; j > i; j--)
    {
        a[j] = a[j - 1];
    }
    a[j] = x;
}