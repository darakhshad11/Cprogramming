#include<stdio.h>
int sum(int ,int);//declear
int main()
{
   int ans=  sum(7,9);// call
   printf("%d",ans);
}
int sum(int i, int j)// define
{
    int k=i+j;
    return k;
}