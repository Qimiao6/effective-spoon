#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void test1()
{
	SListNode* phead = SListCreate(0);//ÉÚ±øÎ»
	/*SListPushBack(phead, 10);
	SListPushBack(phead, 12);
	SListPushBack(phead, 14);
	SListPushBack(phead, 16);
	SListPushFront(phead, 100);
	SListPushFront(phead, 300);
	SListPushFront(phead, 400);*/
	SListPrint(phead);
}
int main()
{
	test1();
	return 0;
}