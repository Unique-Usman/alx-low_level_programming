#include <stdio.h>

void quick (int arr[])
{

}

int main()
{
	int arr[] = {6, 9, 7, 3, 4, 5, 4, 7, 20};
	insert(arr);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
}
