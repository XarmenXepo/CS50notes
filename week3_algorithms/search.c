#include <cs50.h>
#include <stdio.h>
#include <string.h>
//in addition to strlen for comparing string length, the string.h library has strcmp which identifies if 2 strings are identical

 //learning how to write an algorithm for searching
int main (void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "tophat"};
    //the compiler can figure out how many items are in this array, by the number of commas
    //hence there is no need to include string[6] like so, and also makes for less human errors

    string s = get_string("Seach for a string: ");
    for (int i=0; i<6; i++) //6 is considered a magic number here, but this program focuses on the search algorithm
    {
        //if (strings[i] == s)
        //we cannot compare strings in the same way as integers, strcmp must be used instead
        if (strcmp(strings[i], s) == 0)
        //strcmp takes two arguments, here we are using the array of strings, and comparing it with the value of 's' which is the user input
        //ensuring the output == 0 ensures that strcmp has compared 2 strings that are identical
        {
            printf("Found!\n");
            return 0; //showing the return value of 0 or 1, though does not make a difference to user, is helpful to developers 
        }
    }
    printf("Not found...\n");
    return 1;
}