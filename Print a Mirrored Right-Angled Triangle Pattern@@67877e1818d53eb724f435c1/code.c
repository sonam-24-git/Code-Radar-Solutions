#include <stdio.h>

int main(){
    int i,N,j;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        for(j=1; j<=N; j++){
            if(j=1){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}