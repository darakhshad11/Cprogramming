#include<stdio.h>
int check(int  ch);
void  main( )
{
 int i = 45, c ;
 c = check ( i * 1000 ) ;//4500
 printf ( "\n%d", c ) ;
}
 int check ( int ch )
{
 if ( ch >= 40000 )
 return ( ch / 10 ) ;
 else
 return ( 10 ) ;
} 