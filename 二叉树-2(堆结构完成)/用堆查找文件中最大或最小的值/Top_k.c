#define _CRT_SECURE_NO_WARNINGS 1
#include"Top_k.h"
void Swp(int *head,int son,int parent)
{
	int ch = head[son];
	head[son] = head[parent];
	head[parent] = ch;
}
void AjustDown(int* head, int parent, int size)
{
	int son;
	assert(head);
	while ((son = (parent * 2) + 1) < size)//结束说明此时的parent已为叶节点
	{
		
		if (son + 1 < size && head[son + 1] < head[son])//比较左右孩子大小
		{
			son += 1;
		}
		if (head[son] < head[parent])
		{
			Swp(head, son, parent);
			parent = son;
		}
		else
		{
			break;
		}
	}
}
void Create(int n)
{
	srand((unsigned)time(NULL));
	FILE* phead = fopen("Top_t .txt", "w");
	if (NULL == phead)
	{
		perror("fopen");
		return;
	}
	while (n--)
	{
		int val = rand() % 100000;
		if (n == 1 || n ==  6 || n == 10 || n == 15)
			val += 10000000;
		fprintf(phead, "%d\n", val);
	}
	fclose(phead);
}