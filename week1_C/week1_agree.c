#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char c = get_char("Do you agree? Enter y for Yes: ");

    if (c == 'y' || c == 'Y')
    {
        printf("user agree\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("user did not agree!\n");
    }
}
