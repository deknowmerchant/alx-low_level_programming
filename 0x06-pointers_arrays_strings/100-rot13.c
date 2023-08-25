#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string.
 * 
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *result = str;
	char *alphabet_lower = "abcdefghijklmnopqrstuvwxyz";
	char *alphabet_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet_lower[j] != '\0'; j++)
		{
			if (str[i] == alphabet_lower[j])
			{
				str[i] = rot13_lower[j];
				break;
			}
			else if (str[i] == alphabet_upper[j])
			{
				str[i] = rot13_upper[j];
				break;
			}
		}
	}

	return result;
}
