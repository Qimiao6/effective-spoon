#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
//队的数据
typedef int TeDataType;
//用链表实现
typedef struct team
{
	TeDataType data;//数据
	struct team* next;
}Team;

//队的头，尾指针和元素个数
typedef struct kk
{
	int size;//数据个数
	Team* Front;//头
	Team* Tail;//尾
}Node;
//为方便采用头删，尾插的队结构
// 头为队的出口，尾为队的入口
//初始化列表
void SLInit(Node* Pteam);
//入列
void SLPush(Node* Pteam, TeDataType x);
//出列
void SLPop(Node* Pteam);
//检测队是否为空，为空返回真，不为空返回假
bool SLEmpty(Node* Pteam);
//获取头部元素
TeDataType SLFront(Node* Pteam);
//获取尾部元素
TeDataType SLTail(Node* Pteam);
//销毁队
void SLDestroy(Node* Pteam);
//获取队中数据个数
int SLsize(Node* Pteam);