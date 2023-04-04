#include<stdio.h>
int check(int ch);
void main( )
{
 int i = 4, c ;
 c = check ( i ) ;
 printf ( "\n%d", c ) ;
}
int check ( int ch )
{
 if ( ch >= 45 )
 return ( 100 ) ;
 else
 return ( 10 * 1 ) ;
} 
