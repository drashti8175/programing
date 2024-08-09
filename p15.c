#include<stdio.h>
void main()
{
       int number[16],i,positive=0,negative=0,even=0,odd=0;
       for(i=0;i<16;i++)
       {
       printf("enter the number:");
       scanf("\n %d",&number[i]);
       }

       for(i=0;i<16;i++)
       {
           if(number[i]>0)
           {
               positive++;

           }
           else
           {
               negative++;

           }
           if(number[i]%2==0)
           {
               even++;

           }
           else
           {
               odd++;

           }
       }

         printf("\n this number is positive:%d",positive);
         printf("\n this number is negative:%d",negative);
        printf("\n this number is even:%d",even);
         printf("\n this number is odd:%d",odd);



         printf("\n patel drashti 24tceqtj");


}
