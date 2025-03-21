#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    int rows = n - 'A' + 1;
    for(int i=1;i<=rows;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",'A' + j);
        }printf("\n");
    }return 0;
}