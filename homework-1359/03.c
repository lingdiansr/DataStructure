#include <stdio.h>
#define VALUE 2
#define SIZE 20
typedef struct tt
{
    int data[SIZE];
    int top;
} Stack;
void pushStack(Stack *a, int value)
{
    if (a->top == SIZE - 1)
    {
        return;
    }
    a->top++;
    a->data[a->top] = value;
}
void popStack(Stack *a, int *value)
{
    if (a->top < 0)
    {
        return;
    }
    value = a->data[a->top];
    a->top--;
}
int main()
{
    int n, num, tempValue;
    Stack s1, s2;
    s1.top = s2.top = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num == 1)
        { // lineOut
            while (s1.top >= 0)
            {
                popStack(&s1, tempValue);
                pushStack(&s2, tempValue);
            }
            popStack(&s2, tempValue); // 实际上的出队列
            while (s2.top >= 0)
            {
                popStack(&s2, tempValue);
                pushStack(&s1, tempValue);
            }
        }
        else if (num == 2)
        { // lineIn
            pushStack(&s1, VALUE);
        }
    }
    printf("%d", s1.top + 1);
}
