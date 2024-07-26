#include <stdio.h>

int main(void){

// singed Integer Data

// Short - %d %hi
short a = 45;
printf("I am short - %hi\n" , a );

// Int - %d %i
int b = 1000;
printf("I am int - %d\n ", b);

//Long - %ld, %li
long c = 1200l;
printf("I am long -%ld\n ", c);

// long long -%lld, %lli
long long d = 346543;
printf("I am long long-%lld\n", d);

//octal int - %o
int o = 0765;
printf("I am octal,%o\n", o);
printf("I am dechimal of Octal - %d\n", o );


//hexadecimel int - %x, %X
int h = 0xfdfd;
printf("I am Hexadechimel,%x\n", h);
printf("I am dechimal of hexadechimal - %d\n", h );

//unsingned Integers
printf("Unsingned Integers\n");

//unsingned Short - %hu
unsigned short us = 46;
printf("unsigned short - %hu\n", us);

//Unsingned  int - %u
unsigned int ui = 4454;
printf("Unsingned Short - %hu\n", ui );

//Unsingned  long - %lu
unsigned long ul = 445454;
printf("Unsingned long  - %lu\n", ul );

//Unsingned  long long - %llu
unsigned long long ull = 44545444;
printf("Unsingned long long  - %llu\n", ull );

//unsingned short negative = -2
unsigned short negative = -2;
printf("negative nambar - %hu\n", negative);





    return 0;
}