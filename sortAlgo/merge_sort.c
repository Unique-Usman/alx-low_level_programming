#include <stdio.h>
#include <stdbool.h>


void bubbleSort (int arr[])
{
	for (int i = 0; i < 9; i++)
	{
		bool a = false;

		for (int j = 0; j < 8; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				a = true;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

		if (!a)
		{
			return;
		}
	}
}
int main()
{
	int arr[] = {6, 9, 7, 3, 4, 5, 4, 7, 20};
	bubbleSort(arr);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
}
