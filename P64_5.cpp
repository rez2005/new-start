#include<stdio.h>


int main(){
	for (int a = 1; a < 20; a++) {
		for (int b = 1; b < 34; b++) {
								for(int c=1;c<301;c++){
			if (a * 5 + b * 3 + c / 3 ==100 && c % 3 == 0) {
				printf("a=%d,b=%d,c=%d\n", a, b, c);}
				}
	}
		}

		return 0;
}