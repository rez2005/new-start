#include<stdio.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1){
        return 0;
    }
    int grid[n][n];
    long xy=0;
    long yz=0;
    long zx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&grid[i][j]);
            if(grid[i][j]>0){
                xy++;
            }
        }
    }
    for(int i=0;i<n;i++){
        int max_yz=0;
        for(int j=0;j<n;j++){
            if(grid[i][j]>max_yz){
                max_yz=grid[i][j];
            }
        }
        yz+=max_yz;
    }
    for(int j=0;j<n;j++){
        int max_zx=0;
        for(int i=0;i<n;i++){
            if(grid[i][j]>max_zx){
                max_zx=grid[i][j];
            }
        }
        zx+=max_zx;
    }
            
    printf("%ld\n",xy+yz+zx);
    return 0;
}