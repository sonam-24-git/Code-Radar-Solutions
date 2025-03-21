#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j<=n+1;j++){
            printf("%c ",j);
        }printf("\n");
    }return 0;
}