#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
typedef struct tt
{
    int num[20];
    int front;
    int rear;
} Quene;

void inQuene(Quene *q, int value)
{
    if (q->rear == SIZE - 1)
    {
        return;
    }
    q->num[q->rear] = value;
    q->rear = (q->rear + 1) % SIZE;
}
int outQuene(Quene *q)
{
    int value;
    if (q->front == q->rear)
    {
        return;
    }
    value = q->num[q->front];
    q->front = (q->front + 1) % SIZE;
    return value;
}
int main()
{
    int n, time, num;
    Quene huaqiang;
    huaqiang.front = huaqiang.rear = 0;
    scanf("%d %d", &n, &time);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        inQuene(&huaqiang, num);
    }
    for (int i = 0; i < time; i++)
    {
        num=outQuene(&huaqiang);
        num--;
        if (num)
        {
            inQuene(&huaqiang, num);
        }
    }
    printf("%d", huaqiang.num[huaqiang.front]);
}