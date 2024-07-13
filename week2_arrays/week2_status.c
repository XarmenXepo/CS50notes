#include <cs50.h>
#include <stdio.h>

//learning how to implement an error code for purpose of calling up a program's exit status
int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command line arg\n");
        return 1; //this being the first error documented
    }
    printf("Hello, %s\n.", argv[1]);
    return 0; //the number 0 signifies success, where as anything else besides a 0 signified error
}

//a program's exit status code is not usually visible/printed out to end users
//to find out what the most recently run program exit with, use 'echo $?'
