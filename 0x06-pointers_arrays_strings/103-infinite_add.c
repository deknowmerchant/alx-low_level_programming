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
	int len1, len2, carry = 0, i;
	int digit1, digit2, sum;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	if (len1 > size_r || len2 > size_r)
		return (0);

	r[size_r] = '\0';
	len1--;
	len2--;

	for (i = size_r - 1; len1 >= 0 || len2 >= 0 || carry; i--)
	{
		digit1 = len1 >= 0 ? n1[len1] - '0' : 0;
		digit2 = len2 >= 0 ? n2[len2] - '0' : 0;
		sum = digit1 + digit2 + carry;

		r[i] = (sum % 10) + '0';
		carry = sum / 10;

		if (len1 >= 0)
			len1--;
		if (len2 >= 0)
			len2--;
	}

	if (i >= 0)
		return (r + i + 1);
	else
		return (r);
}
