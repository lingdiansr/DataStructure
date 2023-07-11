#include <stdio.h>
void HeapAdjust(int R[], int s, int t)
{
    int tmp = R[s];
    int j = s;
    for (int i = 2 * j; i <= t; i *= 2)
    {
        if (i < t && R[i] < R[i + 1])
        {
            i++;
        }
        if (tmp>R[i])
        {
            break;
        }
        R[j]=R[i];
        j = i;
    }
    R[j] = tmp;
}
void HeapSort(int R[], int n)
{
    int tmp;
    for (int i = n / 2; i > 0; i--)
    {
        HeapAdjust(R, i, n); // 将数据建成初始堆
    }
    for (int i = n; i > 0; i--)
    {
        tmp = R[0]; // 将堆顶元素R[0]与堆底元素R[i]交换
        R[0] = R[i];
        R[i] = tmp;
        HeapAdjust(R, 0, i - 1); // 将R[0]~R[i-1]重新调整成堆
    }
}
void printnum(int num[])
{
    for (int i = 0; i < 8; ++i)
    {
        printf("%d\t", num[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    int num[8] = {0};
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }
    HeapSort(num, 8);
    printnum(num);
    return 0;
}
