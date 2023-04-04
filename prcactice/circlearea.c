#include<stdio.h>
void area(int r,float py )
{
    float area;
  area=py*r*r;
  printf("the radius of circle is %d and area is %.2f\n",r,area);
}
int main()

{
    int radius = 12;
    float pi=3.14;
    area(pi,radius);
    
}
