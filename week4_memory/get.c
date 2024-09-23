#include <stdio.h>
//learning how to create our own function (to get an integer), without the help of libraries like cs50.h
//by using the scanf function from C itself


int main (void)
{
    int n;
    printf("n: ");
    scanf("%i", &n); //scanf takes user input, in this case of type integer with %i, and the address of that integer &n
    printf("You entered n: %i\n", n);
}
