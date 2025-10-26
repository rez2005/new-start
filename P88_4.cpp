#include<stdio.h>

void removeduplication(int arr[],int size){
	int a, b;
	for (a = 0; a < size; a++) {
		for (b = a + 1; b < size; b++) {
			if (arr[a] == arr[b]) {
				int c = b;
				for (; c< size -1; c++) {
					arr[c] = arr[c+1];
				}
				size--;
				b--;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
}
int main() {
	int arr1[] = { 1,3,5,7,3,5,3,9};
	removeduplication(arr1, 8);
	return 0;
}