#include <stdio.h>
int main(){
    int N,j;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        /* Print spaces in decreasing order of row */
        for(j=i; j<rows; j++)
        { printf(" ");
        }
        /* Print star in increasing order or row */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}