#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head node of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;

	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
