#include <stdio.h>
#define MaxSize 10
int a[MaxSize][MaxSize];
int i, j, n;
//初始化矩阵
void Init()
{
	printf("输入二元关系的域的总个数：\n");
	scanf("%d", &n);
	printf("请输入关系矩阵。\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}
//自反性
int Reflexivity()
{ //对角线元素为 0：即不满足
	for (int i = 0; i < n; ++i)
	{
		if (a[i][i] == 1)
		{
			printf("具有自反性\n");
			return 1;
		}
	}
	return 1;
}
//传递性
int Transitivity()
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				if (a[i][j] && a[j][k] && !a[i][k])
				{
					printf("3.不具有传递性\n");
					return 0;
				}
			}
		}
	}
	return 1;
}

//对称性
int Symmetry()
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			if (a[i][j] == a[j][i]) //对称元素不相等：即不满足对称性
			{
				printf("具有对称性\n");
				return 1;
			}
			break;
		}
	}
	return 1;
}
int main()
{
	Init(); // 初始化矩阵
	if (Reflexivity() && Symmetry() && Transitivity())
	{
		printf("具有等价关系\n");
	}
	else
	{
		printf("不具有等价关系\n");
	}
	return 0;
}