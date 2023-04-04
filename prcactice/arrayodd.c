#include<stdio.h>
int main()
{
    int a[4],index,oddNum=0;  // oddnum=0
    printf("enter the element in array\n");
    for(index=0; index<=3; index++)
    {
        scanf("%d",&a[index]);
    }
    for ( index = 0; index <=3; index++)
    {
        if(a[index]%2!=0)
        {
          oddNum++; // oddnum =1
        }
        
    }
    printf("%d the odd numbers present in array",oddNum);
}