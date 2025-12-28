#include<stdio.h>
#include<string.h>

#define MAX 550

int main(){
    char s1[MAX], s2[MAX];
    if(scanf("%s", s1)!=1) return 0;
    if(scanf("%s", s2)!=1) return 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int a[MAX]={0}, b[MAX]={0}, c[MAX]={0};
    for(int i=0; i<len1; i++){
        a[i] = s1[len1 - 1 - i] - '0';
    }
    for(int i=0; i<len2; i++){
        b[i] = s2[len2 - 1 - i] - '0';
    }
    int len = (len1 > len2) ? len1 : len2;
    int carry = 0;
    for(int i=0; i<len; i++){
        int sum = a[i] + b[i] + carry;
        c[i] = sum % 10;
        carry = sum / 10;
    }
    if(carry) {
        c[len] = carry;
        len++;
    }
    for(int i=len-1; i>=0; i--){
        printf("%d", c[i]);
    }
    printf("\n");
    return 0;
}