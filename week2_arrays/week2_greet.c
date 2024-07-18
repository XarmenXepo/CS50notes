#include <cs50.h>
#include <stdio.h>

//int main (void)
int main (int argc, string argv[]) //we can also use argc which counts the arguments
//and argv which is a vector/array of string-type arguments
{
    //string name = get_string("Hello what is your name?");
    //printf("Hello, %s\n", name);
    //the above is the typical way when not using argc and argv

    if (argc == 2)
    //uses arguement count, ensures that there will only be 2 words
    //the first word is the program's name'hello' and second word is the user input
    {
        printf("Hello, %s.\n", argv[1]);
    }
    else
    {
        printf("Please enter a single worded name.\n");
    }
}
