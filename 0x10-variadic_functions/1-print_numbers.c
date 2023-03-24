#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list myprint;

	va_start(myprint, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(myprint, int));
			continue;
		}
		if (separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(myprint, int));
	}

	va_end(myprint);

	printf("\n");
}
