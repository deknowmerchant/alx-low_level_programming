#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num_arguments = argc - 1;

	printf("%d\n", num_arguments);

	return (0);
}
