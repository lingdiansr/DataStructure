#include <stdio.h>
#define SIZE 20
typedef struct t
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
    int n, m, num[SIZE], i, t;
    s1.top = s2.top = -1;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        push_stack(&s1, num[i]);
    }
    for (i = 0; i < m;)
    {
        while (s1.top > -1)
        {
            pop_stack(&s1, &t);
            push_stack(&s2, t);
        }
        while (s2.top > -1)
        {
            pop_stack(&s2, &t);
            if (t > 1)
            {
                t--;
                push_stack(&s1, t);
            }
            i++;
            if (i >= m)
                break;
        }
    }
    while (s1.top > -1)
    {
        pop_stack(&s1, &t);
        push_stack(&s2, t);
    }
    printf("%d", s2.data[s2.top]);
    return 0;
}
