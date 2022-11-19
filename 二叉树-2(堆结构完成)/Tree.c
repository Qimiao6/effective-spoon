#define _CRT_SECURE_NO_WARNINGS 1
#include"Trre.h"

//��ʼ��
void HeadInit(Tree* He)
{
	assert(He);
	He->data = NULL;
	He->size = 0;
	He->capacity = 0;
}
//����
void HeadCreate(Tree* He)
{
	assert(He);
	He->capacity = He->capacity == 0 ? 4 : He->capacity * 2;
	TrDataType* cur = (TrDataType*)realloc(He->data ,sizeof(int) * He->capacity);
	if (NULL == cur)
	{
		perror("realloc");
		exit(-1);
	}
	He->data = cur;
}

void HeadSwp(Tree* He, int x, int y)
{
	assert(He);
	int pp = He->data[x];
	He->data[x] = He->data[y];
	He->data[y] = pp;
}
void HeadCos(Tree* He, int descenant)
{
	assert(He);
	int father;
	while (descenant > 0)
	{
		father = (descenant - 1) / 2;
		if (He->data[father] < He->data[descenant])
		{
			HeadSwp(He, father, descenant);
			descenant = father;
		}
		else
		{
			break;
		}
	}
}
void HeadPush(Tree* He , TrDataType x)
{
	assert(He);
	//�������
	if (He->capacity == He->size)
	{
		HeadCreate(He);
	}
	//�������
	He->data[He->size] = x;
	He->size++;
	//����
	HeadCos(He, He->size - 1);
}
void HeadDestroy(Tree* He)
{
	assert(He);
	assert(!HeadEmpty(He));
	free(He->data);//�ͷ��ڴ�
	He->data = NULL;
}
void HeadCos2(Tree* He, int pareant)//pop��λ
{
	assert(He);
	while (pareant < He->size)
	{
		int leftson = pareant * 2 + 1;
		if (leftson >= He->size)
		{
			break;
		}
		if ( He->data[leftson] < He->data[leftson + 1])
		{
			leftson += 1;
		}
		if (He->data[pareant] < He->data[leftson])
		{
			HeadSwp(He, pareant, leftson);
			pareant = leftson;
		}
		else
		{
			break;
		}
	}
}
void HeadPop(Tree* He)
{
	assert(He);
	assert(!HeadEmpty(He));
	HeadSwp(He, 0, He->size -1);//�����������һ��Ԫ��
	He->size--;
	HeadCos2( He, 0);//��������
}
//�ж϶������Ƿ�Ϊ��
bool HeadEmpty(Tree* He)
{
	assert(He);
	if (He->size > 0)
	{
		return false;
	}
	return true;//��
}
//����Ԫ�ظ���
int HeadSize(Tree* He)
{
	assert(He);
	return He->size;
}