#include <stdio.h>
/**
 * binary_search - search for an element value in array
 * using binary search
 * @array: The array to search an element from
 * @size: The size of the array
 * @value: value to search for
 * Return: return -1 if value not present in array or array os null
 */

int binary_search(int *array, size_t size, int value)
{
	int start;
	int end;
	int mid;
	int i;

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");

		for (i = start; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = start + (end - start) / 2;

		if (value == array[mid])
			return mid;
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}
