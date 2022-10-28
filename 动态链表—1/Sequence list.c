#define _CRT_SECURE_NO_WARNINGS 1
#include"Sequence list.h"
void SLInit(SL* Sl)//��ʼ��
{
	assert(Sl);
	int* pp = (int*)calloc(5, sizeof(int));
	if (NULL == pp)
	{
		perror("calloc");
		return;
	}
	Sl->a = pp;
	printf("�ڴ��ʼ���ɹ�\n");
	Sl->capacity = 5;//�ռ��С
	Sl->size_t = 0;//������
}
void Destroy(SL* Sl)
{
	assert(Sl);
	if (Sl->a)
	{
		free(Sl->a);
		Sl->a = NULL;
		Sl->capacity = 0;//�ռ�����
		Sl->size_t = 0;
		printf("�ڴ����ͷ�\n");
	}
}
//�ڴ�����
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
	printf("�ռ����ݳɹ�\n");
}
//β��
void SLPushback(SL* Sl, SLdatatype x)
{
	assert(Sl);
	if (Sl->size_t == Sl->capacity)
	{
		SLDilatation(Sl);
	}
	Sl->a[Sl->size_t] = x;
	printf("�����ѱ���\n");
	Sl->size_t++;//����
}
//βɾ
void SLPopback(SL* Sl)
{
	assert(Sl);
	assert(Sl->size_t > 0);//Debugʱ��飬Releaseʱ�˶λ���ʧ
	if (Sl->size_t)//�����ֻÿ�μ�����size_t�п��ܻ�为��
	{              //����д��ʱ��Խ�����
		Sl->size_t--;
		printf("��ɾ��\n");
	}
	else
	{
		printf("���������,�޿�ɾ����\n");
	}
}
//��ӡ
void SLPrint(SL* Sl)
{
	assert(Sl);//��ֹ���յ���ָ�룬�Կ�ָ��������ǷǷ���
	int i = 0; //��Ϊ��ָ���κε�ַ����ֻ�е���ʱ�Żᱨ��
	for (i = 0; i < Sl->size_t; i++)//���м����л��쳣�鷳
	{
		printf("%d ", Sl->a[i]);
	}
	printf("\n");
}