#include<stdio.h>
int addmult(int a,int b);
void main()
{

 int i =4, j = 3, k, l ;
 k = addmult ( i, j ) ; // 12, 7
 l = addmult ( i, j ) ;// 12 ,7
 printf ( "\n%d %d", k, l ) ;    
}
int addmult ( int ii, int jj ) // 4,3
{
 int kk, ll ;
 kk = ii + jj ; // 4+3  = 7
 ll = ii * jj ; // 4*3  = 12
 return ( ll, kk ) ; // 12 , 7
} 