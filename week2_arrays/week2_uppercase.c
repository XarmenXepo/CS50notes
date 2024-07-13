#include <cs50.h>
#include <stdio.h>
#include <string.h>

//learning how to change a user input from lower casestrings to all uppercase strings, the inefficient way
//see uppercase_v2.c for the efficient version

int main (void)
{
    string s = get_string ("Before: ");
    printf("After: ");
    for (int i =0, n = strlen(s); i < n; i++)
    {
        //denoting all alphabets that fall between lowercase a to z
        if (s[i] >='a' && s[i] <='z')
        {
            //recall that the numerical ASCII representation of uppercase alphabets is 32 less than lowercase alphabets
            printf("%c", s[i] -32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

}
