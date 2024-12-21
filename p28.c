#include<stdio.h>

void main()
    {
        int marks[10];
        int distinction=0,firstclass=0,pass=0,fail=0;
        int *ptr;


        printf("Enter the marks of 10 students:\n");
        for(int i=0;i<10;i++)
        {
            scanf("%d",&marks[i]);
        }

        ptr=marks;//one pointer if i can make then one variable are compulsury to make so here ptr is a pointer and marks are the variable

        for(int i=0;i<10;i++)
        {
            if(*(ptr+i)>=85)
        {

            distinction++;
        }
        else if(*(ptr+i)>=70)
        {
            firstclass++;
        }
         else if(*(ptr+i)>=40)
         {
             pass++;
         }
         else
         {
             fail++;
         }
    }
    printf("DISTINCTION %d FIRSTCLASS %d PASS %d FAIL %d\n",distinction,firstclass,pass,fail);

    if(fail==0)
    {
        printf("All Students passed.\n");
    }else
    {
        printf("Some Students have failed.\n");
    }
    printf("24ce079_drashti");
    }

