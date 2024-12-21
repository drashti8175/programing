
//this programm is prepared by 24ce079_drashti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{

    FILE *file = fopen("C:/Users/drash/OneDrive/Desktop/Drashtii/Demo.txt", "r");
    if (file == NULL)
    {
        printf("Error: Could not open file.\n");
        return 1;
    }

    char word[100]; // Buffer to hold each word
    printf("Reversed Words:\n");

    while (fscanf(file, "%s", word) != EOF)
    {
        reverseString(word);
        printf("%s\n", word);


    }

    fclose(file);
    return 0;

}

