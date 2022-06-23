// This is the resolution for the problem set two of two
// https://cs50.harvard.edu/x/2022/psets/1/mario/more/

#include <cs50.h>
#include <stdio.h>

void bricks(int n);
void dots(int n, int n2);

int main(void)
{
    // Declaring int variable
    int h;
    do
    {
        // Ask this question while h is less than one or greater than eight
        printf("Choose a number between one and eight for the size of the right triangle.\n");
        h = get_int("Size: ");
    }
    while (h < 1 || h > 8);

    // for each row
    for (int i = 0; i < h; i++)
    {
        dots(i, h), bricks(i), printf("  "), bricks(i);
        printf("\n");


    }

}

// Functions are below ↓
//                     ↓
//                     ↓
//                     ↓










void bricks(int n)
{
    for (int i = -1; i < n; i++)
    {
        printf("#");
    }
}

void dots(int n, int n2)
{
    for (int i = n2 - 1; i > n; i--)
    {
        printf(" ");
    }
}