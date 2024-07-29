#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> //this library includes the function malloc (memory allocate)
//and free (whch is needed in C to free up memory allocated previous using malloc), else computer may get very slow over time
#include <string.h>

int main (void)
{
    //string s = get_string("s: ");
    char *s = get_string("s: "); //learning how to use char * instead of the function string
    //hardening the code, with error checking. In event user input is large and causes memory to run out, the program needs to terminate
    if (s == NULL)
    {
        return 1;
    }

    //string t = s;
    //since strings are just pointers, this literally copies the value of s to t, making them point to the same values
    char *t = malloc(strlen(s) + 1); //allocating separate memory address for t instead of just pointing to the same memory address
    // we have to + 1 to the length of s to account for the null byte as well
    //hardening the code with error checking again
    if (t == NULL)
    {
        return 1;
    }

    for (int i = 0, n = strlen(s); i <= n; i++) // we have to account for the null byte with counnting i till it is < or = to n
    {
        t[i] = s[i];
    }

    if (strlen(t) > 0) //makes sure that there is some user input
    {
        t[0] = toupper(t[0]);
        //capitalizing the first char in the string t
        //the function toupper is found in the ctype.h library
    }

    printf("%s\n", s);
    printf("%s\n", t);
    //s and t are just addresses in memory
    //toupper has change the value of t, and effectively the value of s, as they are both the same
    //hence the result will return uppercase characters in the first char of the string, for both s and t

    free(t); //the function free is needed in C, so that memory used by t with malloc (the memory allocate function) can be freed
    return 0; //to signify it is error free
}
