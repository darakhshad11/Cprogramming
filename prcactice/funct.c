#include<stdio.h>
            
int add(int number1,int number2)   // define declar
{
    printf("%d + %d = %d\n",number1,number2,number1+number2);

}
void main()
{
  int a=5,b=8;  // declear define

  add(a,b);
  add(8,b);
  add(a,10);
  add(11,b);
  add(15,b);
}
