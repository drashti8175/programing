#include<stdio.h>
void main()
{
   int marks;
   printf("enter the marks");
   scanf("%d",&marks);
   (marks>=90)?printf("grade A"):(marks>=80&&marks<90)?printf("grade B"):(marks>=70&&marks<80)?printf("grade C"):(marks>=60&&marks<70)?printf("grade D"):(marks<60)?printf("grade F"):printf("input is invalid");
}
