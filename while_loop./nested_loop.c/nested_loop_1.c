#include<stdio.h>
int main(){
    int i , j;

    for(i = 1 ; i <= 5 ; i++){
        printf("outer loop start\n");
        for(j = 1; j <= 2 ; j++){
            printf("******\n");

        }
        printf("outer lopp end\n");
    }








    return 0;
}