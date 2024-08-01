#include<stdio.h>
void main()
{
    int matchstick=21,userpick,computerpick;
    while(1)
    {
     printf("pick matchstick");
     printf("enter the number of matchstick which beetwen 1 to 4:\n");
     scanf("%d\n",&userpick);
     if(userpick>4||userpick<1)
     {
         printf("invalid choice");
         continue;
     }
    matchstick=matchstick-userpick;
    printf("remaining value of matchstick%d\n",matchstick);

    computerpick=5-userpick;
    printf("computerpick:%d",computerpick);
    if(matchstick==1)
    {
        printf("remaining value of matchstick:%d",matchstick);
        printf("sorry you lose game");
        printf("patel drashti",24tceqtj);
        break;
    }











    }

}







