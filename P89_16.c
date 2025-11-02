#include <stdio.h>
#include <string.h>

char *trimandcompactspaces(char str[]){
   int n=strlen(str);
   int i=0, j=n-1;
    while (str[i]==' '||str[i]=='\t'||str[i]=='\n')  {
        i++;     /* code */
    }
    while(str[j]==' '||str[j]=='\t'||str[j]=='\n')
     {
        j--;
        }
    int h=0;
    for(int k=i;k<=j;k++){
        str[h++]=str[k];
    }
    str[h]='\0';
    for(int k=0;str[k]!='\0';k++){
        if(str[k]==' '&& str[k+1]==' '){
            for(int l=k;l<=j-i-1;l++){
               if(l==j-i-1){
                   str[l+1]='\0';
                }
                else{
                   str[l+1]=str[l+2];
                }
            }
            k--;
        }
    }
    return str;
}

int main()
{
    char str[]="   Hello,    World!   This  is   a   test.   ";
    char *result = trimandcompactspaces(str);
    printf("%s\n", result);
    return 0;
}