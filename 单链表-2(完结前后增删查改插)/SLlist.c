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
			phead = newNode;//存头
			ptail = newNode;
		}
		else
		{
			ptail->nest = newNode;
			ptail = newNode;//存尾
		}
	}
	return phead;
}

//输出链表数据
void SListPrint(SListNode* pp)
{
	if (pp != NULL)
	{
		while (NULL != pp)
		{
 			printf("%d\n", pp->data);
			pp = pp->nest;//指向下一位
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
	if (p2->nest == NULL)//只有一个的情况
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
	//free(p1->nest);
	free(p2);
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
		SListNode* p1 = (*pp)->nest;//(*pp)->没括号会报错，两边都是解引用
		free(*pp);                 //会出现优先级问题 
		*pp = p1;
	}
}
//查找x,并返回指针,没则返回空指针
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* pp = plist;
	while (pp != NULL)
	{
		if (pp->data == x)
		{
			return pp;
		}
		pp = pp->nest;
	}
	return NULL;
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
				break;
			}
			return NULL;
		}
	}
	p2->nest= p1->nest;
	return p2->nest;
}
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	if (NULL == pos)
	{
		printf("无pos位\n");
		return;
	}
	SListNode* newnode = Dilatation(x);
	newnode->nest = pos->nest;
	pos->nest = newnode;
}
void SListInsertFront(SListNode** plist, SListNode* pos, SLTDateType x)
{
	assert(pos);
	if (NULL == pos)
	{
		printf("无pos位\n");
		return;
	}
	SListNode* newnode = Dilatation(x);
	SListNode* cur = *plist;
	if (cur == pos)//头插
	{
		newnode->nest = *plist;
		*plist = newnode;
		return;
	}
	while (cur->nest)//查找pos
	{
		if (cur->nest == pos)
		{
			newnode->nest = cur->nest;
			cur->nest = newnode;
			return;
		}
		cur = cur->nest;
	}
}
void SListEraseAfter(SListNode* pos)//删除pos位后一位
{
	if (NULL == pos->nest)
	{
		printf("pos为最后一位\n");
		return;
	}
	SListNode* cur = pos->nest;
	pos->nest = pos->nest->nest;
	free(cur);
}
void SListErasepresent(SListNode** plist, SListNode* pos)
{
	assert(pos);
	assert(plist);
	SListNode* cur = *plist;
	if (cur == pos)//头删
	{
		*plist = (*plist)->nest;
		free(pos);
		return;
	}
	while (cur->nest)
	{
		if (cur->nest == pos)
		{
			cur->nest = cur->nest->nest;
			free(pos);
			return;
		}
		cur = cur->nest;
	}
}