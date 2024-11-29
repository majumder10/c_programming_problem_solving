#include<stdio.h>
int main(){
    int i=2, n, status=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(i<n)
    {
        if(n % i==0)
        {
            status++;
        }
        i++;
    }
    if(status == 0)
    {
        printf("prime ");
    }
    else
    {
        printf("not prime ");
    }


}