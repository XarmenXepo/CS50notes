//learning how to use characters 'char' in arrays
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    //char c1 = 'H';
    //char c2 = 'i';
    //char c3 = '!';
    string s = "Hi!"; //a string is also just an array of characters

    //printf ("%c%c%c\n", c1,c2,c3);
    //printf ("%s\n", s);
    printf ("%c%c%c\n", s[0], s[1], s[2]); //as strings are just arrays, we can print out a string this way as well
    printf ("%i %i %i %i\n", s[0], s[1], s[2], s[3]); //every string has a binary that ends in 0, to indicate the termination of a string
    //we can see this when we print the interger of the strings, the last bit has value of '0'
    // also known as NUL byte, not to be confused with NULL!
    //recall that alphabets have numeral representation as well
}

