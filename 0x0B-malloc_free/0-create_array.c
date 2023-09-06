#include <stdlib.h>
#include "main.h" /* Include the header file */

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array elements with.
 *
 * Return: A pointer to the created array, or NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) *size);
	if (size ==0 ||str == NULL)
		return (NULL);
	for (i =0; i < size; i++)
		str[i] -c;
	return (str);
}
