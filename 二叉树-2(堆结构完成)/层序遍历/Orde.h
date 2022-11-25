#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


//������
typedef struct Tree
{
	int data;
	struct Tree* left;
	struct Tree* right;
}PTree;
typedef struct Node//�ӽڵ�
{
	PTree* data;//����
	struct Node* next;
}PNode;
typedef struct Team//��
{
	PNode* front;
	PNode* tail;
	int size;//ʵ��Ԫ��
}PTeam;
//ɾ��
void Pophead(PTeam* phead);
//���ص�һ������
PTree* Tophead(PTeam* phead);
//����
void Push(PTeam* phead, PTree* x);
//�����ڵ�
PNode* Create(PTree* x);
//�п�
bool TeamEmpty(PTeam* phead);
//���ش�С
int Teamsize(PTeam* phead);
//�ӳ�ʼ��
void Init(PTeam* phead);


PTree* TrNode(int x);//�����������ڵ�
