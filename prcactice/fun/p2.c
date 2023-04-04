#include<stdio.h>
int swapping(int *x, int *y);
void main()
{   
    // local 
    int n1, n2,temp;
    printf("enter the value of n1\n");
    scanf("%d",&n1);
    printf("enter the value of n2\n");
    scanf("%d",&n2);
    printf("Before swap \n n1 = %d n2 = %d\n",n1,n2);
    swapping(&n1,&n2);
    printf("After swaping\n n1 = %d n2 = %d",n1,n2);
    
}
int swapping(int *x, int *y)
{ int temp;
  temp=*x; // x=2 y=3 
  *x=*y;
  *y=temp;

  
}
