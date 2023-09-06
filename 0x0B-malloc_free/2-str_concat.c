#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len_s1 = 0, len_s2 = 0, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concatenated == NULL)
		return (NULL);

	/* Copy characters from s1 to concatenated */
	for (i = 0; s1[i]; i++)
		concatenated[i] = s1[i];

	/* Copy characters from s2 to concatenated */
	for (j = 0; s2[j]; j++)
		concatenated[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[i + j] = '\0';

	return (concatenated);
}

