#pragma once
// ֧�ֶ�̬������ջ
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <stdbool.h>
typedef int STDataType;
typedef struct ST
{

	STDataType* data;
	int top; //ջ��
	int capacity; //����
}STD;

// ��ʼ��ջ 
void STInit(STD* pp);
// ��ջ 
void Pus(STD* pp, STDataType x);
// ��ջ 
void Pop(STD* pp);
// ��ȡջ��Ԫ�� 
int top(STD* pp);
// ��ȡջ����ЧԪ�ظ��� 
int len(STD* pp);
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
bool empty(STD* pp);
// ����ջ 
void del(STD* pp);
