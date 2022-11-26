#pragma once
#include<assert.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stddef.h>
enum un//用于选择的枚举
{
	_fin,
	_add,
	_del,
	_find,
	_show,
	_modif,
	_qos,
	_delete
};
#define NAME 20//名字
#define GE 6//性别
#define PH 15//电话
#define SITE 40//地址

typedef struct book //通讯录框架
{
	char name[NAME]; //名字
	char gender[GE]; //性别
	char phone[PH];  //电话
	char site[SITE]; //地址
	struct book* prev;//上一个
	struct book* next;//下一个
}BookNode;

//初始化
void BookInit(BookNode* phead);
//开辟通讯录成员内存
BookNode* BookCreate(int x);
// pos位之后插入
void InsertPos(BookNode* pos, BookNode* newnode);
//尾插
void PushBack(BookNode* phead);
//删除pos位
void PopPos(BookNode* pos);
//删除
void BookPop(BookNode* cur);
//返回通讯录人数
int Booksize(BookNode* phead);
//打印
void Print(BookNode* phead, int x);
//判空，为空返回真
bool BookEmpty(BookNode* phead);
//查找
BookNode* BookFind(BookNode* phead);
//程序密码
void Password();
//修改
void BookModif(BookNode* cur);
//释放内存
void BookFree(BookNode* phead);


////////////////////////////菜单///////////////
void class();
void class1();
void class2();



////////////////////////////////////////////////////////////
//琐碎函数
//结构体输入
void BookScanf(BookNode* cur);
void PrintFort();
void Fintprint(BookNode* cur);//查找专属打印
void Bookqsort(BookNode* phead);//排序函数
void seve(BookNode* phead);//fprintf写入
void seveop(BookNode* phead);//家人导入文件
void seve1(BookNode* phead);//fprintf写入
void seveop1(BookNode* phead);//同学导入文件
void seve2(BookNode* phead);//fprintf写入
void seveop2(BookNode* phead);//同事导入文件
void Book_Delete(BookNode* phead);//格式化通讯录


