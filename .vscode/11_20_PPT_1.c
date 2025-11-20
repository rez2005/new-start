#include<stdio.h>
#include<string.h>

int isValid(char str[]){
    int n=strlen(str);
    char number1[100]={},number2[100]={},number3[100]={};
    for(int i=0;i<n;i++){
        if(str[i]=='('){
            for(int j=i+1;j<n;j++){
                if(str[j]==')'&&number1[j]!='1'){
                    number1[j]='1';
                    break;
        }
        if(j==n-1||str[j]==']'||str[j]=='}')
            return 0;
    }
    if(i==n-1){
        return 0;
    }
}
if(str[i]=='['){
            for(int j=i+1;j<n;j++){
                if(str[j]==']'&&number2[j]!='1'){
                    number2[j]='1';
                    break;
        }
        if(j==n-1||str[j]==']'||str[j]=='}')
            return 0;
    }
    if(i==n-1){
        return 0;
    }
}
if(str[i]=='{'){
            for(int j=i+1;j<n;j++){
                if(str[j]=='}'&&number3[j]!='1'){
                    number3[j]='1';
                    break;
        }
        if(j==n-1||str[j]==']'||str[j]=='}')
            return 0;
    }
    if(i==n-1){
        return 0;
    }
}
}
for(int i=0;i<n;i++){
    if(str[i]==')'&&number1[i]!='1'){
        return 0;
    }
    if(str[i]==']'&&number2[i]!='1'){
        return 0;
    }
    if(str[i]=='}'&&number3[i]!='1'){
        return 0;
    }
}
    return 1;
}

int main(){
    char str[100]={};
    scanf("%s",str);
    if(isValid(str)){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }
}