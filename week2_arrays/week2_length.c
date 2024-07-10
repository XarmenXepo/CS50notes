#include <stdio.h>
#include <cs50.h>
#include <string.h>// the string library includes the function 'strlen' which calculates the length of a string

int main (void)
{
    string name = get_string("Name = ");
    int length = strlen(name);
    printf("%i\n", length);
}
