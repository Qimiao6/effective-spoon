#define _CRT_SECURE_NO_WARNINGS 1
//��ͷ+����+��ѭ��������ɾ���ʵ��
#include"SLilt.h"
void TestList1()
{
	SListNode* phead = NULL;
	//SListNode* pilst = CreateSList(10);//�������ڵ������

	
	SListPushBack( &phead, 11);//β��
	SListPushBack(&phead, 13);//β��
	SListPushBack(&phead, 18);//β��
	SListPushFront(&phead, 100);//ͷ��
	SListDel(&phead, 18);//ɾ��ָ����
	SLisePopBack(&phead);//βɾ
	SListPopFront(&phead);
	SLlistPrintf(phead);//�������
}//
int main()
{
	TestList1();
	return 0;
}