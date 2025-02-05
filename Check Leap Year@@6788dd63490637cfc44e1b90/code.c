#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%400==0){
        printf("Leap year");
    } else(a%100==0){
        printf("Not a leap year");
    }
    return 0;
}