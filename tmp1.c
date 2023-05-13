#include <stdio.h>
#define SIZE 20
#define NUM 2
typedef struct s
{
    int data[SIZE];
    int top;
} stack;
void push_stack(stack *s, int num)
{
    if (s->top == SIZE - 1)
        return;
    else
    {
        s->top++;
        s->data[s->top] = num;
    }
}
void pop_stack(stack *s, int *num)
{
    if (s->top < 0)
        return;
    else
    {
        *num = s->data[s->top];
        s->top--;
    }
}
int main()
{
    stack s1, s2;
    s1.top = -1;
    s2.top = -1;
    int n, a[SIZE], i, num;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            while (s1.top > -1)
            {
                pop_stack(&s1, &num);
                push_stack(&s2, num);
            }
            pop_stack(&s2, &num);
            while (s2.top > -1)
            {
                pop_stack(&s2, &num);
                push_stack(&s1, num);
            }
        }
        else
        {
            push_stack(&s1, NUM);
        }
    }
    printf("%d", s1.top + 1);
    return 0;
}
