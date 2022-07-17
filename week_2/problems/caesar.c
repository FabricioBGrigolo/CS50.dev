#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string encrypt(string word, int key);

int main(int argc, string argv[])
{
    while (argc <= 1 || argc >= 3)
    {
        // Ask this question while argc is less than one or greater than 3
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        string caracters = argv[1];
        if (!isdigit(caracters[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

    }

    string plaintext = get_string("plaintext: ");
    string crypt = encrypt(plaintext, atoi(argv[1]));
    printf("ciphertext: %s\n", crypt);
}

string encrypt(string word, int key)
{
    for (int i = 0; i < strlen(word); i++)
    {
        char c = word[i];

        if (isalpha(c))
        {
            if (isupper(c))
            {
                word[i] -= 65;
                word[i] = (word[i] + key) % 26;
                word[i] += 65;
            }
            else if (islower(c))
            {
                word[i] -= 97;
                word[i] = (word[i] + key) % 26;
                word[i] += 97;
            }
        }
    }

    return word;
}

