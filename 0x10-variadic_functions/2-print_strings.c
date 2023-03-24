#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myprint;
	char *str;

	va_start(myprint, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(myprint, char *);
		if (i == 0)
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			continue;
		}
		if (separator != NULL)
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

	}

	va_end(myprint);

	printf("\n");
}
