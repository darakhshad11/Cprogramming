#include<stdio.h>
void numberPrint(int num) 
{
for (int  i = 1; i <=num; i++)
{
    printf("%d  ",i);
}

}  
int main()

{ int inputnumber;
  printf("ENter the number to get natural number\n");
  scanf("%d",&inputnumber); // 10
  numberPrint(inputnumber); // 
}