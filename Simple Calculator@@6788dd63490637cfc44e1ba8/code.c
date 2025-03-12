#include<stdio.h>
int main(){
    int a,b,c,sum,sub,div,mul;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    switch(c){
        case '+':
        add=a+b;
        printf("%d",sum);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("Error");
    }
    return 0;
}