#include<stdio.h>

int change(int *poniter1,int *poniter2)
{
  *poniter1=1 ;
  *poniter2=11;
}
void main()
{

 int a = 12, b= 14;
 printf(" a = %d \n b = %d \n",a,b);
 printf("after call change fuction\n");
 change(&a,&b);
 printf(" a = %d \n b = %d \n",a,b);


}