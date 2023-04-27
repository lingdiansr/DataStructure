#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n, k;
    bool flag;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        flag = false;
        for (int j = 1; j <= k; j++)
        {
            if (i%j==0)
            {
                flag = !flag;
            }           
        }
        if (flag)
        {
            printf("%d ", i);
        }
    }
}