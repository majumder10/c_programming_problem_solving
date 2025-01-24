#include<stdio.h>
int main(){
    int n,rev=0,ld,temp,sqn,sqrev,rev1=0,tamp1;
    printf("enter the num : ");
    scanf("%d", &n);
    temp = n;

    while(n!=0)
    {
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;

    }
    sqn = temp * temp;
    sqrev= rev * rev;
    tamp1= sqn;

    while(sqn != 0)
    {
        ld = n % 10;
        rev1=rev1 * 10 + ld ;
        sqn = sqn / 10;
        
    }
    if(rev1==sqrev)
    {
        printf("adam number");
    }
    else{
        printf("not adam number");
    }









}