#pragma once
//���ڱ�λ������
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SL
{
	SLDataType data;
	struct SL* next;
}SListNode;
SListNode* SListCreate(SLDataType x);//�ڴ濪��
void SListPushBack(SListNode* phead, SLDataType x);//β��
void SListPushFront(SListNode* phead, SLDataType x);//ͷ��
void SListPrint(SListNode* phead);//���