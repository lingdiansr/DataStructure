#include <stdio.h>
#include <stdlib.h>
int n, *tree;
void bianli(int index)
{
    if (2 * index <= n && tree[index])
    {
        printf("%d ", tree[index]);
        bianli(2 * index);
        bianli(2 * index + 1);
    }
    else if (tree[index])
    {
        printf("%d ", tree[index]);
    }
}
int main()
{
    scanf("%d", &n);
    tree = (int *)malloc(sizeof(int) * (n+1));
    for (int i =1 ; i <= n; i++)
    {
        scanf("%d", &tree[i]);
    }
    bianli(1);
    return 0;
}