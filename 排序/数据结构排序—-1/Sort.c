#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

void InsertSort(int* arr, int size)//插入排序
{
	int i = 0;//循环数
	for (i = 0; i < size - 1; i++)
	{
		int end = i;//每次的尾下标
		int cur = arr[i + 1];//每次插入第i+1下标的元素
		while (end >= 0)
		{
			if (arr[end] < cur)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = cur;
	}
}
//希尔排序
void Shellsort(int* arr, int size)
{
	int gap = size;
	while (gap > 1)
	{
		gap = gap / 3 + 1;//保证最后一次为一
		for (int i = 0; i < size - gap; i++)//gap组并排
		{
			int end = i;//每次被当成有序数组的最后一个元素下标
			int cur = arr[end + gap];//每次当成插入的数
			while (end >= 0)
			{
				if (arr[end] < cur)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = cur;
		}
		//	PrintSort(arr, 20);
	}
}

//选择排序（单）
//void SelectSort(int* arr, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int cur = i;
//		for (int j = i + 1; j < size; j++)
//		{
//			if (arr[j] > arr[cur])
//			{
//				cur = j;
//			}
//		}
//		Swp(arr, i, cur);
//	}
//}
//选择排序（双）也不管用效率依然差劲
void SelectSort(int* arr, int size)//最前下标和最后下标同时排
{
		int samll = 0;//需排的一位
		int max = size - 1;//需排的一位
		while (samll < max)//如果前两下标错过则排完了
		{
			int s = samll, m = samll;//记录两要排的下标
			for (int i = samll + 1; i <= max; i++)
			{
				if (arr[i] > arr[m])
				{
					m = i;
				}
				if (arr[i] < arr[s])
				{
					s = i;
				}
			}
			
			Swp(arr, s, samll);//交换
			if (m == samll)//重叠情况
			{
				m = s;
			}
			Swp(arr, m, max);//交换
			max--;
			samll++;
		}
}

//冒泡排序（也不太行）
void bubblesort(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)//第一位到最后一位需要n-1次
	{
		for (int j = i ; j < size - 1; j++)
		{
			if (arr[i] < arr[i+1])
			{
				Swp(arr, i, j);//交换
			}
		}
	}
}

//快排，单趟测试
//void QuickSort1(int* arr, int size)
//{
//	int kuy = 0;//标准
//	int left = 0;
//	int right = size - 1;
//	while (left != right)//出来说明两者相等了
//	{
//		while (left != right)
//		{
//			if (arr[right] < arr[kuy])//找比arr[kuy]小的
//			{
//				break;
//			}
//			right--;
//		}
//		while (left != right)
//		{
//			if (arr[left] > arr[kuy])//找比arr[kuy]大的
//			{
//				break;
//			}
//			left++;
//		}
//		if (left != right)
//		{
//			Swp(arr, left, right);
//		}
//		if (left == right)
//		{
//			Swp(arr, left,kuy);
//		}
//	}
//}

void QuickSort2(int* arr, int begin,int end)
{
	int left = begin;
	int right = end;
	if (left >= right)//大于等于不是等于，因为上级会加加减减
	{
		return ;
	}
	int kuy = left;//标准
	while (left < right)//出来说明两者相等了
	{
		while (left < right && arr[right] >= arr[kuy])//找比arr[kuy]小的//等于也不管
		{
			right--;
		}
		while (left < right && arr[left] <= arr[kuy])//找比arr[kuy]大的
		{
			left++;
		}
			Swp(arr, left, right);
	}
	Swp(arr, left, kuy);
	QuickSort2( arr, begin, left-1);
	QuickSort2(arr, left+1, end);
}
void QuickSort1(int* arr, int size)
{
	QuickSort2(arr, 0, size - 1);
}