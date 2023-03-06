#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	n = n - 1;
	while (n >= 0)
	{
		*(s + n) = b;
		n--;
	}
	return (s);
}
