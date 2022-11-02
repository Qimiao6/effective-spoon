#define _CRT_SECURE_NO_WARNINGS 1
#include"SLilt.h"
//����д������
SListNode* Dilatation(int x)//����
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

//����n���ڵ������
SListNode* CreateSList(SLTDateType x)
{
	int i = 0;
	SListNode* phead = NULL,*ptail = NULL;//ͷ�ڵ�
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

//�����������
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
//β��,��������x
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
		while(NULL != p2->nest)//��β��
		{
			p2 = p2->nest;
		}
		p2->nest = newNode;//����
	}
}
void SLisePopBack(SListNode** pp)//βɾ
{
	assert(*pp);//Ϊ��ʱ
	if (NULL == *pp)
	{
		printf("�޿�ɾ����");
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

//ͷ��
void SListPushFront(SListNode** pp, SLTDateType x)
{
	SListNode* newNode = Dilatation(x);
		newNode->nest = *pp;
		*pp = newNode;
}

//ͷɾ
void SListPopFront(SListNode** pp)
{
	assert(*pp);//Ϊ��ʱ
	if (NULL == *pp)
	{
		printf("�޿�ɾ����");
		return;
	}
	else
	{
		SListNode* p1 = (*pp)->nest;
		free(*pp);
		*pp = p1;
	}
}
//����x,������ָ��,û�򷵻ؿ�ָ��
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
//ɾ���洢xֵ������
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