#include<stdio.h>
void main()
{
  int *b , a=12;
  b=&a; // value naho stroe kr rha  y adress 
  printf(" adress of a =  %d\n",*&a);
  printf(" adress of b =  %d ",*b); //value at adress   *1922131 =  value

}