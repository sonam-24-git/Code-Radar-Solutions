#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    for(int i=0;i<=n;i++){
        for(char j=0;j<='A'+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }return 0;
}