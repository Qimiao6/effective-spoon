#define _CRT_SECURE_NO_WARNINGS 1
#include"Top_k.h"
//void text1()//ÿ�����ɵĶ�һ��
//{
//	int d = 9;
//	while (d--)
//	{
//		printf("%d\n", rand());
//	}
//	return 0;
//}
// void text1()//����
//{
//	int d = 9;
//	srand((unsigned)time(NULL));
//	srand(3);//ͬ�ȳ�ʼ�����£��·�rand��������ֵһ��
//	while (d--)
//	{
//		printf("%d ", rand());
//	}
//	printf("\n");
//	srand(1);
//	printf("%d ", rand());
//	srand(3);//ͬ�ȳ�ʼ�����£��·�rand��������ֵһ��
//	printf("%d ", rand());
//
//}
//void text1()//Ϊ������ͬ����ʱ�����ʼ��rand
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
	Create(100000);//����������ļ���
	FILE* head = fopen("Top_t .txt", "r");
	if (NULL == head)
	{
		perror("fopen");
		exit(-1);
	}
	int i = 0;
	while (i < 5)//���ļ�ǰ���ֵ��������
	{
		fscanf(head, "%d", &arr[i]);
		i++;
	}
	for (i = (4 - 1) / 2; i >= 0; i--)//�������Ϊ�ѣ��˴���С��
	{
		AjustDown(arr, i, size);
	}
	//��ʣ�����ݺͶѶ��Ƚϣ�ֻҪ�ȶѶ�����滻
	while (fscanf(head, "%d", &val) != EOF)
	{
		if (val > arr[0])
		{
			arr[0] = val;
			AjustDown(arr, 0, size);
		}
	}
	for (i = 0; i < 5; i++)//���
	{
		printf("%d ", arr[i]);
	}
	fclose(head);
	return 0;
}