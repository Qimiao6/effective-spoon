#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int TRDataType;

typedef struct Tree//�ڵ�
{
	TRDataType data;
	struct Tree* left;
	struct Tree* right;
}TR;
//����ڵ�
TR* TRCreate(TRDataType x);
//ǰ�����
void PrevOrde(TR* head);
//��������
void PostOrde(TR* head);
//�������
void InOrde(TR* head);
//����ڵ����
int TRnodesize(TR* head);
//����Ҷ�ڵ����
int TRleafsize(TR* head);
//�������ĸ߶�
int TRhet(TR* head);
//��K�����
int Ksize(TR* head, int k);