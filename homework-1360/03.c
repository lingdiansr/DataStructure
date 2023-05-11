/*
根据题干与提示，本题适合使用队列的数据结构
买瓜操作即将数量从队首出队，减一后再从队尾入队
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
typedef struct tt
{
    int num[20];
    int front;
    int rear;
} Quene;
void inQuene(Quene *q, int value)   //将value的值入队
{
    if (q->rear == SIZE - 1)//队满时不入队
    {
        return;
    }
    q->num[q->rear] = value;
    q->rear = (q->rear + 1) % SIZE; //防止rear溢出
}
int outQuene(Quene *q)  //返回值为出栈的元素值
{
    int value;
    if (q->front == q->rear) //队空时不出队
    {
        return;
    }
    value = q->num[q->front];//临时存放元素值
    q->front = (q->front + 1) % SIZE; //防止front溢出
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
    } //首先将所有元素入队
    for (int i = 0; i < time; i++)
    {
        num=outQuene(&huaqiang);
        num--;
        if (num)//将队首 元素出队，减一，不为零时再入队
        {
            inQuene(&huaqiang, num);
        }
    }
    //买一个瓜一秒，m就是买了m个瓜之后的队首
    printf("%d", huaqiang.num[huaqiang.front]);
}