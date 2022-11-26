#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"

void BookInit(BookNode* phead)
{
	phead->prev = phead;//phead�������ݲ��ں�������������
	phead->next = phead;
}
//����ͨѶ¼��Ա�ڴ�
BookNode* BookCreate(int x)
{
	BookNode* cur = (BookNode*)malloc(sizeof(BookNode));
	if (!cur)
	{
		perror("malloc");
		exit(-1);
	}
	if (x == 1)
	{
		printf("�����½���\n");
		BookScanf(cur);
		printf("��ϵ���½��ɹ�\n");
	}
	return cur;
}
// posλ֮�����
void InsertPos(BookNode* pos ,BookNode* newnode)
{
	BookNode* cur = pos->next;
	cur->prev = newnode;
	newnode->next = cur;
	newnode->prev = pos;
	pos->next = newnode;
}

//ɾ��posλ
void PopPos(BookNode* pos)
{
	BookNode* tail, * front;
	tail = pos->prev;
	front = pos->next;
	tail->next = front;
	front->prev = tail;
	free(pos);
}
//�½�
void PushBack(BookNode* phead)
{
	assert(phead);
	BookNode* newnode = BookCreate(1);
	InsertPos(phead->prev, newnode);
}
//ɾ��
void BookPop(BookNode* cur)
{
	if (cur)
	{
		int i = 0;
		printf("\n�Ѳ鵽��Ӧ��ϵ��:\n");
		Print(cur, 1);
		printf("ȷ��ɾ������ 1 ��ȡ������ 2 =>");
		scanf("%d", &i);
		if (i == 1)
		{
			PopPos(cur);
		}
	}
	else
	{
		printf("û�ҵ�\n");
	}
}
//�ͷ��ڴ�
void BookFree(BookNode* phead)
{
	BookNode* tail = phead->next;
	BookNode* Front = phead->next;
	while (tail != phead)
	{
		Front = tail->next;
		free(tail);
		tail = Front;
	}
	BookInit(phead );
	printf("�ڴ����ͷ�\n");
}