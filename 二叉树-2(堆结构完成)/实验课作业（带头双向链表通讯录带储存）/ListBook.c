#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"

void BookInit(BookNode* phead)
{
	phead->prev = phead;//phead不存数据不在乎他的其他数据
	phead->next = phead;
}
//开辟通讯录成员内存
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
		printf("正在新建：\n");
		BookScanf(cur);
		printf("联系人新建成功\n");
	}
	return cur;
}
// pos位之后插入
void InsertPos(BookNode* pos ,BookNode* newnode)
{
	BookNode* cur = pos->next;
	cur->prev = newnode;
	newnode->next = cur;
	newnode->prev = pos;
	pos->next = newnode;
}

//删除pos位
void PopPos(BookNode* pos)
{
	BookNode* tail, * front;
	tail = pos->prev;
	front = pos->next;
	tail->next = front;
	front->prev = tail;
	free(pos);
}
//新建
void PushBack(BookNode* phead)
{
	assert(phead);
	BookNode* newnode = BookCreate(1);
	InsertPos(phead->prev, newnode);
}
//删除
void BookPop(BookNode* cur)
{
	if (cur)
	{
		int i = 0;
		printf("\n已查到对应联系人:\n");
		Print(cur, 1);
		printf("确认删除输入 1 ，取消输入 2 =>");
		scanf("%d", &i);
		if (i == 1)
		{
			PopPos(cur);
		}
	}
	else
	{
		printf("没找到\n");
	}
}
//释放内存
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
	printf("内存已释放\n");
}