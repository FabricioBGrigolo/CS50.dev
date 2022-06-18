#include <stdio.h>

void meow(int n); 

int main(void)
{
    // An "unusual" way to use the loop, but it works
    // int i = 0;
    // while (i < 3)
    // {
    //     printf("meow while\n");
    //     i++;
    // }

    meow(4);
}


void meow(int n)
{
    for ( int i =0 ; i < n ; i++ ) 
    {
        printf("meow\n");
    }

}