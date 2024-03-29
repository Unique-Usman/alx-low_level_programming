#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to set it's bits
 * @index: index of the bit to set;
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);
	index = 1 << index;
	*n = *n | index;
	return (1);
}
