#define _CRT_SECURE_NO_WARNINGS 1

#include"Orde.h"

//��ʼ�� ���ڱ�λ
void Init(PTeam * phead)
{
	phead->front = NULL;
	phead->tail = NULL;
	phead->size = 0;
}
//Ԫ�ظ���
int Teamsize(PTeam* phead)
{
	assert(phead);
	return phead->size;
}
//Ϊ�շ�����
bool TeamEmpty(PTeam* phead)
{
	assert(phead);
	return phead->size == 0;
}
//�����ڵ�
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
//����
void Push(PTeam* phead , PTree* x)
{
	assert(phead);
	PNode* cur = Create(x);
	if (phead->front == NULL)//��Ϊ��
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
PTree* Tophead(PTeam* phead)//���ص�һ������
{
	assert(phead);
	assert(!TeamEmpty(phead));
	return phead->front->data;//����
}
void Pophead(PTeam* phead)
{
	assert(phead);
	assert(!TeamEmpty(phead));//�����ݲ���ɾ
	PNode* cur = phead->front;
	phead->front = phead->front->next;
	if (phead->front == NULL)
	{
		phead->tail = NULL;
	}
	free(cur);
	phead->size--;
}