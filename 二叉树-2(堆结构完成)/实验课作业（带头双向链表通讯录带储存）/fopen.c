#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"
//家人
void seveop(BookNode* phead)//导入文件
{
	int i = 0;
	FILE* pp = fopen("家人.txt", "r");
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	BookNode mm;
	while (fscanf(pp, "%s%s%s%s", mm.name, mm.gender,
		mm.phone, mm.site) != EOF)
	{
		if (i)
		{
			BookNode* newnode = BookCreate(0);
			memcpy(newnode, &mm, offsetof(BookNode, prev));
			InsertPos(phead->next, newnode);//需要尾插
		}
		i++;
	}
	fclose(pp);
	pp = NULL;
	printf("通讯录已导入\n");
}
void seve(BookNode* phead)//fprintf写入
{
	int i = 0;
	FILE* pp = fopen("家人.txt", "w");//写的方式打开
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	int size = Booksize(phead);
	BookNode* cur = phead->next;
	fprintf(pp, "%-20s %-15s %-40s %-6s\n", "名字", "性别", "电话", "地址");
	for (i = 0; i < size; i++)
	{
		fprintf(pp, "%-20s %-15s %-40s %-6s\n", cur->name,cur->gender,cur->phone,cur->site);
		cur = cur->next;
	}
	fclose(pp);//关闭文件
	pp = NULL;
}
//同学
void seveop1(BookNode* phead)//导入文件
{
	int i = 0;
	FILE* pp = fopen("同学.txt", "r");
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	BookNode mm;
	while (fscanf(pp, "%s%s%s%s", mm.name, mm.gender,
		mm.phone, mm.site) != EOF)
	{
		if (i)
		{
			BookNode* newnode = BookCreate(0);
			memcpy(newnode, &mm, offsetof(BookNode, prev));
			InsertPos(phead->next, newnode);//需要尾插
		}
		i++;
	}
	fclose(pp);
	pp = NULL;
	printf("通讯录已导入\n");
}
void seve1(BookNode* phead)//fprintf写入
{
	int i = 0;
	FILE* pp = fopen("同学.txt", "w");//写的方式打开
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	int size = Booksize(phead);
	BookNode* cur = phead->next;
	fprintf(pp, "%-20s %-15s %-40s %-6s\n", "名字", "性别", "电话", "地址");
	for (i = 0; i < size; i++)
	{
		fprintf(pp, "%-20s %-15s %-40s %-6s\n", cur->name, cur->gender, cur->phone, cur->site);
		cur = cur->next;
	}
	fclose(pp);//关闭文件
	pp = NULL;
}
//同事
void seveop2(BookNode* phead)//导入文件
{
	int i = 0;
	FILE* pp = fopen("同事.txt", "r");
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	BookNode mm;
	while (fscanf(pp, "%s%s%s%s", mm.name, mm.gender,
		mm.phone, mm.site) != EOF)
	{
		if (i)
		{
			BookNode* newnode = BookCreate(0);
			memcpy(newnode, &mm, offsetof(BookNode, prev));
			InsertPos(phead->next, newnode);//需要尾插
		}
		i++;
	}
	fclose(pp);
	pp = NULL;
	printf("通讯录已导入\n");
}
void seve2(BookNode* phead)//fprintf写入
{
	int i = 0;
	FILE* pp = fopen("同事.txt", "w");//写的方式打开
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	int size = Booksize(phead);
	BookNode* cur = phead->next;
	fprintf(pp, "%-20s %-15s %-40s %-6s\n", "名字", "性别", "电话", "地址");
	for (i = 0; i < size; i++)
	{
		fprintf(pp, "%-20s %-15s %-40s %-6s\n", cur->name, cur->gender, cur->phone, cur->site);
		cur = cur->next;
	}
	fclose(pp);//关闭文件
	pp = NULL;
}