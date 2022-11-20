#define _CRT_SECURE_NO_WARNINGS 1
#include"Aj.h"

//向下排序
void AdjustDown(int* head, int size)
{
	int parent1 = (size - 1) / 2;//算出第一颗树的根
	for (; parent1 >= 0; parent1--)//对每棵树一一排序
	{
		int parent = parent1;
		while (parent < size)
		{
			int son = parent* 2 +1;//找孩子
			if (son >= size)
			{
				break;
			}
			if (son + 1 < size && head[son] < head[son + 1])
			{
				son += 1;
			}
			if (head[son] > head[parent])
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
}