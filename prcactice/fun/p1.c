#include<stdio.h>
int squarenum(int a);
void main()
{
    int x;
    printf("input any number for square : ");
    scanf("%d",&x);
    squarenum(x);

}
int squarenum(int a)
{   
    printf("%d",a*a);
    // return a*a;
}