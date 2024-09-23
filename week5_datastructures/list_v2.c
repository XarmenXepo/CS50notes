#include <stdio.h>
#include <stdlib.h> //contains the function malloc

//learning what is required to write a program that can accomodate a growing number of items in list
//in this example, there is a list of intergers called 'list'
//then a new list of integers called tmp is created at line 19, for the purpose of demonstrating how to add a fourth item in to this new list
int main (void)
{
    //int list[3]; //this sets the size of list to be of 3 items and is not dynamic
    int *list = malloc(3 * sizeof(int)); //allocating 3 times more memory
    if (list == NULL)
    {
        return 1; //best practice: include this for error checking
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int)); //for demonstration purpose: trying to change the integer size from 3 to 4, which is an increment of 1
    if (tmp == NULL)
    {
        free(list); //best practice: free the original list from above in line 8 first,before exiting.
        //This avoid memory leak (which can be diagnosed using valgrind tool)
        return 1;
    }

    //using a for loop, to iteratively copy what was in the old array 'list', in to the new array 'tmp'
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4; //a fourth item is added to this new list called 'tmp'

    free(list); //we can now free up the original list 'list' as we no longer need it, with the new list 'tmp'

    //for (int i = 0; i < 3; i++)
    for (int i = 0; i < 4; i++)
    {
        //printf("%i\n", list[i]);
        printf("%i\n", tmp[i]);
    }
    return 0; //best practice: exit with no errors
}


//this is to demonstrate that it requires a lot of work, and is not efficient, to have a program constantly allocate more memory as needed
//ideally we should leverage the ability to reference memory addresses, and use the memory structure more efficiently
//using these operators: struct . *
