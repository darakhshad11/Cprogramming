#include<stdio.h>
int main()
{
    int array[8],find;
    
    printf("enter the element in array\n");
    for (int index = 0; index <=8; index++)
    {
        scanf("%d",&array[index]);
    }
   printf("Your array element are : \n");
    for (int index = 0; index <=8; index++)
    {
        printf("%d , ",array[index]);
    }
   
   printf("\nEnter the elment for search in array \n");
    scanf("%d",&find);

    int found =0;
    for ( int index = 0; index <=8; index++)
    {
      if(find==array[index])
      {
        found=1;
        break;
      }
      else
      {
        found=0;
      }  
      
    }
    if (found)
    {
      printf("%d is found\n",find);
    }
    else
    {
      printf("%d is  not found\n",find);

    }
    
}