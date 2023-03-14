#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (p);
	}
	p = malloc((sizeof(char) * c) + 1);
	for (i = 0; i < (size - 1); i++)
	{
		p[i] = c;
	}
	p[size] = '\0';
	return (p);
}
