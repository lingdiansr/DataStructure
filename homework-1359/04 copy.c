/*
题目描述
小明有n头奶牛，按照编号顺序1到n站成一排，其中奶牛i的身高为Hi。
现在每头奶牛都向他的右侧望向那些编号较大的奶牛，对于奶牛i 如果存在一头奶牛j满足i<j 并且 Hi<Hj，那么我们称奶牛 i 需要仰视奶牛 j。
请你求出每头奶牛的最近仰视对象。

输入
第一行为奶牛个数n（1≤n≤10000）;第二行为每头奶牛的高度。

输出
输出每个奶牛的最近仰视对象的编号，如果不存在仰视对象，则输出 0。

样例输入 Copy
5
3 4 1 2 3

6 
3 2 6 1 1 2


样例输出 Copy
2 0 4 5 0

提示
第一头奶牛：最近的比它高的奶牛是第二头
第二头奶牛：右侧没有比它高的奶牛
第三头奶牛：最近的比它高的奶牛是第四头
第四头奶牛：最近的比它高的奶牛是第五头
第五头奶牛：右侧没有比它高的奶牛
假设n的范围改为（1≤n≤100000），请思考该如何解决本题。
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *stack, top, x, *index;
    scanf("%d", &n);
    stack = (int *)malloc(sizeof(int) * (n+1));
    index = (int *)malloc(sizeof(int) * (n+1));
    top = 0;
    for (int i = 0; i < n; i++)
    {
        index[i] = 0;
        scanf("%d", &x);
        while (top&&stack[top]<x)
        {
            index[top] = i;
            top--;
        }
        top++;
        stack[top] = x;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", index[i]);
    }   
}