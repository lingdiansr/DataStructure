#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100
int tree[MAX_N]; // 数组表示的二叉树

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &tree[i]);
    }

    int queue[MAX_N] = {0}, front = 0, rear = -1; // 队列的容量至少为二叉树上节点数目
    queue[++rear] = 0;                            // 根节点入队

    while (front <= rear)
    {
        int node_idx = queue[front++]; // 取出队首节点
        if (tree[node_idx] != 0)
        {
            printf("%d ", tree[node_idx]);
            queue[++rear] = node_idx * 2 + 1; // 左孩子入队
            queue[++rear] = node_idx * 2 + 2; // 右孩子入队
        }
    }

    return 0;
}
