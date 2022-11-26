#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"
//程序密码
void Password()
{
	int i = 3;
	printf("由于该文件含保密内容需先输入密码才能操作\n");
	char str[20] = { 0 };
	while (i--)
	{
		printf("请输入密码=>");
		gets_s(str, 20 - 1);
		if (strcmp(str, "zhu ge bin") == 0)
		{
			break;
		}
		if (i == 1)
		{
			printf("你是猪嘛\n");
			exit(-1);
		}
		printf("允许你再猜 %d 次\n", i);
	}
	system("cls");
	printf("密码正确\n");
}
//修改
void BookModif(BookNode* cur)
{
	if (cur)
	{
		int i = 0;
		printf("\n已查到对应联系人:\n");
		Print(cur, 1);
		printf("确认修改输入 1 ，取消输入 2 =>");
		scanf("%d", &i);
		if (i == 1)
		{
			BookScanf(cur);
		}
		printf("已修改成功:\n");
	}
	else
	{
		printf("没找到\n");
	}
}
//结构体输入
void BookScanf(BookNode* cur)
{
	while (getchar() != '\n');//清理缓存区
	printf("请输入名字=>");
	gets_s(cur->name, NAME);
	printf("请输入性别=>");
	gets_s(cur->gender, GE);
	printf("请输入电话=>");
	gets_s(cur->phone, PH);
	printf("请输入地址=>");
	gets_s(cur->site, SITE);
}

//返回通讯录人数
int Booksize(BookNode* phead)
{
	int i = 0;
	assert(phead);
	BookNode* cur = phead->next;
	while (cur != phead)
	{
		i++;
		cur = cur->next;
	}
	return i;
}
//判空，为空返回真
bool BookEmpty(BookNode* phead)
{
	assert(phead);
	return phead == phead->next;
}
//输出通讯录头标
void PrintFort()
{
	printf("联系人如下%-11s", " ");
	printf("%-20s", "名字");
	printf("%-15s", "性别");
	printf("%-40s", "电话");
	printf("%-6s\n", "地址");
}
//查找专属打印
void Fintprint(BookNode* cur)
{
	if (cur)
	{
		printf("\n已查到对应联系人:\n");
		Print(cur, 1);
	}
	else
	{
		printf("没找到\n");
	}
}
//打印通讯录
void Print(BookNode* phead, int x)//x != 1 打印通讯录所以成员
{
	BookNode* cur = phead;
	int size;
	if (x == 1)
	{
		size = 1;
	}
	else
	{
		size = Booksize(phead);
		cur = phead->next;
	}
	if (!size)
	{
		printf("通讯录为空\n");
		return;
	}
	PrintFort();
	printf("\n");
	int i = 0;
	while (i < size)
	{
		printf("联系人%-15d", i + 1);
		printf("%-20s", cur->name);
		printf("%-15s", cur->gender);
		printf("%-40s", cur->phone);
		printf("%-6s\n", cur->site);
		printf("\n");
		cur = cur->next;
		i++;
	}
}
//查找
BookNode* BookFind(BookNode* phead)
{
	assert(phead);
	int i = 0;
	int kk = 0;
	char str[SITE] = { 0 };
	if (BookEmpty(phead))//通讯录为空
	{
		printf("通讯录为空");
		return NULL;
	}
	int size = Booksize(phead);
	BookNode* cur = phead->next;//跳过哨兵位
again:
	printf("执行此操作需要先查找联系人，按<名字查找输入 1 > 按<电话查找输入 2 >");
	scanf("%d", &i);
	if (kk++ == 2)
	{
		printf("由于多次错误以为您返回菜单\n");
		return NULL;
	}
	//getchar();
	while (getchar() != '\n');//清理缓存区
	switch (i)
	{
	case 1:
		printf("请输入被查找人名字=>");
		gets_s(str, SITE - 1);
		while (cur != phead)
		{
			if (strcmp(str, cur->name) == 0)
			{
				return cur;//找到了返回pos位
			}
			cur = cur->next;
		}
		return NULL;
		break;
	case 2:
		printf("请输入被查找人电话=>");
		gets_s(str, SITE - 1);
		while (cur != phead)
		{
			if (strcmp(str, cur->phone) == 0)
			{
				return cur;//找到了返回pos位
			}
			cur = cur->next;
		}
		return NULL;
		break;
	default:
		printf("输入错误，请再输入一次\n");
		goto again;
	}
}
void Swp(BookNode* cur, BookNode* cur2)//交换函数
{
	BookNode ch;
	if (strcmp(cur->name, cur2->name) > 0)
	{
		memcpy(&ch, cur, offsetof(BookNode, prev));
		memcpy(cur, cur2, offsetof(BookNode, prev));//两起始地址，及大小
		memcpy(cur2, &ch, offsetof(BookNode, prev));
	}
}
void Bookqsort(BookNode* phead)//排序函数
{
	assert(phead);
	if (BookEmpty(phead))
	{
		printf("通讯录为空\n");
		return;
	}
	int size = Booksize(phead) - 1;
	while (size--)
	{
		BookNode* cur = phead->next;
		while (cur != phead)
		{
			if (cur->next != phead)
			{
				Swp(cur, cur->next);
			}
			cur = cur->next;
		}
	}
	printf("排序完成\n");
}
//格式化通讯录
void Book_Delete(BookNode* phead)
{
	int i = 0;
	printf("确认删除输入 1 ，取消输入 2 =>");
	scanf("%d", &i);
	if (i == 1)
	{
		BookFree(phead);//释放内存清空数据
		printf("格式化成功\n");
	}
	else
	{
		printf("已取消\n");
	}
}