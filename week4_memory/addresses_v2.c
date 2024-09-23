#include <stdio.h>

int main (void)
{
    int n = 50;
    int *p = &n; //creating a variable called 'p' which can store memory addresses, here it is storing the memory address of 'n'
    printf("%p\n", p);
}

// the asterisk symbol (*) tells C to go to the location of that memory
//the ampersand symbol (&) tells C to return the address in memory of a variable
