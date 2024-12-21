#include<stdio.h>
#include<string.h>
void main()
{
    char name[60][15],temp[15];
    int i,j,ns,s1[15],s2[15];

    printf("enter the number of students:");
    scanf("%d",&ns);


    for(i=0;i<ns;i++)
    {
        printf("enter the name of students:");
        scanf("%s",&name[i]);
    }
    for(i=0;i<ns;i++)
    {
        for(j=0;j<ns-1;j++)
        {
            strcmp(s1[15],s2[15]);
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }

for(i=0;i<ns;i++)
{
    printf("%s\n",name[i]);

}

}
