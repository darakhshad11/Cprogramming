#include<stdio.h>
int swap();

int main()
{
 swap(); // 
 return 0;
}


int swap()
{
    int a=4; int b=5; int c;
    printf("before swap\n");
    printf("the value of a = %d\n",a);
    printf("the value of b = %d\n",b);
    c=b;
    b=a;
    a=c;
    printf("after swap\n");
    printf("the value of a = %d\n",a);
    printf("the value of b = %d\n",b);
    return 0;
}