#include<stdio.h>
#include<math.h>

 int main(){
	 int Fibonacci  [1000];
	 Fibonacci[0] =  0 ;
      Fibonacci[1] = 1 ;
	 for (int i = 2;i<=999; i++) {
		 Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
	 }
	 int fibonacci[1000];
	 for (int i = 0;i<=999; i++) {
		 double c=(1.0+sqrt(5.0))/2.0;
		 int d;
		 d=(pow(c,i)-pow(1-c,i))/sqrt(5.0);
		 fibonacci[i]=(int)(d+0.5);
		 }
	  for (int i = 0; i <= 999; i++) {
		if (Fibonacci[i] != fibonacci[i]) {
			printf("不相等的i：%d\n", i);
		}
		}	 
			 return 0;
	 }
