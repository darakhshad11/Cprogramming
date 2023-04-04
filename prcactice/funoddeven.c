#include<stdio.h>
void check_oddeven(int n )
{
    
    if(n%2==0)
    {
      printf("number is even\n");

    }
    else
    {
      printf("number is odd\n");
    }
}
int main()

{
    int a ;
    printf("enter the number is even or odd\n");
    scanf("%d",&a);
    check_oddeven(a);
}
