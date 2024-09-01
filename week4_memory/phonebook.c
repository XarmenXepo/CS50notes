#include <cs50.h>
#include <stdio.h>
#include <string.h>

//learning how to create a program that creates a csv, appending user input to it each time
int main (void)
{
    FILE *file = fopen("phonebook.csv", "a"); //creating a type FILE called 'file', then opening it and using "a" for appending to it
    //include error handling, incase such a file is not found
    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: "); //we can also use string
    char *number = get_string("Number: ");


    //printing to the file phonebook.csv
    fprintf(file, "%s, %s\n", name, number);

    //closes the file phonebook.csv
    fclose(file);
}

