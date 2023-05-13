#include <stdio.h>
#define N 10000
typedef struct
{
    int data[N];
    int top;
    int sign[N]; // 用于存储位置
} stack;
int main()
{
    stack s1;
    int n, i, a[N], k = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    s1.top = -1;
    for (i = 0; i < n; i++)
    {
        s1.sign[i] = 0; // 一定会有i次入栈操作。
        if (s1.top > -1) // 如果栈不为空。
            do
            {
                if (a[i] < s1.data[s1.top] || a[i] == s1.data[s1.top]) // 如果入栈的元素比栈顶元素小，直接入栈。
                {
                    s1.top++;
                    s1.data[s1.top] = a[i];
                    k = i;
                    break;
                }
                else if (a[i] > s1.data[s1.top]) // 如果要入栈的元素大于栈顶元素，则将栈顶元素出栈。
                {
                    s1.sign[k] = i + 1; // 栈顶元素为第i个入栈的元素，修改大于他的位置。
                    k--;
                    s1.top--; // 栈顶下移。
                }
            } while (s1.top != -1);
        if (s1.top == -1) // 如果栈为空，入栈。
        {
            s1.top++;
            s1.data[s1.top] = a[i];
            k = i;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", s1.sign[i]);
    return 0;
}
