#include<stdio.h>
int main(){
char ch  ;
printf("The value of x");
scanf("%c", &ch );

if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
    printf("VOWEL\n");
}else{
    printf("CONSONANT\n");
}




    return 0 ;
}