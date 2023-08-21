#include "lists.h"
/**
 * print_dlistint - print a double linked list
 * @h - node pointing to the head of the list
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t count;

	count = 0;
	tmp = (dlistint_t *)h;
	if (h == NULL)
		return (0);
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}

	return (count);
}
