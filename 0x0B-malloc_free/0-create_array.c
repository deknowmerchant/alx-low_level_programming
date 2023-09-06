#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Create an array of chars and initialize with a specific char.
 * @size: Size of the array to create.
 * @c: Character to initialize the array elements.
 *
 * Return: Pointer to the created array, or NULL if size is 0 or memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
