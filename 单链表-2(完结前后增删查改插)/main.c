#define _CRT_SECURE_NO_WARNINGS 1
//��ͷ+����+��ѭ��������ɾ���ʵ��
#include"SLilt.h"
//void TestList1()
//{
//	SListNode* phead = NULL;
//	//SListNode* pilst = CreateSList(10);//�������ڵ������
//
//	
//	SListPushBack(&phead, 100);//β��
//	SListPushBack(&phead, 18);//β��
//	SListPushFront(&phead, 100);//ͷ��
//	SListPushBack(&phead, 18);//β��
//	SListPushBack(&phead, 100);//β��
//	SListPushBack(&phead, 18);//β��
//	while (SListDel(&phead, 100) != NULL);//ɾ����������xֵ
//	
//	SListPrint(phead);
//}//
//void TestList2()
//{
//	SListNode* phead = NULL;
//	SListPushBack(&phead, 11);//β��
//	SListPushBack(&phead, 12);//β��
//	SListPushBack(&phead, 13);//β��
//	SListPushBack(&phead, 14);//β��
//	SListPushBack(&phead, 15);//β��
//	SListNode* pos = SListFind(phead, 13);
//	SListInsertAfter(pos, 100);//��posλ�󷽲���
//	SListPrint(phead);
//}//
void TestList2()
{
	SListNode* phead = NULL;
	SListPushBack(&phead, 11);//β��
	SListPushBack(&phead, 12);//β��
	SListPushBack(&phead, 13);//β��
	SListPushBack(&phead, 14);//β��
	SListPushBack(&phead, 15);//β��
	SListNode* pos = SListFind(phead, 15);
	//SListEraseAfter(pos);//ɾ��pos��һλ
	SListErasepresent(&phead, pos);
	SListPrint(phead);
}//
int main()
{
	TestList2();
	return 0;
}