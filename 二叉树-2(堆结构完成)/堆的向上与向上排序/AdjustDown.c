#define _CRT_SECURE_NO_WARNINGS 1
#include"Aj.h"

//��������
void AdjustDown(int* head, int size)
{
	int parent1 = (size - 1) / 2;//�����һ�����ĸ�
	for (; parent1 >= 0; parent1--)//��ÿ����һһ����
	{
		int parent = parent1;
		while (parent < size)
		{
			int son = parent* 2 +1;//�Һ���
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