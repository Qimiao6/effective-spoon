#define _CRT_SECURE_NO_WARNINGS 1
#include"STDlist.h"
void STInit(STD* pp)
{
	assert(pp);
	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (NULL == tmp)
	{
		perror("malloc\n");
		exit(-1);
	}
	pp->data = tmp;
	pp->capacity = 4;
	pp->top = 0;
	printf("��ʼ���ɹ�\n");
}
void Pus(STD* pp , STDataType x)
{
	assert(pp);
	if (pp->top == pp->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(pp->data,sizeof(STDataType) * pp->capacity*2);
		if (NULL == tmp)
		{
			perror("realloc\n");
			exit(-1);
		}
		pp->data = tmp;
		pp->capacity *= 2;
		printf("���ݳɹ�\n");
	}
	pp->data[pp->top] = x;
	pp->top++;
	printf("����ɹ�\n");
}
void Pop(STD* pp)
{
	assert(pp);
	if (pp->top == 0)
	{
		printf("�޿�ɾ����\n");
		return ;
	}
	pp->top--;
}
int top(STD* pp)
{
	assert(pp);
	if (pp->top == 0)
	{
		printf("������\n");
		return;
	}
	return pp->data[pp->top-1];
}
int len(STD* pp)
{
	assert(pp);
	return pp->top;
}
bool empty(STD* pp)
{
	assert(pp);
	if (pp->top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	//return pp->top == 0;//���ķ���
}
void del(STD* pp)
{
	assert(pp);
	free(pp->data);
	pp->data = NULL;
	pp->capacity = pp->top = 0;
}

