#define _CRT_SECURE_NO_WARNINGS 1
#include"Sequence list.h"
//测试函数
void Test()
{
	SL Sl ;
	SLInit(&Sl);//初始化
	SLPushback(&Sl, 1);//尾插

	SLPopback(&Sl);
	SLPrint(&Sl);//打印
	Destroy(&Sl);//销毁
}
int main()
{
	//测试函数;
	Test();
	return 0;
}