#include<stdio.h>
#include<string.h>

void removeduplicates(char *str){
    if(str == NULL)
        return;
    int charset[256] = {0};
    char *p=str;
    char *q=str;
    while(*p){
        if(!charset[(unsigned char)*p]){
            charset[(unsigned char)*p] = 1;
            *q++ = *p;
        }
        p++;
    }
    *q = '\0';
}
int main(){
    char str[] = "programming";
    printf("Original string: %s\n", str);
    removeduplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}