#include <stdio.h>
#include <stdlib.h>
int n, *tree;
int main()
{
    scanf("%d", &n);
    tree = (int *)malloc(sizeof(int) * (n + 1));
    for (int i =1 ; i <= n; i++)
    {
        scanf("%d", &tree[i]);
        if (tree[i])
        {
            printf("%d ", tree[i]);
        }
        
    }
    return 0;
}