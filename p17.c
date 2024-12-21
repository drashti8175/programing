#include<stdio.h>
void main()
{
   int i,j,row=5,col=10;
   int reservedseats;
   int seats[5][10]={0};

   printf("enter the number of reservedseats:");
   scanf("%d",&reservedseats);


   for(i=0;i<reservedseats;i++)
   {
       printf("enter row and seats number for reserved seats %d (e.g.,2 5):",i+1);
       scanf("%d %d",&row,&col);
       seats[row-1][col-1]=1;
   }

   printf("seating char:\n");

   for(i=0;i<5;i++)
   {
       printf("row %d:",i+1);
       for(j=0;j<10;j++)
       {

           if(seats[i][j]==1)
           {
               printf("x");
           }
           else
           {
               printf("0");
           }
       }
       printf("\n");
   }

}
// seats=1 that means this sit are already occupy

