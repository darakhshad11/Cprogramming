 #include<stdio.h>
 int main()
 {
    int a=0;
    int b=1;
    int c;
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("%d ",a);
    printf(" %d ", b);
    
    for(int i=1; i<n; i++)
    {
      c=a+b;
      printf(" %d ",c);
      a=b;
      b=c;
    }
 }