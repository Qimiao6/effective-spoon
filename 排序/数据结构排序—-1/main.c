#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"
void PrintSort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

}
int main()
{
	int arr[20] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		arr[i] = 20-i;
	}
	//TreeSort(arr, 20);
	//PrintSort(arr, 20);
	/*SelectSort(arr, 20);
	PrintSort(arr, 20);*/
	 TestOP();
	/*bubblesort(arr, 20);
	PrintSort(arr, 20);*/
	/*PrintSort(arr, 20);

	 QuickSort1(arr, 20);
	 PrintSort(arr, 20);*/
	return 0;
}