#include "main.h"

/**
 * power - find the power of 2 raised to pow
 * @pow: power to raise 2 to
 * Return: res
 */
int power(int pow)
{
	int i;
	int res;

	res = 1;
	for (i = 0; i < pow; i++)
	{
		res *= 2;
	}
	return (res);
}
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: he converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i;
	int size;
	const char *tmp;

	if (b == NULL)
		return (0);
	tmp = b;
	size = 0;
	while (*tmp != '\0')
	{
		size++;
		tmp++;
	}
	n = 0;
	for (i = 0; i < size; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			n += (1 * power(size - i - 1));
		else
			n += (0 * power(size - i - 1));
	}

	return (n);
}
