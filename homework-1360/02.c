/*
本题与第一题基本类似，主要是条件变化
*/
#include <stdio.h>
#include <stdbool.h>
#define SIZE 20
typedef struct tt
{
    char data[20];
    int top;
} sqStack;
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
char readStackTop(sqStack *a)
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
    bool flag;
    sqStack s1={0,0};
    s1.top = -1;
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    pushStack(&s1, ch);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%c", &ch);
        flag = (readStackTop(&s1) == '(') && (ch == ')') || (readStackTop(&s1) == '{') && (ch == '}') || (readStackTop(&s1) == '[') && (ch == ']');
        // 三种括号有一种匹配就可出栈
        if (flag)
        {
            popStack(&s1, &tmp);
        }
        else
        {
            pushStack(&s1, ch);
        }
    }
    if (s1.top == -1) //同理栈空为全部匹配
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}