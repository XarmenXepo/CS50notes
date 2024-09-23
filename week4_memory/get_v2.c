#include <stdio.h>
//learning how to create our own function (to get a string), without the help of libraries like cs50.h
//by using the scanf function from C itself

int main (void)
{
    //char *s; //we need to initialize char
    char s[4]; // this initializes s as a type of char with 4 bytes, thus assuming that user will always input the equivalent of 4 bytes
    //however if user input exceeds 4 bytes, segments of memory that were not allocated for this program will get used, resulting in a segmentation fault error
    printf("s: ");
    scanf("%s", s);
    //scanf takes user input, in this case of type string with %s
    //we do not need to indicate the address of s with &s, as char *s already holds the address of the first char in the string
    printf("You entered s: %s\n", s);
}

//scanf lacks error handling, which should be considered if wanting to use this function, especially with strings
