#include<stdio.h>

int main() {
	for (int i = 100; i < 999; i++) {
		int a = i % 10;
		int b = (int)i / 10 % 10;
		int c = (int)i / 100;
		int sum = a*a*a+ b*b*b + c*c*c;
		if (sum == i) {
			printf("%d\n", i);
		}
	}
    return 0;
}