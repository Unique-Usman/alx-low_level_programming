#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
        int i;

        for (i = 48; i <= 57; i++)
        {
                if (i != 51 || i != 53)
			_putchar(i);
        }

        _putchar('\n');
}

