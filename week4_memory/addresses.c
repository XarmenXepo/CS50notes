#include <stdio.h>

int main (void)
{
    int n = 50;
    //printf("%i\n", n);
    printf("%p\n", &n);

    //pointers are supported in C, and are basically pointing to the address of a variable in memory
    //pointers typically use up 8 bytes of memory, compared to the typical integer which uses only 4 bytes
    //to show an address in memory, we use %p instead
    //to print the value of the address of 'n' in memory, we use the ampersand &
}
