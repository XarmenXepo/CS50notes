#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

//learning how to change a user input from lower casestrings to all uppercase strings, the efficient way
//see uppercase.c for the inefficient version

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
            //printf("%c", s[i] -32);
            printf("%c", toupper(s[i]));

            //the toupper() function, in the ctype.h library, returns uppercase characters
        //}
        //else
        //{
        //    printf("%c", s[i]);
        //we do not need the else condition, as toupper() knows to return uppercases automatically as well
        }
    }
    printf("\n");

}
