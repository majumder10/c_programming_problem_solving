#include<stdio.h>
int main(){
    char ch ;
    printf("The value of ch: ");
    scanf("%c", &ch);

    if(ch == 'a'){
        printf("apple\n");
    }else if (ch == 'b'){
        printf("ball\n");
    }else if (ch == 'c'){
        printf("cricket\n");
    }else{
        printf("Error\n");
    }
    return 0;
}