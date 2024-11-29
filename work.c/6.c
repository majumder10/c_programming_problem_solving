#include<stdio.h>
main()
{
    int x;
    printf("enter x: ");
    scanf("%d", &x);
    switch (x>0)
    {
    case 1:
        switch(x%2==0){
            case 1:
                printf("positive even");
                break;
            case 0:
                printf("positive odd");
                break;
        }
        break;
    case 0:
        switch (x<0){
            case 1:
            printf("negetive even");
            break;
            case 0:
            printf("negetive odd");
            break;
        }
    
    }
}