#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //representing a string type array, which consists of 2 items
    //we now have just 1 variable 'words', making the code much cleaner
    string words [2];

    //the two items are 'Hi!' in position 0, and 'Bye!' in position 1
    words [0] = "Hi!";
    words [1] = "Bye!";

    printf ("%s\n", words[0]);
    printf ("%s\n", words[1]);

    //we can also print out the string as characters
    printf ("%c%c%c%c\n", words[0][0], words[0][1], words[0][2], words[0][3]);

    //we can also print out the string as the integers representing each character
    printf ("%i %i %i %i\n", words[0][0], words[0][1], words[0][2], words[0][3]);
    //the 0 at the end is the NUL byte, which is a sentinel reprensation of the end of the string

    //while printing out the integer representation of a character
    //it is possible to go over and flow in to the neighboring 'Bye!' string
    printf ("%i %i %i %i %i\n", words[0][0], words[0][1], words[0][2], words[0][3], words[0][4]);

    //printed out after the 0 NUL byte, is the value 66, which represents uppercase B in ASCII
}
