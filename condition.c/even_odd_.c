#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x");
    scanf("%d", &x);

    if(x % 2 == 0) {
        printf("EVEN\n");

    }
    else{
        printf("ODD\n");
    } 
    
        


    return 0;
}