#pragma once
#include<stdio.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>
void InsertSort(int* arr, int size);//��������
void Shellsort(int* arr, int size);//ϣ������
//����
void Swp(int* head, int son, int parent);
//���µ���(���)
void AjustDown(int* head, int parent, int size);
//���ѣ���������ȫ��������Ϊ�洢�ṹ�ģ�
void TreeCreate(int* arr, int size);
//ÿ��Top���ֵ
int TreeTop(int* arr, int* size);
//����������
void TreeSort(int* arr, int size);
void TestOP();//���ܲ���


//ѡ�����򣨵���
void SelectSort(int* arr, int size);
//ð������Ҳ��̫�У�
void bubblesort(int* arr, int size);
//���ţ�����
void QuickSort1(int* arr, int size);