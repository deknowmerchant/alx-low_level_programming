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
	char **words;
	int i, j, k, word_count = 0, in_word = 0;

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
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			words[k] = (char *)malloc(sizeof(char) * (i - j + 1));

			if (words[k] == NULL)
			{
				for (k = 0; k < word_count; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}

			for (k = 0; j < i; j++, k++)
				words[word_count][k] = str[j];
			words[word_count][k] = '\0';
			word_count++;
		}
		else
			i++;
	}

	words[word_count] = NULL;

	return (words);
}

