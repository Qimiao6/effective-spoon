#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"
//��������
void Password()
{
	int i = 3;
	printf("���ڸ��ļ�������������������������ܲ���\n");
	char str[20] = { 0 };
	while (i--)
	{
		printf("����������=>");
		gets_s(str, 20 - 1);
		if (strcmp(str, "zhu ge bin") == 0)
		{
			break;
		}
		if (i == 1)
		{
			printf("��������\n");
			exit(-1);
		}
		printf("�������ٲ� %d ��\n", i);
	}
	system("cls");
	printf("������ȷ\n");
}
//�޸�
void BookModif(BookNode* cur)
{
	if (cur)
	{
		int i = 0;
		printf("\n�Ѳ鵽��Ӧ��ϵ��:\n");
		Print(cur, 1);
		printf("ȷ���޸����� 1 ��ȡ������ 2 =>");
		scanf("%d", &i);
		if (i == 1)
		{
			BookScanf(cur);
		}
		printf("���޸ĳɹ�:\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}
}
//�ṹ������
void BookScanf(BookNode* cur)
{
	while (getchar() != '\n');//��������
	printf("����������=>");
	gets_s(cur->name, NAME);
	printf("�������Ա�=>");
	gets_s(cur->gender, GE);
	printf("������绰=>");
	gets_s(cur->phone, PH);
	printf("�������ַ=>");
	gets_s(cur->site, SITE);
}

//����ͨѶ¼����
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
//�пգ�Ϊ�շ�����
bool BookEmpty(BookNode* phead)
{
	assert(phead);
	return phead == phead->next;
}
//���ͨѶ¼ͷ��
void PrintFort()
{
	printf("��ϵ������%-11s", " ");
	printf("%-20s", "����");
	printf("%-15s", "�Ա�");
	printf("%-40s", "�绰");
	printf("%-6s\n", "��ַ");
}
//����ר����ӡ
void Fintprint(BookNode* cur)
{
	if (cur)
	{
		printf("\n�Ѳ鵽��Ӧ��ϵ��:\n");
		Print(cur, 1);
	}
	else
	{
		printf("û�ҵ�\n");
	}
}
//��ӡͨѶ¼
void Print(BookNode* phead, int x)//x != 1 ��ӡͨѶ¼���Գ�Ա
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
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	PrintFort();
	printf("\n");
	int i = 0;
	while (i < size)
	{
		printf("��ϵ��%-15d", i + 1);
		printf("%-20s", cur->name);
		printf("%-15s", cur->gender);
		printf("%-40s", cur->phone);
		printf("%-6s\n", cur->site);
		printf("\n");
		cur = cur->next;
		i++;
	}
}
//����
BookNode* BookFind(BookNode* phead)
{
	assert(phead);
	int i = 0;
	int kk = 0;
	char str[SITE] = { 0 };
	if (BookEmpty(phead))//ͨѶ¼Ϊ��
	{
		printf("ͨѶ¼Ϊ��");
		return NULL;
	}
	int size = Booksize(phead);
	BookNode* cur = phead->next;//�����ڱ�λ
again:
	printf("ִ�д˲�����Ҫ�Ȳ�����ϵ�ˣ���<���ֲ������� 1 > ��<�绰�������� 2 >");
	scanf("%d", &i);
	if (kk++ == 2)
	{
		printf("���ڶ�δ�����Ϊ�����ز˵�\n");
		return NULL;
	}
	//getchar();
	while (getchar() != '\n');//��������
	switch (i)
	{
	case 1:
		printf("�����뱻����������=>");
		gets_s(str, SITE - 1);
		while (cur != phead)
		{
			if (strcmp(str, cur->name) == 0)
			{
				return cur;//�ҵ��˷���posλ
			}
			cur = cur->next;
		}
		return NULL;
		break;
	case 2:
		printf("�����뱻�����˵绰=>");
		gets_s(str, SITE - 1);
		while (cur != phead)
		{
			if (strcmp(str, cur->phone) == 0)
			{
				return cur;//�ҵ��˷���posλ
			}
			cur = cur->next;
		}
		return NULL;
		break;
	default:
		printf("���������������һ��\n");
		goto again;
	}
}
void Swp(BookNode* cur, BookNode* cur2)//��������
{
	BookNode ch;
	if (strcmp(cur->name, cur2->name) > 0)
	{
		memcpy(&ch, cur, offsetof(BookNode, prev));
		memcpy(cur, cur2, offsetof(BookNode, prev));//����ʼ��ַ������С
		memcpy(cur2, &ch, offsetof(BookNode, prev));
	}
}
void Bookqsort(BookNode* phead)//������
{
	assert(phead);
	if (BookEmpty(phead))
	{
		printf("ͨѶ¼Ϊ��\n");
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
	printf("�������\n");
}
//��ʽ��ͨѶ¼
void Book_Delete(BookNode* phead)
{
	int i = 0;
	printf("ȷ��ɾ������ 1 ��ȡ������ 2 =>");
	scanf("%d", &i);
	if (i == 1)
	{
		BookFree(phead);//�ͷ��ڴ��������
		printf("��ʽ���ɹ�\n");
	}
	else
	{
		printf("��ȡ��\n");
	}
}