#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int n,x, *tree;
    bool flag=false;
    scanf("%d %d", &n,&x);
    tree = (int *)malloc(sizeof(int) * (n+1));
    for (int i =1 ; i <= n; i++)
    {
        scanf("%d", &tree[i]);
        if (tree[i]==x)
        {
            flag = true;
        }
    }
    printf(flag ? "YES" : "NO");
    return 0;
}