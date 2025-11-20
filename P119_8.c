#include <stdio.h>

int gcd(int a, int b) {
    printf(" 递归中：a=%d, b=%d\n", a, b);
    if(a==b)
        return a;
    if(a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main() {
    int num1=12, num2=8;
    int result = gcd(num1, num2);
    printf("最大公约数是: %d\n", result);
    return 0;
}