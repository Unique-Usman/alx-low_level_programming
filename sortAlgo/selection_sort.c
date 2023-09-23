#include <stdio.h>

void selectionSort (int arr[])
{
	for (int i = 0; i < 9; i++)
	{
		int smallest = arr[i];
		int index = i;

		for (int j = i + 1; j < 9; j++)
		{
			if (smallest > arr[j])
			{
				smallest = arr[j];
				index = j;
			}
		}
		int tmp = arr[i];
		arr[i] = smallest;
		arr[index] = tmp;
	}
}
int main()
{
	int arr[] = {6, 9, 7, 3, 4, 5, 4, 7, 20};
	selectionSort(arr);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
}
