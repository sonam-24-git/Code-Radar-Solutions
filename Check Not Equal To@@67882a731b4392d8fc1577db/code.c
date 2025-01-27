#include <stdio.h>


int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a!=0){
        printf("True\n");
    } else{
        printf("False");
    }
    printf("%s", welcome());
    return 0;
}