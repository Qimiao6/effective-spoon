#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int TrDataType;

typedef struct TR
{
	TrDataType* data;
	int size;//���ݸ���
	int capacity;//����
}Tree;
//��ʼ��
void HeadInit(Tree* He);
//����
void HeadDestroy(Tree* He);
//����
void HeadCreate(Tree* He);
//����
void HeadSwp(Tree* He, int x, int y);
//����
void HeadCos(Tree* He, int descenant);
//����
void HeadPush(Tree* He, TrDataType x);
//ɾ��
void HeadPop(Tree* He);
//�ж϶������Ƿ�Ϊ��
bool HeadEmpty(Tree* He);
//����Ԫ�ظ���
int HeadSize(Tree* He);

