#include "lists.h"

/**
 * sum_listint - sum the element in each node
 * @*head: head of the node
 *
 * Return: sum of data in head
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return sum;
}
