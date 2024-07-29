#include <stdio.h>

int main (void)
{
    int score[1024];
    //declaring an integer called score with 1024 items, but never declaring any values in those 1024 items
    //deliberatly creating garbage values, which sometimes can be 0 or 1 or any other numbers
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", score[i]);
    }
}
