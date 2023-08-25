#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase in a string.
 * @str: The input string.
 * 
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *result = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A'); // Convert lowercase to uppercase
		}
		str++;
	}

	return result;
}
