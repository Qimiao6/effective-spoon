#define _CRT_SECURE_NO_WARNINGS 1
#include"Sequence list.h"
//���Ժ���
void Test()
{
	SL Sl ;
	SLInit(&Sl);//��ʼ��
	SLPushback(&Sl, 1);//β��
	SLPushback(&Sl, 2);//β��
	SLPushback(&Sl, 3);//β��
	SLPushback(&Sl, 4);//β��
	SLPushback(&Sl, 5);//β��
	SLPushback(&Sl, 6);//β��
	SLPushback(&Sl, 7);//β��
	SeqListFind(&Sl, 5, 0);//�����±�
	SeqListFind(&Sl, 4, 0);//�����±�

	SLPrint(&Sl);//��ӡ
	Destroy(&Sl);//����
}
int main()
{
	//���Ժ���;
	Test();
	return 0;
}