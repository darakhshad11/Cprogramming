#include<stdio.h>

struct twonum
{
int x, y;
};

int main()
{
struct twonum number ;
number.x=11;
number.y=10;
printf("X = %d, Y = %d",number.x,number.y);
return 0;
}
