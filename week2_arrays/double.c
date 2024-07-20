#include <cs50.h>
#include <stdio.h>

//creating an array that uses a for loop to double its value at each loop
int main (void)
{
    int size = 5; //to avoid having 'magic numbers', we can specify a variable. It also makes modifying quicker.
    //int sequence [5]; //having a 'magic number' like 5 may cause confusion as to what it actually represents
    //int size = get_int("Enter a size: "); //we can also use the function get_into for users to input their own value!
    int sequence [size]; //we can use the created variable to avoid having 'magic numbers'
    sequence[0] = 1;
    printf("%i\n", sequence[0]);

    for (int i =1; i < size; i++)
    // i=1 as we had already set its value at line 8 to be 1
    //we want i < 5 as we want only 4 iterations for 2, 4, 8, 16.
    {
        sequence[i] = sequence[i - 1] * 2;
        printf("%i\n", sequence[i]);
    }
}
