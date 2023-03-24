#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{	
	int sum = 0, i;

	if (n == 0)
		return (0);
	va_list mysum;
	va_start(mysum, n);
	for (i = 0; i < n; i++)
	{	
		sum += va_arg(mysum, int);
	}
	va_end(mysum);

	retutn (sum);
}
