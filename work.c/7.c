#include<stdio.h>
int main(){

    int i = 2, num, status = 0;
    printf("enter the value of num ");
    scanf("%d",&num);

    while(i < num){

        if(num % i == 0){

            status++;
        }   
        i++;
    }
    
        if(status==0){
            printf("prime");
        }
        else{

            printf("not prime");
        }



    return 0 ;
}