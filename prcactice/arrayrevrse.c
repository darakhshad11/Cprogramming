#include<stdio.h>
int main()
{
    int a[4];
    for (int i = 0; i <=3; i++)
    {
        scanf("%d",&a[i]);

    }
    int i=3;
    while(i>=0)
    {
        printf("%d , ",a[i]);
        i--;
    }
    

    
}