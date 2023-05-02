#include "lists.h"

/**
 * *get_nodeint_at_index - return node at an index
 * @*head: head of the node
 * @index: index of the return element
 *
 * Return: node at the index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return head;
}
