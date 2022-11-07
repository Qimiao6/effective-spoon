#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
SListNode* SListCreate(SLDataType x)//ÄÚ´æÉêÇë
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == newnode)
	{
		perror("malloc");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPushBack(SListNode* phead, SLDataType x)
{
	SListNode* cur = phead;
	SListNode* newnode = SListCreate(x);
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = newnode;
}
void SListPushFront(SListNode* phead, SLDataType x)
{
	SListNode* newnode = SListCreate(x);
	newnode->next = phead->next;
	phead->next = newnode;
}
void SListPrint(SListNode* phead)
{
	phead = phead->next;
	while(phead)
	{
		printf("%d->",phead->data);
		phead = phead->next;
	}
	printf("NULL\n");
}

