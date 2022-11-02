#define _CRT_SECURE_NO_WARNINGS 1
#include"SLilt.h"
//传需写入数据
SListNode* Dilatation(int x)//扩容
{
	SListNode* p1 = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == p1)
	{
		perror("malloc");
		return NULL;
	}
	p1->data = x;
	p1->nest = NULL;
	return p1;
}

//创建n个节点的链表
SListNode* CreateSList(SLTDateType x)
{
	int i = 0;
	SListNode* phead = NULL,*ptail = NULL;//头节点
	for (i = 0; i < x; i++)
	{
		SListNode* newNode = Dilatation(i);
		if (NULL == phead)
		{
			phead = newNode;
			ptail = newNode;
		}
		else
		{
			ptail->nest = newNode;
			ptail = newNode;
		}
	}
	return phead;
}

//输出链表数据
void SLlistPrintf(SListNode* pp)
{
	if (pp != NULL)
	{
		while (NULL != pp)
		{
 			printf("%d\n", pp->data);
			pp = pp->nest;
		}
	}
	else
	printf("NULL\n");
}
//尾插,插入数据x
void SListPushBack(SListNode**pp, SLTDateType x)
{
	SListNode* newNode = Dilatation(x);
	if (NULL == *pp)
	{
		*pp = newNode;
		return;
	}
	else
	{
		SListNode* p2 = *pp;
		while(NULL != p2->nest)//找尾巴
		{
			p2 = p2->nest;
		}
		p2->nest = newNode;//插入
	}
}
void SLisePopBack(SListNode** pp)//尾删
{
	assert(*pp);//为空时
	if (NULL == *pp)
	{
		printf("无可删数据");
		return;
	}
	SListNode* p2 = *pp;
	SListNode* p1 = NULL;
	if (p2->nest == NULL)
	{
		free(*pp);
		*pp = NULL;
		return;
	}
	while (p2->nest)
	{
		 p1 = p2;
		 p2 = p2->nest;
	}
	free(p1->nest);
	p1->nest = NULL;
}

//头插
void SListPushFront(SListNode** pp, SLTDateType x)
{
	SListNode* newNode = Dilatation(x);
		newNode->nest = *pp;
		*pp = newNode;
}

//头删
void SListPopFront(SListNode** pp)
{
	assert(*pp);//为空时
	if (NULL == *pp)
	{
		printf("无可删数据");
		return;
	}
	else
	{
		SListNode* p1 = (*pp)->nest;
		free(*pp);
		*pp = p1;
	}
}
//查找x,并返回指针,没则返回空指针
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* pp = plist;
	while (pp->data != x )
	{
		pp = pp->nest;
		if (pp == NULL)
		{
			return NULL;
		}
	}
	return pp;
}
//删除存储x值的数据
SListNode* SListDel(SListNode** plist, SLTDateType x)
{
	assert(*plist);
	if ((*plist)->data == x)
	{
		SListPopFront(plist);
	}
	SListNode* p1 = *plist;
	SListNode* p2 = NULL;
	while (p1->data != x)
	{
		p2 = p1;
		p1 = p1->nest;
		if (p1->nest == NULL)
		{
			if (p1->data == x)
			{
				SLisePopBack(plist);
			}
			return NULL;
		}
	}
	p2->nest= p1->nest;
	return p2->nest;
}