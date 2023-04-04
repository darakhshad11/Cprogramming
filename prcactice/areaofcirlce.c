#include<stdio.h>
 
int area(int radius)
{
 float pi=3.14 , Area;
 Area = pi*radius*radius;
 printf("Area of circle %d readius is %f\n",radius,Area);
}

void main()
{
    int r1=2 , r2=4 , r3=6 ;
    area(r1); // call  A
    area(r2); // call  Aa
    

}
// main below deaclear 