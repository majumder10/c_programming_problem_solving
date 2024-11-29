#include<stdio.h>
int main()
{
    int num1, num2, n1, n2, reminder,gcf,lcf;
    printf("Enter the value of num1 : ");
    scanf("%d", &num1);
    printf("Enter the value of num2 : ");
    scanf("%d", &num2);


    n1 = num1;
    n2 = num2;

    while(n2 !=0)
    {
        reminder = n1 % n2;
        n1 = n2 ;
        n2 = reminder;
    }
    gcf = n1;
    lcf = (num1 * num2 )/gcf;
    printf(" Greatest Common Factor : %d\n", gcf);
    printf(" Least Common Multiple : %d\n", lcf);

    return 0;
}