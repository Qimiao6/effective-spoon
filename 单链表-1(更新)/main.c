#define _CRT_SECURE_NO_WARNINGS 1
//无头+单向+非循环链表增删查改实现
#include"SLilt.h"
void TestList1()
{
	SListNode* phead = NULL;
	//SListNode* pilst = CreateSList(10);//创建个节点的链表

	
	SListPushBack( &phead, 11);//尾插
	SListPushBack(&phead, 100);//尾插
	SListPushBack(&phead, 18);//尾插
	SListPushFront(&phead, 100);//头插
	SListPushBack(&phead, 18);//尾插
	SListPushBack(&phead, 100);//尾插
	SListPushBack(&phead, 18);//尾插
	while (SListDel(&phead, 100) != NULL);//删除链表所有x值
	
	SListPrint(phead);
}//
int main()
{
	TestList1();
	return 0;
}