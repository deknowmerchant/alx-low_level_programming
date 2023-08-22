#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int pass[100];
    int i, sum, n;

    sum = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        pass[i] = rand() % 78;
        sum += (pass[i] + '0'); // Convert digit to ASCII
        putchar(pass[i] + '0'); // Print the character representation of digit
        if ((2772 - sum) - '0' < 78) // '0' should be '0' + 0
        {
            n = 2772 - sum - '0'; // '0' should be '0' + 0
            sum += n;
            putchar(n + '0'); // Print the character representation of n
            break;
        }
    }

    putchar('\n'); // Print a newline character at the end

    return (0);
}
