//#pragma once//防重定义
//静态顺序表
#ifdef _PP_//不用
#define _PP_
#include<stdio.h>
#define M 5
typedef int SLdatatype;
typedef struct Seqlist
{
	SLdatatype a[M];//链表
	int size_t;//已存储人数
}SL;
//初始化
void SLInit(SL a);
//尾插尾删
void SLPushBack(SL a , SLdatatype x);
#endif

//动态版本
#ifndef _DD_
#define _DD_

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLdatatype;

typedef struct Seqlist
{
	SLdatatype* a;//链表
	int size_t;//已存储人数
	int capacity;//空间容量
}SL;
//初始化
void SLInit(SL* Sl );
//尾插
void SLPushback(SL* Sl, SLdatatype x);
//尾删
void SLPopback(SL* Sl);
//内存释放，数据销毁
void Destroy(SL* Sl);
//内存扩容
void SLDilatation(SL* Sl);
//打印
void SLPrint(SL* Sl);
// 顺序表头插
void SeqListPushFront(SL* Sl, SLdatatype x);
// 顺序表头删
void SeqListPopFront(SL* Sl);
// 顺序表查找
int SeqListFind(SL* Sl, SLdatatype x ,int start );
// 顺序表在pos位置插入x
void SeqListInsert(SL* Sl, size_t pos, SLdatatype x);
// 顺序表删除pos位置的值
void SeqListErase(SL* Sl, size_t pos);
#endif