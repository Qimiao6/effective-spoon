#define _CRT_SECURE_NO_WARNINGS 1

#include"Orde.h"
void text1(PTree* n1 )
{
	assert(n1);
	PTeam phead;
	Init(&phead);
	Push(&phead, n1);
	while (!TeamEmpty(&phead))
	{
		PTree* cur = Tophead(&phead);
		printf("%d ", cur->data);
		Pophead(&phead);
		if (cur->left)
		{
			Push(&phead, cur->left);
		}
		if (cur->right)
		{
			Push(&phead, cur->right);
		}
	}
}

int main()
{
	PTree* n1 = TrNode(1);
	PTree* n2 = TrNode(2);
	PTree* n3 = TrNode(3);
	PTree* n4 = TrNode(4);
	PTree* n5 = TrNode(5);
	PTree* n6 = TrNode(6);
	PTree* n7 = TrNode(7);
	PTree* n8 = TrNode(8);
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n4->left = n7;
	n5->right = n8;
	n3->left  = n6;
	text1(n1 );
	return 0;
}