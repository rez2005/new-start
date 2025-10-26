#include<stdio.h>

int main() {
	int a, b, c;
	for (a =0; a <= 6; a++) {
		for (b = 0; b <= 3; b++) {
			for (c =0; c <= 3; c++) {
				if (a + b + c == 8) {
					printf("a=%d b=%d c=%d\n", a, b, c);
				}
			}
		}
	}
	return 0;
}