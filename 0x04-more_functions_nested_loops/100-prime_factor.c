#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	long int divisor = 2;
	long int largest;

	while (n != 0)
	{
		if (n % divisor != 0)
			divisor++;
		else
		{
			largest = n;
			n /= divisor;
			if (n == 1)
			{
				printf("%ld\n", largest);
				break;
			}
		}
	}
	return (0);
}
