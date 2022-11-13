#define _CRT_SECURE_NO_WARNINGS 1
#include"Team.h"
//队列的实现
void Test1()
{
	Node SLTTeam;
	 SLInit(&SLTTeam);
	 SLPush(&SLTTeam, 1);
	
	 SLPop(&SLTTeam);
	 SLPush(&SLTTeam, 3);
	 SLPush(&SLTTeam, 8);
	 SLPush(&SLTTeam, 5);
	 SLPush(&SLTTeam, 6);
	 SLPush(&SLTTeam, 9);
	 SLPush(&SLTTeam, 11);
	 printf("头:%d号\n", SLFront(&SLTTeam));
	 printf("尾:%d号\n", SLTail(&SLTTeam));
	 printf("有效元素个数:%d个\n", SLsize(&SLTTeam));
	 SLDestroy(&SLTTeam);
	 
}
int main()
{
	Test1();
	return 0;
}


