#include<stdio.h>
int main(){
    int n;
    char ch = 'A';
    scanf("%d",&n);
    scanf("%c",&ch);

    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+i-1;ch++){
             printf("%c ",ch);
        }
        printf("\n");
    }return 0;
}