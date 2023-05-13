#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int main()
{
    int stack[SIZE+1];
    int top=0;
    int n,time;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&time);
        while (top&&stack[top]>time)
        {
            top--;
        }
        top++;
        stack[top] = time;
    }
    printf("%d", top);
}