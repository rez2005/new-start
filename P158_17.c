#include<stdio.h>

//1//
void rotatematrix(int mat[3][3]){
    int i,j;
    int *p= &mat[0][0];
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            int temp=*(p+i*3+j);
            *(p+i*3+j)=*(p+j*3+i);
            *(p+j*3+i)=temp;
        }
    }
}

//2//
int strlen(char *str){
    int len=0;
    char *p=str;
    while(*p){
        len++;
        p++;
    }
    return len;
}

//3//
void copynchars(char *s1, char *s2, int n){
    char *p=s1;
    char *q=s2;
    int count=0;
    while(*q && count<n){
        *p++=*q++;
        count++;
    }
}

//4//
void strcat(char *s1, char *s2){
    char *p=s1;
    while(*p){
        p++;
    }
    while(*s2){
        *p++=*s2++;
    }
    *p='\0';
}

//5//
void toupper(char *str){
    char *p=str;
    while(*p){
        if(*p>='a' && *p<='z'){
            *p=*p-'a'+'A';
        }
        p++;
    }
}

//6//
void trimspaces(char *str){
    char *p=str;
    char *q=str;
    int a=0;
    while(*p==' '||*p=='\t'||*p=='\n'){
        p++;
    }
    while(*p){
        if(*p!=' '&&*p!='\t'&&*p!='\n'){
            a=0;
            *q++=*p++;
        }
        else if(a==0){
            a=1;
            *q++=' ';
            p++;
        }
        else{
            p++;
        }
    }
    if(q>str && *(q-1)==' '){
        q--;
    }
    *q='\0';
}
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    rotatematrix(mat);
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    char str[]="Hello, World!";
    printf("Length of the string: %d\n", strlen(str));
    char s1[]="dasdfasdad";
    char s2[]="abcdefghij";
    copynchars(s1,s2,5);
    printf("Copied string: %s\n", s1);
    strcat(s1,s2);
    printf("Concatenated string: %s\n", s1);
    toupper(s1);
    printf("Uppercase string: %s\n", s1);
    char str2[]="   Hello   World   !   ";
    trimspaces(str2);
    printf("Trimmed string: '%s'\n", str2);
    return 0;
}