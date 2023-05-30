#include <stdio.h>
#include <stdlib.h>
int n, *tree;
int maxhight(int index)
{
    if (2*index<=n&&tree[index])
    {
        int leftSubTreeHight = maxhight(2 * index);
        int rightSubTreeHight = maxhight(2 * index + 1);
        int nowHight = leftSubTreeHight > rightSubTreeHight ? leftSubTreeHight+1 : rightSubTreeHight + 1;
        return nowHight;
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
    count = maxhight(1);
    printf("%d", count);
    return 0;
}