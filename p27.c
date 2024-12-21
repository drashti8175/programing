#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;//if i have two variable x and y then we need to make two pointer//  a=&x and b=&y// pointer have fix work to stored address thats why we can write a=&x

}
void main()
{

    int x=10000,y=20000;
    printf("account 1 balance:%d\n",x);
    printf("account 2 balance:%d\n",y);
    swap(&x,&y);
    printf("----------after swap-------------\n");
    printf("account 1 balance:%d\n",x);
    printf("account 2 balance:%d\n",y);
    printf("24ce079_drashti");
}
