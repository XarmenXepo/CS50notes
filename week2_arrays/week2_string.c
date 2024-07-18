#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("Iput some string: ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++ ) //using a for loop to iterate through the user input with the strlen function
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
