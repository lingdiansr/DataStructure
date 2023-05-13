#include <stdio.h>
#define SIZE 20
int main()
{
    int stack[SIZE];
    int top=0;
    int n,count=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &stack[n-i-1]);
    }
    top = n - 1;
    while (top>-1)
    {
        if (stack[top])
        {
            top -= 2;
        }
        else
        {
            top--;
        }
        count++;
    }
    printf("%d", count);
}