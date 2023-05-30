#include <stdio.h>

// 定义二叉树结点结构体
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// 创建一个新结点
struct TreeNode *create_node(int val)
{
    struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// 根据数组创建二叉树
struct TreeNode *create_tree(int nums[], int n, int i)
{
    // 如果当前结点越界或者当前结点的值为0，则返回NULL
    if (i >= n || nums[i] == 0)
    {
        return NULL;
    }
    // 创建当前结点
    struct TreeNode *root = create_node(nums[i]);
    // 递归创建左子树
    root->left = create_tree(nums, n, 2 * i + 1);
    // 递归创建右子树
    root->right = create_tree(nums, n, 2 * i + 2);
    return root;
}

// 计算二叉树结点数
int count_nodes(struct TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_count = count_nodes(root->left);
    int right_count = count_nodes(root->right);
    return left_count + right_count + 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    struct TreeNode *root = create_tree(nums, n, 0);
    int res = count_nodes(root);
    printf("%d\n", res);
    return 0;
}
