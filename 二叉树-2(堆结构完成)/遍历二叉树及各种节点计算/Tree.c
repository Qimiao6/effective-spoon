#define _CRT_SECURE_NO_WARNINGS 1
#include"Tree.h"
//创造节点
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
//前序遍历
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
//后续遍历
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
//中序遍历
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
//计算节点个数
int TRnodesize(TR* head)
{
	if (head == NULL)
	{
		return 0;
	}
	return TRnodesize(head->left) + TRnodesize(head->right) + 1;
}
//计算叶节点个数
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
//计算树的高度
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
//第K层个数
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