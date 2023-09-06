#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * argstostr - Concatenate all arguments of a program.
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total_length = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; /* Add space for newline character */
	}

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc(sizeof(char) * (total_length + 1));

	if (concatenated == NULL)
		return (NULL);

	/* Copy arguments to the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[k++] = av[i][j];
		concatenated[k++] = '\n'; /* Add newline character */
	}

	concatenated[k] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}

