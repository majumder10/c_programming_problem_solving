#include<stdio.h>
int main(){


    int a [5]; //={12, 34, 44, 34, 56};
    // printf("value of index 0 :%d\n", a [0]);
    // printf("value of index 4 :%d\n", a [4]);

    int i;

    for(i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    }


    for(i = 0; i < 5; i++){
        printf("%d\n",a[i]);
    }










    return 0;
}