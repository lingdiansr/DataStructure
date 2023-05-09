#include <stdio.h>
int main()
{
    int n,num, i = 1,count=0;
    scanf("%d", &n);
    while (i <= n)
    {
        scanf("%d", &num);
        if (num)//读取判断当前一个人的需求，为1时将后一个人也传送走
        {
            i++;
            if (i<n)
            {
                scanf("%*d", &num);//读取数据但不保存，即被跳过的人
            }           
        }
        i++;
        count++;
    }
    printf("%d", count);
}