//3*2*1 -> n*(n-1)

#include <stdio.h>
 
int factorial(int n)//1
{  if(n==1 || n==0)

{
    return 1;
}
    
  return n*factorial(n-1); //3*2*1 time  1 2 3 ->  123 2O(n)  o(n)
}
void main()
{
    int fact=3;
    printf("%d",factorial(fact));
}