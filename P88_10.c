#include<stdio.h>

int main() {
	int a[] = { 3,2,6,5,4,1 };
	int b,i,j=0;
	for (b = 4; b >= 0; b--) {
		for (int c = 5; c > b; c--) {
			if (a[c] > a[b]) {
				int d = a[c];
				a[c] = a[b];
				a[b] = d;
				j = 100;
				break;
			}
			}
		if (j == 100)break;
		}
for(int k=2;k<5;k++){
	for(int l=k+1;l<6;l++){
		if(a[k]>a[l]){
			int d=a[k];
			a[k]=a[l];
			a[l]=d;
		}
	}
	}
for (i = 0; i < 6; i++) {
	printf("%d ", a[i]);
}
	return 0;
}