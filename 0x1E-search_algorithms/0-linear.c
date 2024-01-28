#include <stdio.h>
/**
 * linear_search - search for an element value in array
 * @array: The array to search an element from
 * @size: The size of the array
 * @value: value to search for
 * Return: return -1 if value not present in array or array os null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
