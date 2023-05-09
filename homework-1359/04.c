#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *h, *sid;
    int i, j;
    scanf("%d", &n);
    h = (int *)malloc(sizeof(int) * n);
    sid = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
        sid[i] = -1;
    }
    for (i = n - 1; i >= 0; i--)
    {
        j = i + 1;
        while (j < n)
        {
            if (h[i] < h[j])
            {
                break;
            }
            else
            {
                j = sid[j];
            }
        }
        sid[i] = j;
    }
    for (int i = 0; i < n; i++)
    {
        if (sid[i]==n)
        {
            printf("%d ", 0);
        }
        else
            printf("%d ", sid[i]+1);
    }
    
}