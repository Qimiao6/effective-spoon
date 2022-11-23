#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int TRDataType;

typedef struct Tree//节点
{
	TRDataType data;
	struct Tree* left;
	struct Tree* right;
}TR;
//创造节点
TR* TRCreate(TRDataType x);
//前序遍历
void PrevOrde(TR* head);
//后续遍历
void PostOrde(TR* head);
//中序遍历
void InOrde(TR* head);
//计算节点个数
int TRnodesize(TR* head);
//计算叶节点个数
int TRleafsize(TR* head);
//计算树的高度
int TRhet(TR* head);
//第K层个数
int Ksize(TR* head, int k);