#include<stdio.h>
int square();
int main()
{
    int answer =square();
   printf("%d",answer);
}
int square()
{
    int i =20;
    int k=i*i;
    return k;
}