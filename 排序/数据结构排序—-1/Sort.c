#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

void InsertSort(int* arr, int size)//��������
{
	int i = 0;//ѭ����
	for (i = 0; i < size - 1; i++)
	{
		int end = i;//ÿ�ε�β�±�
		int cur = arr[i + 1];//ÿ�β����i+1�±��Ԫ��
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
//ϣ������
void Shellsort(int* arr, int size)
{
	int gap = size;
	while (gap > 1)
	{
		gap = gap / 3 + 1;//��֤���һ��Ϊһ
		for (int i = 0; i < size - gap; i++)//gap�鲢��
		{
			int end = i;//ÿ�α�����������������һ��Ԫ���±�
			int cur = arr[end + gap];//ÿ�ε��ɲ������
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

//ѡ�����򣨵���
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
//ѡ������˫��Ҳ������Ч����Ȼ�
void SelectSort(int* arr, int size)//��ǰ�±������±�ͬʱ��
{
		int samll = 0;//���ŵ�һλ
		int max = size - 1;//���ŵ�һλ
		while (samll < max)//���ǰ���±�����������
		{
			int s = samll, m = samll;//��¼��Ҫ�ŵ��±�
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
			
			Swp(arr, s, samll);//����
			if (m == samll)//�ص����
			{
				m = s;
			}
			Swp(arr, m, max);//����
			max--;
			samll++;
		}
}

//ð������Ҳ��̫�У�
void bubblesort(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)//��һλ�����һλ��Ҫn-1��
	{
		for (int j = i ; j < size - 1; j++)
		{
			if (arr[i] < arr[i+1])
			{
				Swp(arr, i, j);//����
			}
		}
	}
}

//���ţ����˲���
//void QuickSort1(int* arr, int size)
//{
//	int kuy = 0;//��׼
//	int left = 0;
//	int right = size - 1;
//	while (left != right)//����˵�����������
//	{
//		while (left != right)
//		{
//			if (arr[right] < arr[kuy])//�ұ�arr[kuy]С��
//			{
//				break;
//			}
//			right--;
//		}
//		while (left != right)
//		{
//			if (arr[left] > arr[kuy])//�ұ�arr[kuy]���
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
	if (left >= right)//���ڵ��ڲ��ǵ��ڣ���Ϊ�ϼ���ӼӼ���
	{
		return ;
	}
	int kuy = left;//��׼
	while (left < right)//����˵�����������
	{
		while (left < right && arr[right] >= arr[kuy])//�ұ�arr[kuy]С��//����Ҳ����
		{
			right--;
		}
		while (left < right && arr[left] <= arr[kuy])//�ұ�arr[kuy]���
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