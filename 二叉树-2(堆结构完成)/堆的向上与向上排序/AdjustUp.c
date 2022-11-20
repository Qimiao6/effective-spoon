#define _CRT_SECURE_NO_WARNINGS 1
#include"Aj.h"
void Swp(int* head, int x, int y)
{
	int bb = head[x];
	head[x] = head[y];
	head[y] = bb;
}
//向上排序
void AdjustUp(int* head, int i)
{
	//找父亲公式（son-1）/2
	int pareat = 0;
	for (int son = 1; son < i; son++)
	{
		while (son > 0)
		{
			pareat = (son - 1) / 2;//找父亲
			if (head[son] > head[pareat])
			{
				Swp(head, pareat, son);//交换
			}
			else
			{
				break;
			}
			son = pareat;//更新孩子位
		}
	}
}