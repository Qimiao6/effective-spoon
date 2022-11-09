#pragma once
//带头双向循环链表
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int STLDataType;
typedef struct STL
{
	STLDataType data;
	struct STL* prev;//上一个
	struct STL* next;//下一个
}STLNode;
//内存申请
STLNode* STListCreate(STLDataType x);//
//头节点初始化
STLNode* STLInit();
//尾插
void PushBack(STLNode* phead, STLDataType x);
//尾删
void PopBack(STLNode* phead);
//打印
void Print(STLNode* phead);
//头插
void PushFront(STLNode* phead, STLDataType x);
//头删
void PopFront(STLNode* phead);
//查找pos位
STLNode* Find(STLNode* phead, STLDataType pos);
//删除pos位
void PopPos(STLNode* pos);
// pos位之后插入
void InsertPos(STLNode* pos, STLDataType x);