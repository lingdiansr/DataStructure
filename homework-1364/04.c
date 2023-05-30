#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n, tree1[50] = {0}, tree2[50] = {0}, m;
    bool flag = true;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tree1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &tree2[i]);
    }
    for (int i = 0; i < 50; i++)
    {
        if (tree1[i] != tree2[i])
        {
            flag = false;
        }
    }
    printf("%s", flag ? "YES" : "NO");
    return 0;
}