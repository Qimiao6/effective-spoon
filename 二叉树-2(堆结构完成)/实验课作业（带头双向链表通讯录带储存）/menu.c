#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"
//����
void class()
{
	int i = 0;//ѭ��ѡ�����
	BookNode phead;//����ͨѶ¼
	BookInit(&phead);//��ʼ��ͨѶ¼
	seveop(&phead);//�����ļ�
	do
	{
		printf("* * * *	* * * *   �� �� ͨ Ѷ ¼   * * * * * * * *	\n");
		printf("* * * *	* * * *	 1: �½�  2: ɾ��  * * * * * * * *	\n");
		printf("* * * *	* * * *  3: ����  4: ȫ��ʾ  * * * * * * *	\n");
		printf("* * * *	* * * *	 5: �޸�  6: ����  * * * * * * * *	\n");
		printf("* * * *	* * *   7: ��ʽ��  0: �˳�   * * * * * * *	\n");
		printf("\n��������Ҫ�Ĺ���(����)=> ");
		scanf("%d", &i);
		//i %= 10;
		switch (i)
		{
		case _add:
			PushBack(&phead);//�½�
			break;
		case _del:
			BookPop(BookFind(&phead));//ɾ��
			break;
		case _find:
			Fintprint(BookFind(&phead));//����
			break;
		case _show:
			Print(&phead, 2);//ȫ��ʾ
			break;
		case _modif:
			BookModif(BookFind(&phead));//�޸�
			break;
		case _qos:
			Bookqsort(&phead);//����(������ĸ)
			break;
		case _delete:
			Book_Delete(&phead);
			break;
		case _fin:
			seve(&phead);//�����ݱ��浽�ļ�����
			printf("�����ѱ���\n");
			BookFree(&phead);//�ͷ��ڴ��������
			printf("���˳�\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (i);
	return ;
}
//ͬѧ
void class1()
{
	int i = 0;//ѭ��ѡ�����
	BookNode phead;//����ͨѶ¼
	BookInit(&phead);//��ʼ��ͨѶ¼
	seveop1(&phead);//�����ļ�
	do
	{
		printf("* * * *	* * * *   ͬ ѧ ͨ Ѷ ¼   * * * * * * * *	\n");
		printf("* * * *	* * * *	 1: �½�  2: ɾ��  * * * * * * * *	\n");
		printf("* * * *	* * * *  3: ����  4: ȫ��ʾ  * * * * * * *	\n");
		printf("* * * *	* * * *	 5: �޸�  6: ����  * * * * * * * *	\n");
		printf("* * * *	* * *   7: ��ʽ��  0: �˳�   * * * * * * *	\n");
		printf("\n��������Ҫ�Ĺ���(����)=> ");
		scanf("%d", &i);
		//i %= 10;
		switch (i)
		{
		case _add:
			PushBack(&phead);//�½�
			break;
		case _del:
			BookPop(BookFind(&phead));//ɾ��
			break;
		case _find:
			Fintprint(BookFind(&phead));//����
			break;
		case _show:
			Print(&phead, 2);//ȫ��ʾ
			break;
		case _modif:
			BookModif(BookFind(&phead));//�޸�
			break;
		case _qos:
			Bookqsort(&phead);//����(������ĸ)
			break;
		case _delete:
			Book_Delete(&phead);
			break;
		case _fin:
			seve1(&phead);//�����ݱ��浽�ļ�����
			printf("�����ѱ���\n");
			BookFree(&phead);//�ͷ��ڴ��������
			printf("���˳�\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (i);
	return;
}

//ͬ��
void class2()
{
	int i = 0;//ѭ��ѡ�����
	BookNode phead;//����ͨѶ¼
	BookInit(&phead);//��ʼ��ͨѶ¼
	seveop2(&phead);//�����ļ�
	do
	{
		printf("* * * *	* * * *   ͬ �� ͨ Ѷ ¼   * * * * * * * *	\n");
		printf("* * * *	* * * *	 1: �½�  2: ɾ��  * * * * * * * *	\n");
		printf("* * * *	* * * *  3: ����  4: ȫ��ʾ  * * * * * * *	\n");
		printf("* * * *	* * * *	 5: �޸�  6: ����  * * * * * * * *	\n");
		printf("* * * *	* * *   7: ��ʽ��  0: �˳�   * * * * * * *	\n");
		printf("\n��������Ҫ�Ĺ���(����)=> ");
		scanf("%d", &i);
		//i %= 10;
		switch (i)
		{
		case _add:
			PushBack(&phead);//�½�
			break;
		case _del:
			BookPop(BookFind(&phead));//ɾ��
			break;
		case _find:
			Fintprint(BookFind(&phead));//����
			break;
		case _show:
			Print(&phead, 2);//ȫ��ʾ
			break;
		case _modif:
			BookModif(BookFind(&phead));//�޸�
			break;
		case _qos:
			Bookqsort(&phead);//����(������ĸ)
			break;
		case _delete:
			Book_Delete(&phead);
			break;
		case _fin:
			seve2(&phead);//�����ݱ��浽�ļ�����
			printf("�����ѱ���\n");
			BookFree(&phead);//�ͷ��ڴ��������
			printf("���˳�\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (i);
	return;
}