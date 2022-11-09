#define _CRT_SECURE_NO_WARNINGS 1
#include"STList.h"
STLNode* STListCreate(STLDataType x)
{
	STLNode* newnode = (STLNode*)malloc(sizeof(STLNode));
	if (NULL == newnode)
	{
		perror("malloc");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
STLNode* STLInit()
{
	STLNode* phead = STListCreate(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void PushBack(STLNode* phead, STLDataType x)
{
	assert(phead);
	/*STLNode* newnode = STListCreate(x);
	STLNode* cur = phead->prev;
	cur->next = newnode;
	newnode->prev = cur;
	newnode->next = phead;
	phead->prev = newnode;*/
	InsertPos(phead->prev, x);
}
void PopBack(STLNode* phead)
{
	assert(phead->next != phead);//保住哨兵位
	STLNode* cur = phead->prev;
	STLNode* cur2 = cur->prev;
	cur2->next = phead;
	phead->prev = cur2;
	free(cur);
}
void Print(STLNode* phead)
{
	STLNode* cur = phead ->next;
	while (cur != phead)
	{
		printf("%d=>", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void PushFront(STLNode* phead , STLDataType x)
{
	assert(phead);
	//STLNode* newnode = STListCreate(x);
	//STLNode* cur = phead->next;
	//cur->prev = newnode;
	//newnode->next = cur;
	//newnode->prev = phead;
	//phead->next = newnode;
	InsertPos(phead, x);
}
void PopFront(STLNode* phead)
{
	assert(phead->next != phead);//保住哨兵位
	STLNode* cur = phead->next;
	STLNode* cur2 = cur->next;
	phead->next = cur2;
	cur2->prev = phead;
}
#ifdef mm
找到了返回pos位
找不到返回NULL
#endif
STLNode* Find(STLNode* phead,STLDataType pos)
{
	STLNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == pos)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void PopPos(STLNode* pos)
{
	STLNode* tail, * front;
	tail = pos->prev;
	front = pos->next;
	tail->next = front;
	front->prev = tail;
	free(pos);
}
// pos位之后插入
void InsertPos(STLNode* pos , STLDataType x)
{
	STLNode* newnode = STListCreate(x);
	STLNode* cur = pos->next;
	cur->prev = newnode;
	newnode->next = cur;
	newnode->prev =pos;
	pos->next = newnode;
}
