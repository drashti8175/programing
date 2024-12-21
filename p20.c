#include<stdio.h>
// function declaration
void welcomemessage();  //no argument no return type
int getnumberofstudents();  //no argument with return type
void enteranddisplaygrade(int count,int grade[]);  //with argument no return type
float calculateaverage(int count,int grade[]);  //with argument with return type


int main()
{
    int numstudents;
    int grades[100];
    float average;
    welcomemessage();  //function 1 as it is
    numstudents=getnumberofstudents(); // take 1 variable for return value
    enteranddisplaygrade(numstudents,grades); //function 3 as it is
    average=calculateaverage(numstudents,grades);
    printf("The average grade of the students is :%2f\n",average); //function 4

    return 0;

}

// definition of function 1
void welcomemessage()
{
    printf("WELCOME TO CHARUSAT UNIVERSITY! \n");

}
// definition of function 2
int getnumberofstudents()
{
    int count;
    printf("Enter the number of students:");
    scanf("%d",&count);
    return count;
}
// definition of function 3
void enteranddisplaygrade(int count,int grade[])
{
    for(int i=0;i<count;i++)
    {
        printf("Enter the grade of students %d:",i+1);
        scanf("%d",&grade[i]);
    }
     for(int i=0;i<count;i++)
     {
         printf("Student %d:grade=%d\n",i+1,grade[i]);
     }
}
// definition of function 4
float calculateaverage(int count,int grade[])
{
    int sum=0;
    for(int i=0;i<count;i++)
    {
        sum+=grade[i];
    }
    return(float)sum/count;
    printf("patel drashti",24CE079);
}









