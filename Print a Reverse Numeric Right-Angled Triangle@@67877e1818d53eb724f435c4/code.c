#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1/2;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}