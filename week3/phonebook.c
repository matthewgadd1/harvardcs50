#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Yulia", "David", "John"};
    string numbers[] = {"+447895439503", "+447768495685", "+447858684859"};

    string name = get_string("Name: ");

    for(int i = 0; i < 3; i++)
    {
        if(strcmp(name, names[i]) == 0)
        {
            printf("That person's number is: %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Number not found.\n");
    return 1;
}