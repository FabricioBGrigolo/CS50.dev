#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("How many scores? ");

    int scores[n];
    float average = 0.0 ;

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
        average += scores[i];
    }
    average /= n;

    printf("Average: %f\n", average);
}