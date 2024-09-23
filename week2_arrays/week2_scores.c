//Week 2 : Arrays
#include <cs50.h>
#include <stdio.h>

int main (void)
{
//    int score1 = 73;
//    int score2 = 73;
//    int score3 = 33;

    const int N = 3; //declaring a const variable 'int N' as 3, for efficiency
    int scores [N];
    for (int i = 0; i < N; i++) //use a for loop for better efficiency
    {
        scores[i] = get_int("Score: ");
    }

//    printf("Average: %f\n", (score1 + score2 + score3) /3.0);
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N); //declaring N as a float
}
