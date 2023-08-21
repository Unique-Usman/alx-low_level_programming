#include "lists.h"
/**
 * dlistint_len - count the number of length in a list
 * @h: node pointing to the head of the list
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t count;

	count = 0;
	tmp = (dlistint_t *)h;
	if (h == NULL)
		return (0);
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
