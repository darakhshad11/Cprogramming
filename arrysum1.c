#include<stdio.h>
int main()
{
    int a[4] ,i=0,sum =0;
    
    while (i<4)
    {
        printf("enter the element in array\n");
        scanf("%d",&a[i]);
        sum=sum+a[i];
        i+=1;

    }
    printf("%d" ,sum);
    
}