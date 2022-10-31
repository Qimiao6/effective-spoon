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
		printf("程序结束，内存已释放\n");
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
	//if (Sl->size_t == Sl->capacity)
	//{
	//	SLDilatation(Sl);
	//}
	//Sl->a[Sl->size_t] = x;
	//printf("数据已保存\n");
	//Sl->size_t++;//储存
	// 
	//直接调用插入
	SeqListInsert(Sl, Sl->size_t+1, x);
}
//尾删
void SLPopback(SL* Sl)
{
	assert(Sl);
	//assert(Sl->size_t > 0);//Debug时检查，Release时此段会消失
	//if (Sl->size_t)//不监测只每次减减，size_t有可能会变负数
	//{              //导致写入时，越界访问
	//	Sl->size_t--;
	//	printf("已删除\n");
	//}
	//else
	//{
	//	printf("数据已清空,无可删数据\n");
	//}
	SeqListErase(Sl, Sl->size_t);
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

void SeqListPushFront(SL* Sl, SLdatatype x)//头插
{
	assert(Sl);
	//int right = Sl->size_t;
	//int left = 0;
	//if (Sl->size_t == Sl->capacity)//空间检查
	//{
	//	SLDilatation(Sl);
	//}
	//for (left = 0; right > left; right--)
	//{
	//	Sl->a[right] = Sl->a[right - 1];
	//}
	//Sl->a[0] = x;
	//Sl->size_t++;
	//printf("头部插入成功\n");

	//直接调调用插入
	SeqListInsert(Sl, 1 , x);
}

void SeqListPopFront(SL* Sl)//头删
{
	assert(Sl);
	//assert(Sl->size_t > 0);//debug时检查
	//if (Sl->size_t == 0)
	//{
	//	printf("数据已清空,无可删数据\n");
	//	return;
	//}
	//int left = 0;
	//for (left = 0; left + 1 < Sl->size_t; left++)
	//{
	//	Sl->a[left] = Sl->a[left + 1];
	//}
	//Sl->size_t--;
	//printf("头部删除成功\n");
	SeqListErase(Sl, 1);
}
#ifdef _hh_
需传结构体指针
需找的值
查找起始位置下标
#endif
int SeqListFind(SL* Sl, SLdatatype x, int start)//查找
{
	int left = 0;
	assert(Sl);
	for (left = start; left < Sl->size_t; left++)
	{
		if (Sl->a[left] == x)
		{
			printf("下标是%d\n", left);
			return left;
		}
	}
	return -1;//找不到
}
//头插，尾插均调用
//在pos 位置插入 值x
void SeqListInsert(SL* Sl, int pos, SLdatatype x)
{
	assert(Sl);
	pos--;//位置从0开始
	//assert(pos <= Sl->size_t);
	if (pos > Sl->size_t)
	{
		printf("插入位置错误请重新输入\n");
		return;
	}
	int right = Sl->size_t;
	if (Sl->size_t == Sl->capacity)//空间检查
	{
		SLDilatation(Sl);
	}
	for (; right != pos; right--)
	{
		Sl->a[right] = Sl->a[right - 1];
	}
	Sl->a[right] = x;
	Sl->size_t++;
	printf("插入成功\n");
}

//删除pos位置的值
void SeqListErase(SL* Sl, size_t pos)
{
	int left = pos - 1 ;
	assert(Sl);
	assert(left < Sl->size_t);
	if (left >= Sl->size_t)
	{
		printf("pos过大，无可删数据\n");
		return;
	}
	for (; left + 1 < Sl->size_t; left++)
	{
		Sl->a[left] = Sl->a[left + 1];
	}
	Sl->size_t--;
	printf("删除成功\n");
}