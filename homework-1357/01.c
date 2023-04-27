#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a,i,j;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    i = 0, j = 1;
    while (i<n&&j<n)
    {
        while (a[i]==a[j])
        {
            j++;
        }
        printf("%d ", a[i]);
        i++;
        a[i] = a[j];

    }
    return 0;
}