#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * Add your line of code here.
	 * Remember:
	 * - You are not allowed to use variable a
	 * - You are not allowed to modify variable p
	 * - Only one statement
	 * - You are not allowed to use ,
	 * - You are not allowed to code anything else
	 */
	*(p + 5) = 98;
	/* ...so that this prints "a[2] = 98" followed by a new line */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
