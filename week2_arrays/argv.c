#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
//argc is the number of (command line) arguments the program recieves, including the actual name of the program itself
//argv is the array of strings of (command line) argument the program recieves, including the actual name of the program itself
//by default there will always be 1 item in argc, the program name itself
//there will always be a position [0] in arg[], which is the program name itself

{
    for (int i = 0; i < argc; i++)
    {
        printf ("argv[%i] is %s\n", i, argv[i]);
    }
}

//learn how to initialize a program, without using (void) for the value of our program 'main'
//for purpose of allowing a program to run and accept command line arguements

//these user inputs are then stored in argv as strings, which can be any kind of numbers and alphabets
//ie.  ./argv 1 2 4 will return a range of argv[0] to [4] as the program name itself is also included