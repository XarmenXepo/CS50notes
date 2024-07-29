//#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //string s = "Hi!";
    char *s = "Hi!";  //can also be written this way as raw C code, and we can do away with the cs50.h library!!

    //printf("%s\n", s);

    printf("%p\n", s);  //printing out the memory address of the string variable s
    printf("%p\n", &s[0]); //printing out the memory address of the first char in the string variable s.
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

//the string variable s is actualy just a pointer
//the memory address of s is just the memory address of the first char in s, hence line 8 & 9 prints out the same address
//lines 10 to 12 will print out continuous addresses just one byte apart
//shows that a string takes up a contiguous address space

//string is a function found in cs50.h
//a string is essentially just an array of char
//here it is also a pointer, with a user-given name of 's', pointing to the user-given value of 'Hi!'
//on a lower level of detail, it can be written as:
//char *s = "Hi!";
