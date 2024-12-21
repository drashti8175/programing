#include<stdio.h>
#include<string.h>
void main()
{
    char note[100],revnote[100];
    int length=0,i,j;
    printf("enter the note of you:");
    gets(note);
    printf("note:");
    puts(note);

    printf("find the length of note:");

    for(i=0;note[i]!='\0';i++)
    {
        length++;
    }
    printf("%d",length);
    //////////////////////////////////////////
    for(i=length-1,j=0;i>=0;i--,j++)
    {
        revnote[j]=note[i];
    }
    revnote[j]!='\0';
    printf("\n revnote is:");
    puts(revnote);
    //////////////////////////////////////////
    char temp;
    puts(note);
    printf("enter the note of you:");
    gets(note);
    for(i=0,j=length-1;i<length/2;i++,j--)
    {
        temp=note[i];
        note[i]=note[j];
        note[j]=temp;
    }

    printf("\n revnote in same array:");
    puts(note);

}
