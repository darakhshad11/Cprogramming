#include<stdio.h>
#include<string.h>

struct marksheet
{
  float marks;
  int rollnumber;
  char name[30];
  char subject[15];
};


struct marksheet s1, s2, s3;
void main()
{
  printf("enter the name of student\n");
  gets(s1.name);
  printf("enter the rollnumber of student\n");
  scanf("%d",s1.rollnumber);
  printf("enter the stdents marks\n");
  scanf("%f",&s1.marks);
  printf("enter the name of subjects\n");
  gets(s2.subject);
  printf("enter the stdents marks\n");
  scanf("%f",&s2.marks);
  printf("enter the rollnumber of student\n");
  scanf("%d",s2.rollnumber);
  
  printf("enter the name of subjects\n");
  gets(s3.subject);
  printf("enter the stdents marks\n");
  scanf("%f",&s3.marks);
  printf("enter the rollnumber of student\n");
  scanf("%d",s3.rollnumber);


 
}