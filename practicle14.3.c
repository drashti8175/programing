#include<stdio.h>
void main()
{
    int i,a,j,k;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-i;k++)
        {
            printf(" ");
        }
        for(j=a-i+1;j<=a;j++)
        {
            printf("*");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("*");
        }
        printf("\n");

    }
     for(i=a-1;i>=1;i--)
    {
        for(k=1;k<=a-i;k++)
        {
            printf(" ");
        }
        for(j=a-i+1;j<=a;j++)
        {
            printf("*");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }






printf("patel drashti 24tceqtj");






}
