#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main (void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

//this is an iterative approach
//lines 14-20 are loops which elude to iteration
//however this same program can also be written better using recursion (see recursion.c)