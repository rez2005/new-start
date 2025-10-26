#include<stdio.h>

int main() {
	int a,b=1, c=1;
	int arr[] = { 1,2,2,3,3,3,1,1 };
	for (a = 0; a < 7; a++) {
		if (arr[a] == arr[a + 1]) {
			b++;
		}
		else {
			if (c < b) {
				c = b;
			}
			b = 1;
		}
	}
	printf("%d", c);
	return 0;
}