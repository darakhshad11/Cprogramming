#include<stdio.h>
int main()
{
    int a =4;
    int b =7;
    printf("the value of a  and b is %d  %d\n",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping the value of a and b is %d %d\n",a ,b); 
}