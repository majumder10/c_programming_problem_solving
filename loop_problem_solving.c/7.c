#include<stdio.h>
int main(){

    int i , j , k;

     printf("enter k= ");
     scanf("%d",&k);

    for(i = 1 ; i <= k ; i++){

        for(j = 1; j <= k-i ; j++){

            printf("  ");
        }

        for(j = 1; j <= 2*i-1 ; j++){

            printf("%d ", j);
        }
            printf("\n");
    }


    return 0;
}