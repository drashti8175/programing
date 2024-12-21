//Write a C program to create a structure of Book Detail and display the details of the
//book in appropriate format by passing structure as a function argument.
//Book Detail must contain following information:
//Book Title, Author name and Amount of book in float.


#include<stdio.h>

struct book
{
    char Title[20];
    char Author_name[20];
    float Amount;
};
void display(struct book b1);//function declaration before main function
int main()
{
    struct book b1;
    printf("ENTER THE TITLE OF BOOK:");
    scanf("%s",&b1.Title);
    printf("ENTER THE AUTHOR_NAME:");
    scanf("%s",&b1.Author_name);
    printf("ENTER THE PRICE OF BOOK:");
    scanf("%f",&b1.Amount);
    display(b1);//function call
}
void display(struct book b1)//function definition
{
    printf("TITLE OF THE BOOK:%s \n",b1.Title);
    printf("AUTHOR_NAME:%s \n",b1.Author_name);
    printf("AMOUNT:%2f\n",b1.Amount);
}
