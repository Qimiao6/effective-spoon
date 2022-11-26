#define _CRT_SECURE_NO_WARNINGS 1
#include"Book.h"
int main()
{
	int i = 0;
	// Password();//密码验证
	 do//选择通讯录
	 {
		 printf("* * * *	* * * *   特 工 通 讯 录   * * * * * * * *	\n");
		 printf("* * * *	* * * *	 1: 家人  2: 同学  * * * * * * * *	\n");
		 printf("* * * *	* * * *  3: 同事  0: 退出  * * * * * * *	\n");
		 printf("\n请输入要进入的目录(数字)=>");
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
				 printf("输入错误\n");
				 break;
		 }

	 } while (i);
	return 0;
}