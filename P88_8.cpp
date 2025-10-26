#include<stdio.h>

int main() {
	int arr[100];
	int n;
	scanf_s("%d", &n);
	if (n > 100) 
  printf("Input exceeds the limit of 100.");
	else {
		int a = 1;
		arr[0] = 2;
		for (int i = 3;a<n; i++) {
			for (int b=0; b < a; b++) {
				if (i % arr[b] == 0) break;
				if (b == a - 1) {
					arr[a] = i;
					a++;
				}
			}
		}
		int d = 0;
		for (; d < n; d++) {
			printf("%d ", arr[d]);
		}
	}
	return 0;
}

	