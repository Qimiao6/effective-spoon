#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"
//家人
void class()
{
	int i = 0;//循环选择变量
	BookNode phead;//创建通讯录
	BookInit(&phead);//初始化通讯录
	seveop(&phead);//导入文件
	do
	{
		printf("* * * *	* * * *   家 人 通 讯 录   * * * * * * * *	\n");
		printf("* * * *	* * * *	 1: 新建  2: 删除  * * * * * * * *	\n");
		printf("* * * *	* * * *  3: 查找  4: 全显示  * * * * * * *	\n");
		printf("* * * *	* * * *	 5: 修改  6: 排序  * * * * * * * *	\n");
		printf("* * * *	* * *   7: 格式化  0: 退出   * * * * * * *	\n");
		printf("\n请输入需要的功能(数字)=> ");
		scanf("%d", &i);
		//i %= 10;
		switch (i)
		{
		case _add:
			PushBack(&phead);//新建
			break;
		case _del:
			BookPop(BookFind(&phead));//删除
			break;
		case _find:
			Fintprint(BookFind(&phead));//查找
			break;
		case _show:
			Print(&phead, 2);//全显示
			break;
		case _modif:
			BookModif(BookFind(&phead));//修改
			break;
		case _qos:
			Bookqsort(&phead);//排序(按首字母)
			break;
		case _delete:
			Book_Delete(&phead);
			break;
		case _fin:
			seve(&phead);//把数据保存到文件夹中
			printf("数据已保存\n");
			BookFree(&phead);//释放内存清空数据
			printf("已退出\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (i);
	return ;
}
//同学
void class1()
{
	int i = 0;//循环选择变量
	BookNode phead;//创建通讯录
	BookInit(&phead);//初始化通讯录
	seveop1(&phead);//导入文件
	do
	{
		printf("* * * *	* * * *   同 学 通 讯 录   * * * * * * * *	\n");
		printf("* * * *	* * * *	 1: 新建  2: 删除  * * * * * * * *	\n");
		printf("* * * *	* * * *  3: 查找  4: 全显示  * * * * * * *	\n");
		printf("* * * *	* * * *	 5: 修改  6: 排序  * * * * * * * *	\n");
		printf("* * * *	* * *   7: 格式化  0: 退出   * * * * * * *	\n");
		printf("\n请输入需要的功能(数字)=> ");
		scanf("%d", &i);
		//i %= 10;
		switch (i)
		{
		case _add:
			PushBack(&phead);//新建
			break;
		case _del:
			BookPop(BookFind(&phead));//删除
			break;
		case _find:
			Fintprint(BookFind(&phead));//查找
			break;
		case _show:
			Print(&phead, 2);//全显示
			break;
		case _modif:
			BookModif(BookFind(&phead));//修改
			break;
		case _qos:
			Bookqsort(&phead);//排序(按首字母)
			break;
		case _delete:
			Book_Delete(&phead);
			break;
		case _fin:
			seve1(&phead);//把数据保存到文件夹中
			printf("数据已保存\n");
			BookFree(&phead);//释放内存清空数据
			printf("已退出\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (i);
	return;
}

//同事
void class2()
{
	int i = 0;//循环选择变量
	BookNode phead;//创建通讯录
	BookInit(&phead);//初始化通讯录
	seveop2(&phead);//导入文件
	do
	{
		printf("* * * *	* * * *   同 事 通 讯 录   * * * * * * * *	\n");
		printf("* * * *	* * * *	 1: 新建  2: 删除  * * * * * * * *	\n");
		printf("* * * *	* * * *  3: 查找  4: 全显示  * * * * * * *	\n");
		printf("* * * *	* * * *	 5: 修改  6: 排序  * * * * * * * *	\n");
		printf("* * * *	* * *   7: 格式化  0: 退出   * * * * * * *	\n");
		printf("\n请输入需要的功能(数字)=> ");
		scanf("%d", &i);
		//i %= 10;
		switch (i)
		{
		case _add:
			PushBack(&phead);//新建
			break;
		case _del:
			BookPop(BookFind(&phead));//删除
			break;
		case _find:
			Fintprint(BookFind(&phead));//查找
			break;
		case _show:
			Print(&phead, 2);//全显示
			break;
		case _modif:
			BookModif(BookFind(&phead));//修改
			break;
		case _qos:
			Bookqsort(&phead);//排序(按首字母)
			break;
		case _delete:
			Book_Delete(&phead);
			break;
		case _fin:
			seve2(&phead);//把数据保存到文件夹中
			printf("数据已保存\n");
			BookFree(&phead);//释放内存清空数据
			printf("已退出\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (i);
	return;
}