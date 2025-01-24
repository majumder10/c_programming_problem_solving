#include<stdio.h>
int main(){
    char x[50];
    printf("Enter the name :\n");
    scanf("%s",x);

    int i =0 , counter = 0;

    while(x[i] != '\0'){
        counter++;
        i++;
    }
        printf("the length of : %d\n",counter);
    return 0 ;

}