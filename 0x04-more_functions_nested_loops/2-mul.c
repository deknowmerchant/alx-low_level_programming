#include "main.h"

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of multiplying a and b.
 */
int mul(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return (0);
	}
	else
	{
		return (a * b);
	}
}
