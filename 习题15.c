#include<stdio.h> 
int main()
{
	int a, b, c, sum, max, min;
	float average;
	printf("��������������:");
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	average = sum / 3.0;
	min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
	max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	printf("%d %f %d %d", sum, average, min, max);
		return 0;
}