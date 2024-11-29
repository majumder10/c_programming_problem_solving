#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double Area, S;
    printf("Enter three sides of Triangle:\n");
    scanf("%d%d%d", &a,&b, &c);
    if(((a+b)>c&&((b+c)>a&&((c+a)>b))))
    {
    S=((a+b+c)/2);
    Area=sqrt(S*((S-a)*(S-b)*(S-c)));
    printf("The area is:%lf", Area);
    }
    else
    {
    printf("Invaliud Triangle");
    }
}
