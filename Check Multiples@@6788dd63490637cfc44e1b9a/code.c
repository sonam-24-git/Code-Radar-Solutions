#include <stdio.h>

int main() {
    int a,b;
    scanf("&d",&a);
    scanf("%d",&b);
    if(a/b==0){
        printf("Yes");
    }else(a/b!=0){
        printf("No");
    }
    return 0;
}