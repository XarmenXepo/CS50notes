#include <stdio.h>
#include <cs50.h>

float add (float a, float b);

int main(void)
{
    float x = get_int("x: ");
    float y = get_int("y: ");

    float z = add(x, y);
    printf("%.20f\n", z);
    //the syntax .20 is specially for printf which gives back 20 digits in a floating integer
}

float add(float a, float b)
{
    return a / b;
}
//using 'float' is less accurate than using 'double'  due to limited computing memory in compilers
//this issue is due to floating-point imprecision
