#include <stdio.h>

int main()
{
    long num, aNum = 0, bNum = 0, cNum = 0, dNum = 0;
    char ch;
    scanf("%ld", &num);
    for (long i = 0; i < num; i++)
    {
        scanf(" %c", &ch); // 加上空格避免读入换行符或空格
        switch (ch)
        {
        case 'A':
            aNum++;
            break;
        case 'B':
            bNum++;
            break;
        case 'C':
            cNum++;
            break;
        case 'D':
            dNum++;
            break;
        default:
            break;
        }
    }
    printf("%ld %ld %ld %ld\n", aNum, bNum, cNum, dNum); // 每个数后面加一个空格
    return 0;
}
