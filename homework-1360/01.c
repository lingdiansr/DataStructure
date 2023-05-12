/*
本题也可以分别计数左右括号的数量，并判断左括号不在最后且右括号不在开头即可
考虑到数据结构以及通用性采用栈的方式既有更佳的算法优越性
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
typedef struct tt
{
    char data[20];
    int top;
} sqStack;
sqStack sss=;
void pushStack(sqStack *a, char value) // 入栈，从value读取值
{
    if (a->top == SIZE - 1)
    {
        return;
    }
    a->top++;
    a->data[a->top] = value;
}
void popStack(sqStack *a, char *value) // 入栈，将值存储到value
{
    if (a->top < 0)
    {
        return;
    }
    value = a->data[a->top];
    a->top--;
}
char readStackTop(sqStack *a) // 读取栈顶元素值
{
    if (a->top < 0)
    {
        return 0;
    }

    return a->data[a->top];
}
int main()
{
    int n;
    char ch, tmp;
    sqStack s1;
    s1.top = -1;
    scanf("%d", &n); // 存储数量
    getchar();       // 去除空格
    scanf("%c", &ch);
    pushStack(&s1, ch);             // 读第一个字符并压入栈
    for (int i = 0; i < n - 1; i++) // 处理后续n-1个字符
    {
        scanf("%c", &ch);
        if ((readStackTop(&s1) == '(') && (ch == ')'))
        { // 满足此条件时括号可消去，将左括号出栈
            popStack(&s1, &tmp);
        }
        else
        { // 其余情况需要后续判断，入栈
            pushStack(&s1, ch);
        }
    }
    if (s1.top == -1) // 当栈空时，说明括号全部匹配
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
