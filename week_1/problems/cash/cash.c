// This is the resolution for the problem set one of two
// https://cs50.harvard.edu/x/2022/psets/1/cash//


#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    // calculation of quarters
    int quarter = 25;
    int result = 0;
    if (cents >= 25 && cents <= 49)
    {
        result = 1;
        (cents -= quarter);
    }
    else if (cents >= 50 && cents <= 74)
    {
        result = 2;
        cents -= (2 * quarter);
    }
    else if (cents >= 75 && cents <= 89)
    {
        result = 3;
        cents -= (3 * quarter);
    }
    else if (cents >= 100 && cents <= 124)
    {
        result = 4;
        cents -= (4 * quarter);
    }
    else if (cents >= 125 && cents <= 149)
    {
        result = 5;
        cents -= (5 * quarter);
    }
    else if (cents >= 150 && cents <= 175)
    {
        result = 6;
        cents -= (6 * quarter);
    }
    return result;
}

int calculate_dimes(int cents)
{
    // calculation of dimes
    int dimes =  10;
    int result = 0;

    if (cents >= 10 && cents <= 19)
    {
        result = 1;
        cents -= 10;
    }
    else if (cents >= 20 && cents <= 29)
    {
        result = 2;
        cents -= 20;
    }
    else if (cents >= 30 && cents <= 39)
    {
        result = 3;
        cents -= 30;
    }
    else if (cents >= 40 && cents <= 49)
    {
        result = 4;
        cents -= 40;
    }
    else if (cents >= 50 && cents <= 59)
    {
        result = 5;
        cents -= 50;
    }
    else if (cents >= 60 && cents <= 69)
    {
        result = 6;
        cents -= 60;
    }
    else if (cents >= 70 && cents <= 79)
    {
        result = 7;
        cents -= 70;
    }
    else if (cents >= 80 && cents <= 89)
    {
        result = 8;
        cents -= 80;
    }
    else if (cents >= 90 && cents <= 99)
    {
        result = 9;
        cents -= 90;
    }

    return result;
}

int calculate_nickels(int cents)
{
    // calculation of nickels...
    int nickel = 5;
    int result = 0;

    if (cents >= 5 && cents <= 9)
    {
        result = 1;
        cents -= nickel;
    }
    else if (cents >= 10 && cents <= 14)
    {
        result = 2;
        cents -= (2 * nickel);
    }
    else if (cents >= 20 && cents <= 24)
    {
        result = 3;
        cents -= (3 * nickel);
    }
    else if (cents >= 25 && cents <= 29)
    {
        result = 4;
        cents -= (4 * nickel);
    }
    else if (cents >= 30 && cents <= 34)
    {
        result = 5;
        cents -= (5 * nickel);
    }
    else if (cents >= 35 && cents <= 39)
    {
        result = 6;
        cents -= (6 * nickel);
    }
    return result;
}

int calculate_pennies(int cents)
{
    // calculation of pennie
    int pennie = 1;
    int result = 0;

    for (int i = cents; i >= 1; i--)
    {
        result += 1;
        cents--;
    }
    return result;
}
