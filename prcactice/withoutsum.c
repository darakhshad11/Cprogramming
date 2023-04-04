#include<stdio.h>
int main()
{
    int a=4, b=10;
    if(b>0)
    {
        while(b>0)
        {
            a++;
            b--;
        }
    }
    if(b<0)
    {
        while(b<0)
        {
            a--;
            b++;
        }
    }
    printf("sum=%d",a);
    return 0;
} 
