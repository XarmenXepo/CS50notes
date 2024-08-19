//learning how to use the program 'valgrind' to detect errors
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x); //not including this, after using malloc, may result in valgrind indicating memory error in HEAP SUMMARY
}

//writing a program with a subtle bug on purpose: using the function malloc and not using the function free thereafter to free up memory.
//though program does compile without any issues
//learning how to use the program 'valgrind' to detect errors
//run command: valgrind ./memory

//in the HEAP SUMMARY there may be '12 bytes in 1 blocks are definitely lost ...' indicating to use the free function
//when corrected, in the HEAP SUMMARY there may be 'All heap blocks were freed -- no leaks are possible...' indicating no memory related error
