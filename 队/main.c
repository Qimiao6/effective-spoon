#define _CRT_SECURE_NO_WARNINGS 1
#include"Team.h"
//���е�ʵ��
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
	 printf("ͷ:%d��\n", SLFront(&SLTTeam));
	 printf("β:%d��\n", SLTail(&SLTTeam));
	 printf("��ЧԪ�ظ���:%d��\n", SLsize(&SLTTeam));
	 SLDestroy(&SLTTeam);
	 
}
int main()
{
	Test1();
	return 0;
}


