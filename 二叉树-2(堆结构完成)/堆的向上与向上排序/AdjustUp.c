#define _CRT_SECURE_NO_WARNINGS 1
#include"Aj.h"
void Swp(int* head, int x, int y)
{
	int bb = head[x];
	head[x] = head[y];
	head[y] = bb;
}
//��������
void AdjustUp(int* head, int i)
{
	//�Ҹ��׹�ʽ��son-1��/2
	int pareat = 0;
	for (int son = 1; son < i; son++)
	{
		while (son > 0)
		{
			pareat = (son - 1) / 2;//�Ҹ���
			if (head[son] > head[pareat])
			{
				Swp(head, pareat, son);//����
			}
			else
			{
				break;
			}
			son = pareat;//���º���λ
		}
	}
}