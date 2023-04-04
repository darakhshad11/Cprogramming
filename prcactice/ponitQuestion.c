#include<stdio.h>
void main()
{

 int a=12;
 int *b;
 b=&a;
 
 printf("Value of a %d",a);

 *b=1;
 printf("\nValue of a %d",a);

}