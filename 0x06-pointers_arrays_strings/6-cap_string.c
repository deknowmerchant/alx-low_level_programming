#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *result = str;
	int capitalize_next = 1;

	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if (capitalize_next && (*str >= 'a' && *str <= 'z'))
			{
				*str = *str - 'a' + 'A';
			}
			capitalize_next = 0;
		}
		else if (*str == ' ' || *str == '\t' || *str == '\n' ||
				 *str == ',' || *str == ';' || *str == '.' ||
				 *str == '!' || *str == '?' || *str == '"' ||
				 *str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			capitalize_next = 1;
		}

		str++;
	}

	return result;
}
