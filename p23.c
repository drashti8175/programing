#include<stdio.h>

void fibo(int); //function declaration

void main()
{
    int n;

    printf("ENTER THE NUMBER OF N:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("THIS CAN NOT VALID FOR FIBONACCI SERIES");
    }
    else if(n==0)
    {
        printf("0");
    }
    else
    {
        fibo(n); //function call
    }
}

void fibo(int n)
{
    int first=0,second=1,next,i; // 0 1 1 2 3 5 8 13 21
    printf(" %d  %d",first,second);
    for(i=2;i<n;i++)
    {
        next=first+second;
        printf(" %d ",next);
        first=second;
        second=next;
    }

}
