#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDateType;//���ݵ���������
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* nest;//�ڵ�
}SListNode;
SListNode* Dilatation(SLTDateType x);//����
//����n���ڵ������
SListNode* CreateSList(SLTDateType x);
//�����������
void SListPrint(SListNode* pp);
//β��,��������x
void SListPushBack(SListNode** pp, SLTDateType x);
//βɾ
void SLisePopBack(SListNode** pp);
// �������ͷ��
void SListPushFront(SListNode** pp, SLTDateType x);
// ������ͷɾ
void SListPopFront(SListNode** pp);
// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x);
//ɾ���洢xֵ������
SListNode* SListDel(SListNode** plist, SLTDateType x);
void SListInsertAfter(SListNode* pos, SLTDateType x);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);