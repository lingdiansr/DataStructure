#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *song,time, bottom;
    int i, j;
    scanf("%d", &n);
    song = (int *)malloc(sizeof(int) * n);
    for ( i = 0,bottom=0; i < n; i++)
    {
        scanf("%d", &time);
        for ( j = 0; j < bottom; j++)
        {
            if (song[j]>time)
            {
                break;
            }
        }
        song[j] = time;
        bottom = j+1;
    }
    printf("%d", bottom);
}