#include <stdio.h>
#define VALUE 2
#define SIZE 20
typedef struct tt
{
    int data[SIZE];
    int top;
} Stack; // 声明栈类型
void pushStack(Stack *a, int value) //入栈，从value读取值
{
    if (a->top == SIZE - 1)
    {
        return;
    }
    a->top++;
    a->data[a->top] = value;
}
void popStack(Stack *a, int *value) //出栈，将值存储到value
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
    /*
    s1是数据的存储栈，其中顺序与队列顺序相反
    s2是出队时的缓存栈，借用s2使得数据顺序与队列循序相同
    */
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
                //将s1中的值全部存入s2，借用s2使得顺序与队列一致
            }
            popStack(&s2, tempValue); // 实际上的出队列
            while (s2.top >= 0)
            {
                popStack(&s2, tempValue);
                pushStack(&s1, tempValue);
                //将s2中的数据再次存回s1，保证后续能够正常入队
            }
        }
        else if (num == 2)
        { // lineIn
            pushStack(&s1, VALUE);//入队列，也是入栈s1
        }
    }
    printf("%d", s1.top + 1);//最终模拟队列中剩下元素的个数，即栈顶序号+1，s1与s2数量一致
}
