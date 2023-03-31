#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0
	list_h* tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[%d] \n", 0, "(nil)");
		}else
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
		count++;
	}

	return (count);
}

