#include "main.h"

/**
*print_alphabet - print alphabet
*Return: return 0
*/

void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
