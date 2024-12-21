#include<stdio.h>
#include<stdlib.h>

#define FILE_NAME "marks.txt"

void writemarks()
{
    FILE *file;

    int n,i,marks;

    file=fopen("marks.txt","w");
    if(file==NULL)
    {
        printf("file does not exit");
    }

    printf("enter the num of stu:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
    printf("enter the marks %d:",i+1);
    scanf("%d",&marks);
    putw(marks,file);
    }

    fclose(file);
}
void readmarks()
{
    int marks,i;
    int studentnum=1;
    FILE *file=fopen("marks.txt","r");
    if(file==NULL)
    {
        printf("file does not exit");
    }
    while((marks=getw(file))!=EOF)
    {
        printf("student %d:%d\n",studentnum++,marks);

    }

    fclose(file);

}

int main()
{
    int choice;

    do{
         printf("\nStudent Marks Recording System\n");
        printf("1. Write Marks\n");
        printf("2. Read Marks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            writemarks();
            break;
        case 2:
            readmarks();
            break;
        case 3:
            printf("exiting file:\n");
            break;
        default:
            printf("invalid choice:");
        }

    }while(choice!=3);

}
