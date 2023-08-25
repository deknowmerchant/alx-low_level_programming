#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 * 
 * Return: A pointer to the result, or 0 if result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, carry = 0, sum;
    int i = size_r - 2;  /* Leave room for the '\0' at the end */

    for (len1 = 0; n1[len1] != '\0'; len1++)
        ;
    for (len2 = 0; n2[len2] != '\0'; len2++)
        ;

    if (len1 > size_r - 1 || len2 > size_r - 1)
        return (0);

    r[size_r - 1] = '\0';
    len1--;
    len2--;

    while (len1 >= 0 || len2 >= 0 || carry)
    {
        sum = carry;

        if (len1 >= 0)
            sum += n1[len1] - '0';
        if (len2 >= 0)
            sum += n2[len2] - '0';

        carry = sum / 10;
        r[i] = (sum % 10) + '0';

        i--;
        len1--;
        len2--;
    }

    if (i < 0)
        return (0);

    return (r + i + 1);
}
