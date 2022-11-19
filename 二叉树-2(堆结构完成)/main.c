#define _CRT_SECURE_NO_WARNINGS 1
#include"Trre.h"
void text1()
{
	Tree Head;
	HeadInit(&Head);
	HeadPush(&Head ,15);
	HeadPush(&Head, 35);

	HeadPush(&Head, 5);
	HeadPush(&Head, 55);
	HeadPush(&Head, 105);
	HeadPush(&Head, 15);
	 HeadPop(&Head);
	for (int i = 0; i < Head.size; i++)
	{
		printf("%d ", Head.data[i]);
	}
	printf("\n");
	HeadDestroy(&Head);


}
int main()
{
	text1();
	return 0;
}
