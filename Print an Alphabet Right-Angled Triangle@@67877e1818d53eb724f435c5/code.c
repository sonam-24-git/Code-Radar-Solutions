#include<stdio.h>
int main(){
    int n;
    char ch ='A'
    scanf("%d",&n);
    scanf("%c",&ch);
    for(int i=0;i<=n;i++){
        for(char ch='A';j<='A'+i-1;ch++){
             printf("%c ",ch);
        }
        printf("\n");
    }return 0;
}