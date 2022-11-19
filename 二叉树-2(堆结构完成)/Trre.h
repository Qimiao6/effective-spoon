#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int TrDataType;

typedef struct TR
{
	TrDataType* data;
	int size;//数据个数
	int capacity;//容量
}Tree;
//初始化
void HeadInit(Tree* He);
//销毁
void HeadDestroy(Tree* He);
//扩容
void HeadCreate(Tree* He);
//交换
void HeadSwp(Tree* He, int x, int y);
//排序
void HeadCos(Tree* He, int descenant);
//插入
void HeadPush(Tree* He, TrDataType x);
//删除
void HeadPop(Tree* He);
//判断二叉树是否为空
bool HeadEmpty(Tree* He);
//返回元素个数
int HeadSize(Tree* He);

