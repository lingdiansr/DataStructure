#include <stdio.h>
#include <stdbool.h>
#define N 8
int chess[N][N] = {0};
bool row(int x, int y) // 判断同一行有无皇后
{
    bool flag = false;
    for (int i = 0; i < x; i++)
    {
        if (chess[i][y])
        {
            flag = true;
        }
    }
    for (int i = x + 1; i < N; i++)
    {
        if (chess[i][y])
        {
            flag = true;
        }
    }
    return flag;
}
bool col(int x, int y) // 判断同一列有无皇后
{
    bool flag = false;
    for (int i = 0; i < x; i++)
    {
        if (chess[x][i])
        {
            flag = true;
        }
    }
    for (int i = y + 1; i < N; i++)
    {
        if (chess[x][i])
        {
            flag = true;
        }
    }
    return flag;
}
bool rdiag(int x, int y)
{
    bool flag = false;
    int startx=
}
int main()
{

    return 0;
}