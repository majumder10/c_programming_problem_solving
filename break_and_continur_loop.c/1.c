#include<stdio.h>
int main(){
    int i;
    for(i = 0; i < 3; i++){
        printf("hi\n");
        if(i == 1)
        break;
        printf("hello\n");
    }

    

    return 0;
}