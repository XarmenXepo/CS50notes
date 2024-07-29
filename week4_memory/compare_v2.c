#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    //if (s == t)
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("%p\n", s);
    printf("%p\n", t);
    //we will see that the addresses in memory of s and t are different

}

//strings are just an array of chars
//if using s == t , we are literally comparing the addresses in memory of those chars
//it will ALWAYS be different

//we can instead use strc function in the string.h library for comparing strings instead of its addresses in memory
