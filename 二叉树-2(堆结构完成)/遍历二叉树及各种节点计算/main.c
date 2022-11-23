#define _CRT_SECURE_NO_WARNINGS 1
#include"Tree.h"
void text1()
{
	TR* n1 = TRCreate(1);
	TR* n2 = TRCreate(2);
	TR* n3 = TRCreate(4);
	TR* n4 = TRCreate(3);
	TR* n5 = TRCreate(5);
	TR* n6 = TRCreate(6);
	TR* n7 = TRCreate(8);
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n3->left = n5;
	n3->right = n6;
	n5->left = n7;
	//前序遍历
	 PrevOrde(n1);
	 printf("\n");
	//后续遍历
	 PostOrde(n1);
	 printf("\n");
	//中序遍历
	 InOrde(n1);
	 printf("\n");
	 
	printf("节点>%d",TRnodesize(n1));
	printf("\n");
	printf("叶节点>%d", TRleafsize(n1));
	printf("\n");
	printf("高度>%d", TRhet(n1));
		printf("\n");
	printf("K>%d", Ksize(n1, 4));
	
}
int main()
{
	text1();
	return 0;
}