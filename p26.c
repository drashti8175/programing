// You are tasked with creating a system for managing sports teams in
//CHARUSAT. Each team consists of a team name, sport type (e.g., basketball,
//football), and a coach. Each coach has details such as name, age, and experience.
//Your program should:
// Store information about multiple sports teams and their coaches.
// Allow the user to add, search, and display team and coach information.
//Hint: Use a nested structure where the team structure contains another structure
//for coach details.
#include<stdio.h>

struct Coach
{
    char name[50];
    int age;
    float experience;//first structure have keyword=coach

};
struct Team
{
    char teamname[50];//second structure have keyword=team[]
    char sportstype[50];

    struct Coach coach;
};
//function for add team
int addTeam(struct Team teams[],int teamcount)//function definition are before main function so function declaration is optional  //function 1 have return type so the this function are return any value as ans which stored in main function
{
    fflush(stdin);
    printf("ENTER THE TEAM NAME:");
    gets(teams[teamcount].teamname);
    fflush(stdin);

    printf("ENTER THE SPORTSTYPE:");
    gets(teams[teamcount].sportstype);
     fflush(stdin);


    printf("ENTER THE NAME OF COACH:");
    gets(teams[teamcount].coach.name);
     fflush(stdin);


    printf("ENTER THE AGE OF COACH:");
    scanf("%d",&teams[teamcount].coach.age);
     fflush(stdin);


    printf("ENTER THE EXPERIENCE OF COACH:");
    scanf("%f",&teams[teamcount].coach.experience);
     fflush(stdin);
     return teamcount+1;

}
//function for display team
void displayTeams(struct Team teams[],int teamcount)//it have no return type
{
    if(teamcount==0)
    {
        printf("NO TEAMS AVAILABLE FOR DISPLAY\n");//if i can write 2 then they display the detail which we can write in first function but if i can write 3 then they need to give msg =no team are available...
        return;
    }

    printf("------Team List------\n");

    for(int i=0;i<teamcount;i++)
    {
        printf("TEAM %d is \n",i+1);
        printf("\n Team name=%s",teams[i].teamname);
        printf("\n sports type=%s",teams[i].sportstype);
        printf("\n coach name=%s",teams[i].coach.name);
        printf("\n coach age=%d",teams[i].coach.age);
        printf("\n coach experience=%f\n",teams[i].coach.experience);
    }


}
//function for search team
void searchteam(struct Team teams[],int teamcount)//it have no return type
{
    int found=0;
    if(teamcount==0)
    {
        printf("NO TEAM AVAILABLE TO DIASPLAY\n");//same rules follow as function 2
        return;
    }
    char searchname[20];
    gets(searchname);//if i can write 3 then they ask me team name,so this for team name

    for(int i=0;i<teamcount;i++)
    {
        if(strcmp(teams[i].teamname,searchname)==0)
        {

        printf("TEAM %d is \n",i+1);
        printf("\n Team name=%s",teams[i].teamname);
        printf("\n sports type=%s",teams[i].sportstype);
        printf("\n coach name=%s",teams[i].coach.name);
        printf("\n coach age=%d",teams[i].coach.age);
        printf("\n coach experience=%f",teams[i].coach.experience);
        found=1;
         if(found==0)//this if for team  //if i can write team name is rcb in first function and i can write team name mi in this function so they give this msg
        {
        printf("NO TEAM AVAILABLE FOR SEARCH\n");

        }
    }


}
}

void main()
{
    struct Team teams[50];
    int teamcount=0;
    int choice;


    do
    {
        printf("ENTER 1 TO 4 \n");
        printf("\n 1.ADD TEAMS");
        printf("\n 2.DISPLAY TEAMS");
        printf("\n 3.SERARCH TEAMS ");
        printf("\n 4.EXIT \n");

           scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            teamcount=addTeam(teams,teamcount);// function call//function 1 have parameter and return type //function 1 can return value as ans which can be stored in this(team count)keyword
            break;
        case 2:
            displayTeams(teams,teamcount);//they have no return type so it have no keyboard for stored any value
            break;
        case 3:
            searchteam(teams,teamcount);//same as above
            break;
        case 4:
            printf("Exiting The Programme.........\n");
            break;
        }
    }while(choice!=4);

    printf("24ce079_drashti");
}



