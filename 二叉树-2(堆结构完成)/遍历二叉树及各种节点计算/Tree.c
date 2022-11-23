#define _CRT_SECURE_NO_WARNINGS 1
#include"Tree.h"
//����ڵ�
TR* TRCreate(TRDataType x)
{
	TR* cur = (TR*)malloc(sizeof(TR));
	if (NULL == cur)
	{
		perror("malloc");
		exit(-1);
	}
	cur->data = x;
	cur->left = NULL;
	cur->right = NULL;
	return cur;
}
//ǰ�����
void PrevOrde(TR* head)
{
	if (NULL == head)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", head->data);
	PrevOrde(head->left);
	PrevOrde(head->right);
}
//��������
void PostOrde(TR* head)
{
	if (head == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrde(head->left);
	PostOrde(head->right);
	printf("%d ", head->data);
}
//�������
void InOrde(TR* head)
{
	if (head == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrde(head->left);
	printf("%d ", head->data);
	InOrde(head->right);
}
//����ڵ����
int TRnodesize(TR* head)
{
	if (head == NULL)
	{
		return 0;
	}
	return TRnodesize(head->left) + TRnodesize(head->right) + 1;
}
//����Ҷ�ڵ����
int TRleafsize(TR* head)
{
	if (NULL == head)
	{
		return 0;
	}
	if (head->left == NULL && head->right == NULL)
	{
		return 1;
	}
	return TRleafsize(head->left) + TRleafsize(head->right);
}
//�������ĸ߶�
int TRhet(TR* head)
{
	if (NULL == head)
	{
		return 0;
	}
	int left = TRhet(head->left)+1;
	int right = TRhet(head->right)+1;
	return left > right ? left : right;
}
//��K�����
int Ksize(TR* head , int k)
{
	if (head == NULL)
	{
		return 0;
	}
	if (1 == k)
	{
		return 1;
	}
	return Ksize(head->left, k - 1) + Ksize(head->right, k - 1);
}