#define _CRT_SECURE_NO_WARNINGS 1
#include"Sequence list.h"
void SLInit(SL* Sl)//初始化
{
	assert(Sl);
	int* pp = (int*)calloc(5, sizeof(int));
	if (NULL == pp)
	{
		perror("calloc");
		return;
	}
	Sl->a = pp;
	printf("内存初始化成功\n");
	Sl->capacity = 5;//空间大小
	Sl->size_t = 0;//储存数
}
void Destroy(SL* Sl)
{
	assert(Sl);
	if (Sl->a)
	{
		free(Sl->a);
		Sl->a = NULL;
		Sl->capacity = 0;//空间容量
		Sl->size_t = 0;
		printf("内存已释放\n");
	}
}
//内存扩容
void SLDilatation(SL* Sl)
{
	assert(Sl);
	int* pp = (int*)realloc(Sl->a, sizeof(int) * Sl->capacity + sizeof(int) * 5);
	if (NULL == pp)
	{
		perror("realloc");
		return;
	}
	Sl->a = pp;
	Sl->capacity += 5;
	printf("空间扩容成功\n");
}
//尾插
void SLPushback(SL* Sl, SLdatatype x)
{
	assert(Sl);
	if (Sl->size_t == Sl->capacity)
	{
		SLDilatation(Sl);
	}
	Sl->a[Sl->size_t] = x;
	printf("数据已保存\n");
	Sl->size_t++;//储存
}
//尾删
void SLPopback(SL* Sl)
{
	assert(Sl);
	assert(Sl->size_t > 0);//Debug时检查，Release时此段会消失
	if (Sl->size_t)//不监测只每次减减，size_t有可能会变负数
	{              //导致写入时，越界访问
		Sl->size_t--;
		printf("已删除\n");
	}
	else
	{
		printf("数据已清空,无可删数据\n");
	}
}
//打印
void SLPrint(SL* Sl)
{
	assert(Sl);//防止接收到空指针，对空指针的引用是非法的
	int i = 0; //因为不指向任何地址，且只有调试时才会报错
	for (i = 0; i < Sl->size_t; i++)//如有几万行会异常麻烦
	{
		printf("%d ", Sl->a[i]);
	}
	printf("\n");
}