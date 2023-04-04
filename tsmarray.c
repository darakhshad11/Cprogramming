#include<stdio.h>
int main()
{
int array[8]={2,5,1,1,11,11,7,8},size=8 ,tsn=0, index=0, ind=0;
for (  index = 0; index <=size ; index++)
{   
    for (  ind = 1; ind <=size; ind++)
    {
       if(array[index]!=array[ind])
       {
        continue;
       }
       else
       {
         tsn++;
       }
    }

}

printf("%d are the same number in array ",tsn);

}