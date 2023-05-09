#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *h, *sid;
    int i, j;
    scanf("%d", &n);
    h = (int *)malloc(sizeof(int) * n);//存放牛的身高
    sid = (int *)malloc(sizeof(int) * n);// 存放牛的仰视序号
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
        sid[i] = -1;
    }//读入数据及初始化
    /*
    从右向左比较，将右侧没有“仰视”记为N，
    */
    for (i = n - 1; i >= 0; i--)
    {
        j = i + 1;//使用j去跳跃式的寻找更大的身高，优化循环，类似与字符串比较的KMP算法
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
            //输出时迎合题意，将没有“仰视”的输出为0，数组下标与实际序号相差1
    }
    
}