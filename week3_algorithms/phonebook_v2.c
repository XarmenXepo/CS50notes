#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person; //we now have a new data type called 'person', which can hold a name and a number

int main (void)
{
    //we can just use our new datatype 'person'
    //string names [] = {"Carter", "David", "John"};
    //string numbers [] = {"+1-253-454-2265", "+1-877-654-9880", "+1-776-948-1132"};
    person people[3]; //the data type is 'person' and the array name is 'people', with 3 items inside

    //this is how we initialize the data type 'person'
    people[0].name = "Carter";
    people[0].number = "+1-253-454-2265";

    people[1].name = "David";
    people[1].number = "+1-877-654-9880";

    people[2].name = "John";
    people[2].number = "+1-776-948-1132";

    string name = get_string("Search for Name: ");
    for (int i = 0; i < 3; i++)
    {
        if(strcmp(people[i].name, name) == 0) //iterate over the array called 'people' and look at the value in 'name'
        {
            printf("Found: %s\n", people[i].number); //show the value of 'number' in the array called 'people'
            return 0; //showing the return value of 0 or 1, though does not make a difference to user, is helpful to developers
        }
    }
printf("Not found\n");
return 1;
}

//this is the improved version of phonebook.c
//it decouples the name/number, and puts them in to its own data structure, which will scale better