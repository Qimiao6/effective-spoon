#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"
int main()
{
	int i = 0;
	// Password();//������֤
	 do//ѡ��ͨѶ¼
	 {
		 printf("* * * *	* * * *   �� �� ͨ Ѷ ¼   * * * * * * * *	\n");
		 printf("* * * *	* * * *	 1: ����  2: ͬѧ  * * * * * * * *	\n");
		 printf("* * * *	* * * *  3: ͬ��  0: �˳�  * * * * * * *	\n");
		 printf("\n������Ҫ�����Ŀ¼(����)=>");
		 scanf("%d", &i);
		 switch (i)
		 {
			 case 1:
				 class();
				 break;
			 case 2:
				 class1();
				 break;
			 case 3:
				 class2();
				 break;
			 default:
				 printf("�������\n");
				 break;
		 }

	 } while (i);
	return 0;
}