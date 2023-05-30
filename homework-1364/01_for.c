#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *tree;
    int count = 0;
    scanf("%d", &n);
    tree = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tree[i]);
        if (tree[i])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}