#include <stdio.h>
int main()
{
    int n,num, i = 1,count=0;
    scanf("%d", &n);
    while (i <= n)
    {
        scanf("%d", &num);
        if (num)
        {
            i++;
            if (i<n)
            {
                scanf("%*d", &num);
            }           
        }
        i++;
        count++;
    }
    printf("%d", count);
}