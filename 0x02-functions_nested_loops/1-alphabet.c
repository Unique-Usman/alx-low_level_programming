#include "main.h"

/**
*main - print alphabet
*Return: return 0
*/

int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
