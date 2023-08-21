#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all elements in a doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all elements in the list. 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	sum = 0;
	tmp = head;

	if (head == NULL)
		return (0);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
