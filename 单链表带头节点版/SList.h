#pragma once
//带哨兵位的链表
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SL
{
	SLDataType data;
	struct SL* next;
}SListNode;
SListNode* SListCreate(SLDataType x);//内存开辟
void SListPushBack(SListNode* phead, SLDataType x);//尾插
void SListPushFront(SListNode* phead, SLDataType x);//头插
void SListPrint(SListNode* phead);//输出