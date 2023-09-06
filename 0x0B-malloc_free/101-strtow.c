#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int i, j, k, word_count = 0, word_length;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	/* Allocate memory for the array of words */
	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			word_length = i - j;
			words[k] = (char *)malloc(sizeof(char) * (word_length + 1));

			if (words[k] == NULL)
			{
				for (k = 0; k < word_count; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}

			for (i = 0; j < k; j++, i++)
				words[k][i] = str[j];
			words[k][i] = '\0';
			k++;
		}
		else
			i++;
	}

	words[word_count] = NULL;

	return (words);
}

