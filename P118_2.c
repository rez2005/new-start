#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[][100] = {
        "Very good!",
        "Excellent!",
        "Keep up the good work!",
    };
    char str2[][100] = {
        "No,please try again.",
        "Wrong answer,try once more.",
        "Don't give up,try again.",
    };
    srand(time(NULL));
    char n[50];
    int a;
    printf("请输入‘一位数乘法’或者‘两位数乘法’");
    scanf("%s",n);
    if(strcmp(n,"一位数乘法")==0||strcmp(n,"一位数")==0){
        int x,y;
        x=rand()%9+1;
        y=rand()%9+1;
        printf("请计算：%d*%d=\n",x,y);
        scanf("%d",&a);
        if(a==x*y){
            printf("%s\n",str[rand()%3]);
        }
        else{
            printf("%s\n",str2[rand()%3]);
        }
    }
    else if(strcmp(n,"两位数乘法")==0||strcmp(n,"两位数")==0){
        int x,y;
        x=rand()%90+10;
        y=rand()%90+10;
        printf("请计算：%d*%d=\n",x,y);
        scanf("%d",&a);
        if(a==x*y){
            printf("%s\n",str[rand()%3]);
        }
        else{
            printf("%s\n",str2[rand()%3]);
        }
    }
    else{
        printf("输入有误，请重新输入。\n");
    }
    return 0;
}
 