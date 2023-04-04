#include<stdio.h>
int main()
{
    int a =4;
    int *ptra=&a;
    printf("the address of pointer to a is %x\n",&ptra);
    printf("the address of a is %x\n",&a);
    printf("the vale of a is %x\n",*ptra);
    printf("the value of a is %x*\n",a);
}