#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string names [] = {"Carter", "David", "John"};
    string numbers [] = {"+1-253-454-2265", "+1-877-654-9880", "+1-776-948-1132"};
    //if a number is not being used mathematically in a program, it should be stored as a string not an integer
    //this is to avoid overflow, and also allows us to use other symbols when needed like + and -

    string name = get_string("Search for Name: ");
    for (int i = 0; i < 3; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("Found: %s\n", numbers[i]);
            return 0; //showing the return value of 0 or 1, though does not make a difference to user, is helpful to developers
        }
    }
printf("Not found\n");
return 1;
}

//code smells!
// the names and their corresponding numbers shouldn't need to be separated. It will not scale well.
//we can create a new data structure using the syntax:
//typedef struct
//{
//string mystring;
//string mynumber;
//string mydata;
//}
//myfirstdatastructure;