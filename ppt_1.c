#include<stdio.h>
#include<stdlib.h>

int main() {
	int x, sum;
	int digit1, digit2, digit3, digit4;

	printf("请输入一个四位数字：");
	scanf_s("%d", &x);
	x=abs(x);

	digit1 = x / 1000;
	digit2=x/100 % 10;
	digit3=x/10 % 10;
	digit4=x % 10;

	sum = digit1 + digit2 + digit3 + digit4;
	printf("各位数字之和为：%d\n", sum);
	return 0;
	}