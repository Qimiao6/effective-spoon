#define _CRT_SECURE_NO_WARNINGS 1
#include"Aj.h"
int main()
{
	int arr[] = { 2,44,66,11,88,33,0,26,84 };
	int size = sizeof(arr) / sizeof(arr[1]);
	//�����ϵ�������һ����
	//AdjustUp(arr,size );
	AdjustDown(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}