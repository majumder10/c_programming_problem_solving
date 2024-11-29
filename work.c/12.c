#include<stdio.h>
int main(){

    int x =0, sum =0;
    while(x<100)
    {
        sum = sum + x;
        x= x + 2;
        printf(" %d ", x);
    }
    printf("The sum is : %d\n", sum);
    

}