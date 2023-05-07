#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0i at a given index.
 * @n: number to clear it's bits
 * @index: index of the bit to clear;
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);
	index = 1 << index;
	*n &= ~index;
	return (1);
}
