#include <stdio.h>

int main(){

int x;

printf("Enter the value of x : \n");
scanf("%d", &x);

if(x <= 39){
    printf("F\n");
}else if(x <= 49){
    printf("C\n");
}else if (x <= 59){
    printf("B\n");
}else if (x <= 69){
    printf("A-\n");
}else if (x <= 79){
    printf("A\n");
}else if (x <= 100){
    printf("A+\n");
}else if(x > 100){
    printf("invalide input");
}
return 0;

}