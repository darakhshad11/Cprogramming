#include<stdio.h>
int main()
{ 
    int a[]= {2 ,4,5,6};
    int index=0;
    int sum=0;
    int averge;
    do
    {
        sum=sum +a[index];
        index++;
    } while (index<4);
        printf("%d\n",sum);
        averge=sum/index;
        printf("%d\n",averge);
}