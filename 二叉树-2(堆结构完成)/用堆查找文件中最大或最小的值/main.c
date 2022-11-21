#define _CRT_SECURE_NO_WARNINGS 1
#include"Top_k.h"
//void text1()//每次生成的都一样
//{
//	int d = 9;
//	while (d--)
//	{
//		printf("%d\n", rand());
//	}
//	return 0;
//}
// void text1()//测试
//{
//	int d = 9;
//	srand((unsigned)time(NULL));
//	srand(3);//同等初始条件下，下方rand输出的随机值一致
//	while (d--)
//	{
//		printf("%d ", rand());
//	}
//	printf("\n");
//	srand(1);
//	printf("%d ", rand());
//	srand(3);//同等初始条件下，下方rand输出的随机值一致
//	printf("%d ", rand());
//
//}
//void text1()//为避免相同利用时间戳初始化rand
//{
//	int d = 9;
//	srand(time(NULL));
//	while (d--)
//	{
//		printf("%d\n", rand());
//	}
//	return 0;
//	
//}
int main()
{
	/*text1();*/
	int arr[5] = { 0 };
	int val;
	int size = sizeof(arr) / sizeof(arr[1]);
	Create(100000);//生产随机数文件夹
	FILE* head = fopen("Top_t .txt", "r");
	if (NULL == head)
	{
		perror("fopen");
		exit(-1);
	}
	int i = 0;
	while (i < 5)//将文件前五个值放入数组
	{
		fscanf(head, "%d", &arr[i]);
		i++;
	}
	for (i = (4 - 1) / 2; i >= 0; i--)//将数组变为堆，此处建小堆
	{
		AjustDown(arr, i, size);
	}
	//将剩下数据和堆顶比较，只要比堆顶大就替换
	while (fscanf(head, "%d", &val) != EOF)
	{
		if (val > arr[0])
		{
			arr[0] = val;
			AjustDown(arr, 0, size);
		}
	}
	for (i = 0; i < 5; i++)//输出
	{
		printf("%d ", arr[i]);
	}
	fclose(head);
	return 0;
}