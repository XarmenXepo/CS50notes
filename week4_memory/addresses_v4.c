//learning about pointer arithmetic
//#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //string s = "Hi!";
    char *s = "Hi!";  //can also be written this way as raw C code, and we can do away with the cs50.h library!!

    printf("%c", *s);   //printing out the memory address of the first char in the string variable s.
    printf("%c", *(s + 1));     //printing out the memory address for the next one over
    printf("%c\n", *(s + 2));    //print out two addresses over
}
