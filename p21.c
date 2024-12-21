#include<stdio.h>
#include<math.h>
// function declaration
float area(int,int,int);
float checkside(int,int,int);

void main()
{
 int a,b,c;
 printf("ENTER THE VALUE OF a,b AND c :\n");
 scanf(" %d %d %d",&a,&b,&c);

 if(checkside(a,b,c))
 {
     float result=area(a,b,c);//result is a variable for save or accept the return value by function 2
     printf("This side for valid triangle so the area is:%.2f\n",result);
 }
 else
 {
     printf("The given length is not valid for triangle.\n");
 }

}
// function 1
float checkside(int a,int b,int c)
{

    if(a+b>c&&b+c>a&&a+c>b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// function 2
float area(int a,int b,int c)
{
    float s,result;
    s=(a+b+c)/2;
    printf("s=%.f\n",s);
    result=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("s-a=%.f,s-b=%.f,s-c=%.f\n",s-a,s-b,s-c);
    return result;

}




