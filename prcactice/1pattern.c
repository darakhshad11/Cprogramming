#include<stdio.h>
int main()
{   /*
   5 4 3 2 1
   5 4 3 2
   5 4 3
   5 4 
    
*/

    
    for(int i=5; i>=1;i--)
    {
        for(int j=5; j>=1;j--)
        {
            printf("%d", i); 
        }
        printf("\n");// 
    }
}