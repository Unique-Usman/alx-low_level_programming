#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves a node at a specific index.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve (0-based).
 *
 * Return: If valid returns pointer the desired node else returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count;

	if (!head)
		return (NULL);
	tmp = head;
	count = 0;

	while (tmp)
	{
		if (count == index)
			return (tmp);
		tmp = tmp->next;
		count++;
	}

	return (NULL);
}
