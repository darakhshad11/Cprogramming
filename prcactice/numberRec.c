#include<stdio.h>
void printNUm(int num)//10,9,8,7,6,5,4,3,2,1,0
{
 //start
 if(num)//10,9
 {
    printNUm(num-1);//10
 }
 else
 {
    return;
 }
 printf("%d\n",num);
 // end
}
void main()
{
    int n=10;
    printNUm(n);// 10
}