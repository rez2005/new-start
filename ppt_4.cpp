#include<stdio.h>

int main()
{
	int a, b, sum, c;
	int element[1000];
	for (a = 1; a <= 1000; a++) {
		sum = 0, c = 0;
		for (b = 1; b <= (a / 2);b++) {
			if (a % b == 0) {
				sum = sum + b;
				element[c] = b;
				c++;
			}
		}
		if (sum == a) {
			printf("%d=", a);
			for (int i = 0; i <c; i++) {
				printf("%d", element[i]);
				if (i != c-1){
					printf("+");
				}
			}
			printf("\n");
		}
	}
	return 0;
}