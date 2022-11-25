#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


//二叉树
typedef struct Tree
{
	int data;
	struct Tree* left;
	struct Tree* right;
}PTree;
typedef struct Node//队节点
{
	PTree* data;//数据
	struct Node* next;
}PNode;
typedef struct Team//队
{
	PNode* front;
	PNode* tail;
	int size;//实际元素
}PTeam;
//删除
void Pophead(PTeam* phead);
//返回第一个数据
PTree* Tophead(PTeam* phead);
//插入
void Push(PTeam* phead, PTree* x);
//创建节点
PNode* Create(PTree* x);
//判空
bool TeamEmpty(PTeam* phead);
//返回大小
int Teamsize(PTeam* phead);
//队初始化
void Init(PTeam* phead);


PTree* TrNode(int x);//创建二叉树节点
