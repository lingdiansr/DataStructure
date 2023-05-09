#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *song,time, bottom;
    int i, j;
    scanf("%d", &n);
    song = (int *)malloc(sizeof(int) * n);//分配一个存放歌曲时长的数组
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
        /*
        从前向后找到第一个比要插入歌曲时长更大的位置
        将新歌曲插入到此位置，歌单结束位置也记录为此位置
        */
        song[j] = time;
        bottom = j+1;
    }
    printf("%d", bottom);
}