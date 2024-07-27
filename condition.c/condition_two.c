#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of x");
    scanf("%d", &a);

    if(a / 3 == 0 || a / 5 == 0){
        printf("The namber is divisible by 3 0r 5");
    }else{
        printf("The namber is not divisible by 3 0r 5");
    }

    return 0;
}