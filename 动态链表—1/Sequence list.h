//#pragma once//���ض���
//��̬˳���
#ifdef _PP_//����
#define _PP_
#include<stdio.h>
#define M 5
typedef int SLdatatype;
typedef struct Seqlist
{
	SLdatatype a[M];//����
	int size_t;//�Ѵ洢����
}SL;
//��ʼ��
void SLInit(SL a);
//β��βɾ
void SLPushBack(SL a , SLdatatype x);
#endif

//��̬�汾
#ifndef _DD_
#define _DD_

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLdatatype;

typedef struct Seqlist
{
	SLdatatype* a;//����
	int size_t;//�Ѵ洢����
	int capacity;//�ռ�����
}SL;
//��ʼ��
void SLInit(SL* Sl );
//β��
void SLPushback(SL* Sl, SLdatatype x);
//βɾ
void SLPopback(SL* Sl);
//�ڴ��ͷţ���������
void Destroy(SL* Sl);
//�ڴ�����
void SLDilatation(SL* Sl);
//��ӡ
void SLPrint(SL* Sl);
#endif