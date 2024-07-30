#include<stdio.h>
int main(){

int x = 1;
printf("the value of x :\n");
scanf("%d", &x );

switch(x){
    case 1 :
    printf("hi\n");
    break;
    case 2 :
    printf("hello\n");
    break;
    case 3 :
    printf("ok\n");
    break;
    default :
    printf("error\n");
}




    return 0;
}