#include<stdio.h>
int main()
{  //4 size int 64 bit
    int x=3,z;
    printf("%d\n",sizeof(x));
    z=++x  * ++x * ++x;//5*5
    printf("%d",z);
}