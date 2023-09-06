#include <stdlib.h>
#include "main.h" 

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array elements with.
 *
 * Return: A pointer to the created array, or NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL); /* Return NULL if size is 0 */
	}

	char *arr = (char *)malloc(size * sizeof(char)); /* Allocate memory for the array */

	if (arr == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c; /* Initialize each element with the specified character */
	}

	return (arr);
}

