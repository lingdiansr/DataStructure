/************************************************************************
题目描述
给出一个序列a1,a2,a3,a4,a5,a6,a7...an，求它的一个子序列（设为s1,s2,...sn），
使得这个子序列满足这样的性质：s1<s2<s3<...<sn并且这个子序列的长度最长。
输出这个最长子序列的长度，要求时间复杂度为O(n2)。

输入
每组输入包括两行，第一行为序列长度n，第二行为序列。

输出
输出最长递增子序列的长度。

样例输入 Copy
7
1 7 3 5 9 4 8

样例输出 Copy
4   （1，3，5，9）（1，3，5，8）
**************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *a;
    int maxStartIndex = 0, maxLenth = 0;
    int index, lenth;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n ;)
    {
        index = i, lenth = 0;
        for (int j = i; j < n-1; j++)
        {
            if (a[i] < a[i + 1])
            {
                lenth++;
            }
        }
        if (maxLenth<lenth)
        {
            maxLenth = lenth;
            maxStartIndex = index;
        }
        i=i+
    }
}