#include<stdio.h>

int printInBaseK(int n, int k){
    if(n==0) return 0;
    printInBaseK(n/k,k);
    printf("%d ",n%k);
}
int main(){
    int n=100;
    int k=2;
    printInBaseK(n,k);
    return 0;
}
