#include<stdio.h>
int main()
{    
    int sum=0;
    int a[4]; int i;
    for (int i = 0; i <=4; i++)
    {
        scanf("%d",a[i]);
    }
    while(i<=4)
    {
     sum =sum+a[i]; // 
     i++;
    }
    printf("%d",sum);
}