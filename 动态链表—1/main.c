#define _CRT_SECURE_NO_WARNINGS 1
#include"Sequence list.h"
//���Ժ���
void Test()
{
	SL Sl ;
	SLInit(&Sl);//��ʼ��
	SLPushback(&Sl, 1);//д��
	SLPushback(&Sl, 1);//д��
	SLPushback(&Sl, 1);//д��

	SLPrint(&Sl);//��ӡ
	Destroy(&Sl);//����
}
int main()
{
	//���Ժ���;
	Test();
	return 0;
}