#include <stdio.h>
int main()
{
    int m, n;
    int xCount = 0, yCount = 0;
    char ch;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        getchar();
        for (int j = 0; j < n; j++)
        {
            ch = getchar();
            if (ch=='X')
            {
                xCount++;
            }
            else if (ch=='Y')
            {
                yCount++;
            }
        }
    }
    if (xCount>yCount)
    {
        printf("X win");
    }
    else if (yCount>xCount)
    {
        printf("Y win");
    }
    else
    {
        printf("The same");
    }

    return 0;
}