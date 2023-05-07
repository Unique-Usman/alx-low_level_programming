#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number 
 *
 * Return : nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		_putchar(49);
		return;
	}
	if (n == 0)
	{
		_putchar(48);
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 0x1) + 48);
}
