#include <stdio.h>

//must add the custom created variable, from below, up here in the beginning of the code!
void meow (void);

//using a for loop with a custom variable 'meow'
int main (void)
{
    for (int i=0; i<3; i++)
    {
        meow();
    }
}

//create your own variable in C with this syntax
void meow (void)
{
    printf("meooo000ooow\n");
}
