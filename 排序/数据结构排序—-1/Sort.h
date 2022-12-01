#pragma once
#include<stdio.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>
void InsertSort(int* arr, int size);//插入排序
void Shellsort(int* arr, int size);//希尔排序
//交换
void Swp(int* head, int son, int parent);
//向下调整(大堆)
void AjustDown(int* head, int parent, int size);
//建堆（堆是用完全二叉树作为存储结构的）
void TreeCreate(int* arr, int size);
//每次Top最大值
int TreeTop(int* arr, int* size);
//堆整体排序
void TreeSort(int* arr, int size);
void TestOP();//性能测试


//选择排序（单）
void SelectSort(int* arr, int size);
//冒泡排序（也不太行）
void bubblesort(int* arr, int size);
//快排，单趟
void QuickSort1(int* arr, int size);