#define _CRT_SECURE_NO_WARNINGS 1
#include"STList.h"
void test()
{
	STLNode* phead = STLInit();
	PushFront(phead,2);
	PushFront(phead, 2);
	PushFront(phead, 2);
	PushBack(phead, 11);
	PushBack(phead, 222);
	PushBack(phead, 33);
	PushBack(phead, 44);


	STLNode* pos =  Find(phead, 2);
	if (pos)
	{
		printf("pos = %d\n", pos->data);
	}
	else
	{
		printf("没有和pos相符的数据\n");
	}
	InsertPos(pos, 10);
	
	Print(phead);
}
int main()
{
	test();
	return 0;
}