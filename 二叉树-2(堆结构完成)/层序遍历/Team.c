#define _CRT_SECURE_NO_WARNINGS 1

#include"Orde.h"

//初始化 带哨兵位
void Init(PTeam * phead)
{
	phead->front = NULL;
	phead->tail = NULL;
	phead->size = 0;
}
//元素个数
int Teamsize(PTeam* phead)
{
	assert(phead);
	return phead->size;
}
//为空反回真
bool TeamEmpty(PTeam* phead)
{
	assert(phead);
	return phead->size == 0;
}
//创建节点
PNode* Create(PTree* x)
{
	PNode* cur = (PNode*)malloc(sizeof(PNode));
	if (NULL == cur)
	{
		perror("malloc");
		exit(-1);
	}
	cur->data = x;
	cur->next = NULL;
	return cur;
}
//插入
void Push(PTeam* phead , PTree* x)
{
	assert(phead);
	PNode* cur = Create(x);
	if (phead->front == NULL)//队为空
	{
		phead->front = cur;
		phead->tail = cur;
		phead->size++;
	}
	else
	{
		phead->tail->next = cur;
		phead->tail = cur;
		phead->size++;
	}
}
PTree* Tophead(PTeam* phead)//返回第一个数据
{
	assert(phead);
	assert(!TeamEmpty(phead));
	return phead->front->data;//返回
}
void Pophead(PTeam* phead)
{
	assert(phead);
	assert(!TeamEmpty(phead));//有数据才能删
	PNode* cur = phead->front;
	phead->front = phead->front->next;
	if (phead->front == NULL)
	{
		phead->tail = NULL;
	}
	free(cur);
	phead->size--;
}