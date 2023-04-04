#include<stdio.h>
int add();
int main()
{
  int answer =add() ;
  return 0;
}

int add()
{
    int i=5; int j=4;
    int k=i+j;
    printf("%d",k);
}