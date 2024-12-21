
//Write a C program using a character string in a block of memory space created by
//calloc () and then modify the same to store a larger string using realloc () function.
//(Dynamic Array).
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char*str;
    int initialsize=50;
    int newsize=100;

    str=(char*)calloc(initialsize,sizeof(char));//here size of char for string and first char for pointer ....here we have str as a pointer

    if(str==NULL)
    {
        printf("Memory allocation failed!\n");
        return 0;
    }
    printf("Enter a string (up to 50 character):");
    fgets(str,initialsize,stdin);//str=file pointer
    printf("You entered:%s",str);

    str=(char*)realloc(str,newsize*sizeof(char));//here we can change in str so bracket of realloc we can write str ...

    if(str==NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }
   printf("\n Enter a larger string(up to 100 character):");
   fgets(str,newsize,stdin);
   printf("You entered a larger string:%s\n",str);

   free(str);

   printf("24ce079_drashti");
}
