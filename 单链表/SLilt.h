#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDateType;//数据的数据类型
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* nest;//节点
}SListNode;
SListNode* Dilatation(SLTDateType x);//扩容
//创建n个节点的链表
SListNode* CreateSList(SLTDateType x);
//输出链表数据
void SLlistPrintf(SListNode* pp);
//尾插,插入数据x
void SListPushBack(SListNode** pp, SLTDateType x);
//尾删
void SLisePopBack(SListNode** pp);
// 单链表的头插
void SListPushFront(SListNode** pp, SLTDateType x);
// 单链表头删
void SListPopFront(SListNode** pp);
// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x);
//删除存储x值的数据
SListNode* SListDel(SListNode** plist, SLTDateType x);