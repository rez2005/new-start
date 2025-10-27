#include<stdio.h>

int main() {
	int arr[]={5, 3, 8, 6, 2};
	int n = 0,m=0;
	for(;n<5;n++){
		if(arr[n]%2==0){
			for (int i = n; i > m; i--) {
				int temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
			}
			m++;
}
		}
	for(int j=0;j<5;j++){
		printf("%d ",arr[j]);
	}
	return 0;
}
