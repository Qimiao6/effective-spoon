#define _CRT_SECURE_NO_WARNINGS 1
#include"Sequence list.h"
//测试函数
void Test()
{
	SL Sl ;
	SLInit(&Sl);//初始化
	SLPushback(&Sl, 1);//尾插
	SLPushback(&Sl, 2);//尾插
	SLPushback(&Sl, 3);//尾插
	SLPushback(&Sl, 4);//尾插
	SLPushback(&Sl, 5);//尾插
	SLPushback(&Sl, 6);//尾插
	SLPushback(&Sl, 7);//尾插
	SeqListFind(&Sl, 5, 0);//查找下标
	SeqListFind(&Sl, 4, 0);//查找下标

	SLPrint(&Sl);//打印
	Destroy(&Sl);//销毁
}
int main()
{
	//测试函数;
	Test();
	return 0;
}