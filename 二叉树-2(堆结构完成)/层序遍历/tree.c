#define _CRT_SECURE_NO_WARNINGS 1
#include"Orde.h"

PTree* TrNode(int x)//�����������ڵ�
{
	PTree* cur = (PTree*)malloc(sizeof(PTree));
	cur->data = x;
	cur->left = NULL;
	cur->right = NULL;
	return cur;
}