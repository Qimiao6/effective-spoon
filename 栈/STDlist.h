#pragma once
// 支持动态增长的栈
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <stdbool.h>
typedef int STDataType;
typedef struct ST
{

	STDataType* data;
	int top; //栈顶
	int capacity; //容量
}STD;

// 初始化栈 
void STInit(STD* pp);
// 入栈 
void Pus(STD* pp, STDataType x);
// 出栈 
void Pop(STD* pp);
// 获取栈顶元素 
int top(STD* pp);
// 获取栈中有效元素个数 
int len(STD* pp);
// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
bool empty(STD* pp);
// 销毁栈 
void del(STD* pp);
