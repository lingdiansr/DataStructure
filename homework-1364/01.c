#include <stdio.h>
#include <stdlib.h>
int n, *tree;
int countnodes(int index)
{
    if (2*index <= n && tree[index])
    {
        int leftChildNum = countnodes(2 * index);
        int rightChildNum = countnodes(2 * index + 1);
        return leftChildNum + rightChildNum+1;
    }
    else if (tree[index])
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}
int main()
{
    int count;
    scanf("%d", &n);
    tree = (int *)malloc(sizeof(int) * (n + 1));
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &tree[i]);
    }
    count = countnodes(1);
    printf("%d", count);
    return 0;
}