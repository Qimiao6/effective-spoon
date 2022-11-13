#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
//�ӵ�����
typedef int TeDataType;
//������ʵ��
typedef struct team
{
	TeDataType data;//����
	struct team* next;
}Team;

//�ӵ�ͷ��βָ���Ԫ�ظ���
typedef struct kk
{
	int size;//���ݸ���
	Team* Front;//ͷ
	Team* Tail;//β
}Node;
//Ϊ�������ͷɾ��β��Ķӽṹ
// ͷΪ�ӵĳ��ڣ�βΪ�ӵ����
//��ʼ���б�
void SLInit(Node* Pteam);
//����
void SLPush(Node* Pteam, TeDataType x);
//����
void SLPop(Node* Pteam);
//�����Ƿ�Ϊ�գ�Ϊ�շ����棬��Ϊ�շ��ؼ�
bool SLEmpty(Node* Pteam);
//��ȡͷ��Ԫ��
TeDataType SLFront(Node* Pteam);
//��ȡβ��Ԫ��
TeDataType SLTail(Node* Pteam);
//���ٶ�
void SLDestroy(Node* Pteam);
//��ȡ�������ݸ���
int SLsize(Node* Pteam);