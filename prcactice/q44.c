#include<stdio.h>
int main()
{
    int x=3,z;
    // z=x--- -1 ; //3--1 = 3+1= 4
    // z=x--- -1 ; //3--1 = 3+1= 4
    x=++x+x++;
    printf("%d",x);
    z=1+x;
    printf("%d %d\n",x,z);//2,4
    
}