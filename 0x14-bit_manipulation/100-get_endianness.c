#include "main.h"
/**
 * get_endianness - check whether big or small endianness
 *
 * Return: 0 if big endian and 1 if small endian
 */

int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;
	if (*c == 1)
		return (1);
	else
		return (0);
}
