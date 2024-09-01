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
    //this is a base case, in event that user inputs 0
    //also ensures that the recursion does not blindly accept & continue on in negative intergers
    if (n <=0)
    {
        return;
    }

    //print pyramid of height n - 1
    draw(n - 1);

    //print one more rowmv
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < i+1; j++)
//        {
//            printf("#");
//        }
//        printf("\n");
//    }
}

//this is a recursive approach
//it uses less memory and requries less lines of code
//this same program can also be written less efficiently and iteratively, leveraging on loops
