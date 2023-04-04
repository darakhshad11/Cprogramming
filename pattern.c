 #include<stdio.h>
 int main()
 {
     int i , row;
     printf("enter the number of rows\n");
     scanf("%d",&row);
     for ( i = 1; i <= row; i++)
     {
         for (int j = 1; j <=row; j++)
         {
           
           printf("*");
         }        
         printf("\n");
     }
     
 }