#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"
//����
void seveop(BookNode* phead)//�����ļ�
{
	int i = 0;
	FILE* pp = fopen("����.txt", "r");
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
			InsertPos(phead->next, newnode);//��Ҫβ��
		}
		i++;
	}
	fclose(pp);
	pp = NULL;
	printf("ͨѶ¼�ѵ���\n");
}
void seve(BookNode* phead)//fprintfд��
{
	int i = 0;
	FILE* pp = fopen("����.txt", "w");//д�ķ�ʽ��
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	int size = Booksize(phead);
	BookNode* cur = phead->next;
	fprintf(pp, "%-20s %-15s %-40s %-6s\n", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < size; i++)
	{
		fprintf(pp, "%-20s %-15s %-40s %-6s\n", cur->name,cur->gender,cur->phone,cur->site);
		cur = cur->next;
	}
	fclose(pp);//�ر��ļ�
	pp = NULL;
}
//ͬѧ
void seveop1(BookNode* phead)//�����ļ�
{
	int i = 0;
	FILE* pp = fopen("ͬѧ.txt", "r");
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
			InsertPos(phead->next, newnode);//��Ҫβ��
		}
		i++;
	}
	fclose(pp);
	pp = NULL;
	printf("ͨѶ¼�ѵ���\n");
}
void seve1(BookNode* phead)//fprintfд��
{
	int i = 0;
	FILE* pp = fopen("ͬѧ.txt", "w");//д�ķ�ʽ��
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	int size = Booksize(phead);
	BookNode* cur = phead->next;
	fprintf(pp, "%-20s %-15s %-40s %-6s\n", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < size; i++)
	{
		fprintf(pp, "%-20s %-15s %-40s %-6s\n", cur->name, cur->gender, cur->phone, cur->site);
		cur = cur->next;
	}
	fclose(pp);//�ر��ļ�
	pp = NULL;
}
//ͬ��
void seveop2(BookNode* phead)//�����ļ�
{
	int i = 0;
	FILE* pp = fopen("ͬ��.txt", "r");
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
			InsertPos(phead->next, newnode);//��Ҫβ��
		}
		i++;
	}
	fclose(pp);
	pp = NULL;
	printf("ͨѶ¼�ѵ���\n");
}
void seve2(BookNode* phead)//fprintfд��
{
	int i = 0;
	FILE* pp = fopen("ͬ��.txt", "w");//д�ķ�ʽ��
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	int size = Booksize(phead);
	BookNode* cur = phead->next;
	fprintf(pp, "%-20s %-15s %-40s %-6s\n", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < size; i++)
	{
		fprintf(pp, "%-20s %-15s %-40s %-6s\n", cur->name, cur->gender, cur->phone, cur->site);
		cur = cur->next;
	}
	fclose(pp);//�ر��ļ�
	pp = NULL;
}