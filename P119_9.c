#include<stdio.h>
#include<math.h>

int invert(int n){
    if(n < 10)
        return n;
    else{
       return (n % 10) * pow(10, (int)log10(n)) + invert(n / 10);
       }
}
int main(){
    int num=1234;
    int result = invert(num);
    printf("反转结果是: %d\n", result);
    return 0;
}
