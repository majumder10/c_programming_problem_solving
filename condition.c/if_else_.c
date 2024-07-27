#include<stdio.h>
int main(){
int age;
printf("Enter the value of age : \n");
scanf("%d", &age );

if(age < 2){
    printf("INFANT\n");
}else if ( age < 10){
    printf("Child\n");
}else if(age < 20){
    printf("Teenage");
}else if(age < 30){
    printf("Adult\n");
}else{
    printf("old\n");
}






return 0 ;
}
