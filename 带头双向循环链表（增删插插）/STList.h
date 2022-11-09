#pragma once
//��ͷ˫��ѭ������
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int STLDataType;
typedef struct STL
{
	STLDataType data;
	struct STL* prev;//��һ��
	struct STL* next;//��һ��
}STLNode;
//�ڴ�����
STLNode* STListCreate(STLDataType x);//
//ͷ�ڵ��ʼ��
STLNode* STLInit();
//β��
void PushBack(STLNode* phead, STLDataType x);
//βɾ
void PopBack(STLNode* phead);
//��ӡ
void Print(STLNode* phead);
//ͷ��
void PushFront(STLNode* phead, STLDataType x);
//ͷɾ
void PopFront(STLNode* phead);
//����posλ
STLNode* Find(STLNode* phead, STLDataType pos);
//ɾ��posλ
void PopPos(STLNode* pos);
// posλ֮�����
void InsertPos(STLNode* pos, STLDataType x);