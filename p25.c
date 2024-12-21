//Create a Union called library to hold accession number, title of the book, author name,
//price of the book and flag indicating whether the book is issued or not. (flag = 1 if the
//book is issued, flag = 0 otherwise). Write a program to enter data of one book and
//display the data.

#include<stdio.h>


union library
{
    int Accession_number;
    char Title[20];
    char Author_name[20];
    float Price;

}a1;

void main()
{
    printf("ENTER THE ACCESSION_NUMBER:");
    scanf("%d",&a1.Accession_number);
    printf("ACCESSION_NUMBER:%d\n",a1.Accession_number);

    printf("ENTER THE TITLE OF THE BOOK:");
    scanf("%s",&a1.Title);
    printf("TITLE:%s\n",a1.Title);

     printf("ENTER THE AUTHOR_NAME:");
    scanf("%s",&a1.Author_name);
    printf("AUTHOR_NAME:%s\n",a1.Author_name);

     printf("ENTER THE PRICE OF BOOK:");
    scanf("%f",&a1.Price);
    printf("PRICE:%f\n",a1.Price);
    int flag;

    if(flag==1)
    {
        printf("BOOK IS ISSUED");
    }
    else
    {
        printf("BOOK IS NOT ISSUED");
    }



}
