#include<stdio.h>
// function declaration
int calculatetotal(int marks[],int n);
float calculateaevrage(int total,int n);
int findhighest(int marks[],int n);
int findlowest(int marks[],int n);

void main()
{
    int i,n;

    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);

     int marks[n];


    for(i=0;i<n;i++)
    {
        printf("ENTER THE MARKS:",i+1);
        scanf("%d",&marks[i]);
    }

    int total=calculatetotal(marks,n);
    float aevrage=calculateaevrage(total,n);
    int highest=findhighest(marks,n);
    int lowest=findlowest(marks,n);

      printf("TOTAL MARKS:%d\n",total);
      printf("AEVRAGE MARKS:%.2f\n",aevrage);
      printf("HIGHEST MARKS:%d\n",highest);
      printf("LOWEST MARKS:%d\n",lowest);

}

int calculatetotal(int marks[],int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=marks[i];
    }
    return total;
}


float calculateaevrage(int total,int n)
{
    return(float)total/n;
}

int findhighest(int marks[],int n)
{
    int highest=marks[0];//initilization with the first elements
    for(int i=0;i<n;i++)
    {
        if(marks[i]>highest)
        {
            highest=marks[i];
        }
    }
    return highest;

}

int findlowest(int marks[],int n)
{
    int lowest=marks[0];//initilization with the first elements
    for(int i=0;i<n;i++)
    {
        if(marks[i]<lowest)
        {
            lowest=marks[i];
        }
    }
    return lowest;


}









