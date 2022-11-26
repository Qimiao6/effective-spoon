#pragma once
#include<assert.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stddef.h>
enum un//����ѡ���ö��
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
#define NAME 20//����
#define GE 6//�Ա�
#define PH 15//�绰
#define SITE 40//��ַ

typedef struct book //ͨѶ¼���
{
	char name[NAME]; //����
	char gender[GE]; //�Ա�
	char phone[PH];  //�绰
	char site[SITE]; //��ַ
	struct book* prev;//��һ��
	struct book* next;//��һ��
}BookNode;

//��ʼ��
void BookInit(BookNode* phead);
//����ͨѶ¼��Ա�ڴ�
BookNode* BookCreate(int x);
// posλ֮�����
void InsertPos(BookNode* pos, BookNode* newnode);
//β��
void PushBack(BookNode* phead);
//ɾ��posλ
void PopPos(BookNode* pos);
//ɾ��
void BookPop(BookNode* cur);
//����ͨѶ¼����
int Booksize(BookNode* phead);
//��ӡ
void Print(BookNode* phead, int x);
//�пգ�Ϊ�շ�����
bool BookEmpty(BookNode* phead);
//����
BookNode* BookFind(BookNode* phead);
//��������
void Password();
//�޸�
void BookModif(BookNode* cur);
//�ͷ��ڴ�
void BookFree(BookNode* phead);


////////////////////////////�˵�///////////////
void class();
void class1();
void class2();



////////////////////////////////////////////////////////////
//���麯��
//�ṹ������
void BookScanf(BookNode* cur);
void PrintFort();
void Fintprint(BookNode* cur);//����ר����ӡ
void Bookqsort(BookNode* phead);//������
void seve(BookNode* phead);//fprintfд��
void seveop(BookNode* phead);//���˵����ļ�
void seve1(BookNode* phead);//fprintfд��
void seveop1(BookNode* phead);//ͬѧ�����ļ�
void seve2(BookNode* phead);//fprintfд��
void seveop2(BookNode* phead);//ͬ�µ����ļ�
void Book_Delete(BookNode* phead);//��ʽ��ͨѶ¼


