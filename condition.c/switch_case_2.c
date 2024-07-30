#include<stdio.h>
int main(){
char ch ;
printf("The value of ch\n");
scanf("%c", &ch);

switch(ch ){
    case 'f' :
    printf("Football\n");
    break;
    case 'c' :
    printf("cricket\n");
    break;
    case 'b':
    printf("batminton\n");
    break;
    case 'l':
    printf("long jump\n");
    break;
    default :
    printf("women\n");
}





    return 0;
}