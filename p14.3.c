#include<stdio.h>
void main()
{
    int i,j,a,k;
    printf("enter the size \n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(k=a;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%c",i-j+64);
        }

        printf("\n");

    }
    printf("patel drashti 24tceqtj");
}
