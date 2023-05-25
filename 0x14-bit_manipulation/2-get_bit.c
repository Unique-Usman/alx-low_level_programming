#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get bit from
 * @index: index of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	while (index > 0)
	{
		n = n >> 1;
		index--;
	}

	return (n & 0x1);
}
