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
		printf("����������ڴ����ͷ�\n");
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
	//if (Sl->size_t == Sl->capacity)
	//{
	//	SLDilatation(Sl);
	//}
	//Sl->a[Sl->size_t] = x;
	//printf("�����ѱ���\n");
	//Sl->size_t++;//����
	// 
	//ֱ�ӵ��ò���
	SeqListInsert(Sl, Sl->size_t+1, x);
}
//βɾ
void SLPopback(SL* Sl)
{
	assert(Sl);
	//assert(Sl->size_t > 0);//Debugʱ��飬Releaseʱ�˶λ���ʧ
	//if (Sl->size_t)//�����ֻÿ�μ�����size_t�п��ܻ�为��
	//{              //����д��ʱ��Խ�����
	//	Sl->size_t--;
	//	printf("��ɾ��\n");
	//}
	//else
	//{
	//	printf("���������,�޿�ɾ����\n");
	//}
	SeqListErase(Sl, Sl->size_t);
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

void SeqListPushFront(SL* Sl, SLdatatype x)//ͷ��
{
	assert(Sl);
	//int right = Sl->size_t;
	//int left = 0;
	//if (Sl->size_t == Sl->capacity)//�ռ���
	//{
	//	SLDilatation(Sl);
	//}
	//for (left = 0; right > left; right--)
	//{
	//	Sl->a[right] = Sl->a[right - 1];
	//}
	//Sl->a[0] = x;
	//Sl->size_t++;
	//printf("ͷ������ɹ�\n");

	//ֱ�ӵ����ò���
	SeqListInsert(Sl, 1 , x);
}

void SeqListPopFront(SL* Sl)//ͷɾ
{
	assert(Sl);
	//assert(Sl->size_t > 0);//debugʱ���
	//if (Sl->size_t == 0)
	//{
	//	printf("���������,�޿�ɾ����\n");
	//	return;
	//}
	//int left = 0;
	//for (left = 0; left + 1 < Sl->size_t; left++)
	//{
	//	Sl->a[left] = Sl->a[left + 1];
	//}
	//Sl->size_t--;
	//printf("ͷ��ɾ���ɹ�\n");
	SeqListErase(Sl, 1);
}
#ifdef _hh_
�贫�ṹ��ָ��
���ҵ�ֵ
������ʼλ���±�
#endif
int SeqListFind(SL* Sl, SLdatatype x, int start)//����
{
	int left = 0;
	assert(Sl);
	for (left = start; left < Sl->size_t; left++)
	{
		if (Sl->a[left] == x)
		{
			printf("�±���%d\n", left);
			return left;
		}
	}
	return -1;//�Ҳ���
}
//ͷ�壬β�������
//��pos λ�ò��� ֵx
void SeqListInsert(SL* Sl, int pos, SLdatatype x)
{
	assert(Sl);
	pos--;//λ�ô�0��ʼ
	//assert(pos <= Sl->size_t);
	if (pos > Sl->size_t)
	{
		printf("����λ�ô�������������\n");
		return;
	}
	int right = Sl->size_t;
	if (Sl->size_t == Sl->capacity)//�ռ���
	{
		SLDilatation(Sl);
	}
	for (; right != pos; right--)
	{
		Sl->a[right] = Sl->a[right - 1];
	}
	Sl->a[right] = x;
	Sl->size_t++;
	printf("����ɹ�\n");
}

//ɾ��posλ�õ�ֵ
void SeqListErase(SL* Sl, size_t pos)
{
	int left = pos - 1 ;
	assert(Sl);
	assert(left < Sl->size_t);
	if (left >= Sl->size_t)
	{
		printf("pos�����޿�ɾ����\n");
		return;
	}
	for (; left + 1 < Sl->size_t; left++)
	{
		Sl->a[left] = Sl->a[left + 1];
	}
	Sl->size_t--;
	printf("ɾ���ɹ�\n");
}