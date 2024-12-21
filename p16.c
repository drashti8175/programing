#include<stdio.h>
void main()
{
    int price[50];
    int i,j,n,temp,total=0;

    printf("enter the number of items n:");
    scanf("%d",&n);

    printf("enter the price of items:\n");
    for(i=0;i<n;i++)
    {
         printf("enter the price:");
         scanf("%d",&price[i]);

    }


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(price[i]>price[j])
            {
                temp=price[i];
                price[i]=price[j];
                price[j]=temp;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("sorted the price:%d\n",price[i]);
    }
    printf("\n");
    printf("total bill:");
    for(i=0;i<n;i++)
    {
        total+=price[i];
    }
    printf("%d\n",total);

}

