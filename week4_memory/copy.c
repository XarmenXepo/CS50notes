#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("s: ");

    string t = s;
    //since strings are just pointers, this literally copies the value of s to t, making them point to the same values

    t[0] = toupper(t[0]);
    //capitalizing the first char in the string t
    //the function toupper is found in the ctype.h library

    printf("%s\n", s);
    printf("%s\n", t);
    //s and t are just addresses in memory
    //toupper has change the value of t, and effectively the value of s, as they are both the same
    //hence the result will return uppercase characters in the first char of the string, for both s and t
}
