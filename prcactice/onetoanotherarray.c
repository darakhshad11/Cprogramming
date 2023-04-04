#include<stdio.h>
int main()
{
    int array1[4]={2,5,7,4},array2[4];
    for (int index= 0; index <=4; index++)
    {
        array2[index]=array1[index];
    }
    for (int index= 0; index <=4; index++)
    {
        printf("%d  " , array2[index]);
    }
    
    
}