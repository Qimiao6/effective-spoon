#define _CRT_SECURE_NO_WARNINGS 1
//无头+单向+非循环链表增删查改实现
#include"SLilt.h"
void TestList1()
{
	SListNode* phead = NULL;
	//SListNode* pilst = CreateSList(10);//创建个节点的链表

	
	SListPushBack( &phead, 11);//尾插
	SListPushBack(&phead, 13);//尾插
	SListPushBack(&phead, 18);//尾插
	SListPushFront(&phead, 100);//头插
	SListDel(&phead, 18);//删除指定数
	SLisePopBack(&phead);//尾删
	SListPopFront(&phead);
	SLlistPrintf(phead);//输出数据
}//
int main()
{
	TestList1();
	return 0;
}