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
#endif