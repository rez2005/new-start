#include<stdio.h>

int main()
{
	int a;
	printf("请输入1-6之间的整数：");
	scanf_s("%d", &a);
	if (a < 1 || a>6)
	{
		printf("输入错误！\n");
	}
	else
	{
		switch (a)
		{
		case 1:
		case 2:printf("珠子的颜色是红色的。\n"); break;
		case 3:
		case 4: 
		case 5:printf("珠子的颜色是蓝色的。\n"); break;
		case 6:printf("珠子的颜色是黄色的。\n"); break;
		}
	}
	return 0;
}
