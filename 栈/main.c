#define _CRT_SECURE_NO_WARNINGS 1
#include"STDlist.h"
void test1()
{
	STD KK;
	STInit(&KK);//≥ı ºªØ
	Pus(&KK, 1);
	Pus(&KK, 2); 
	Pus(&KK, 3);
	Pus(&KK, 4);
	Pus(&KK, 5);
	printf("%d\n", top(&KK));
}
int main()
{
	test1();

	return 0;
}