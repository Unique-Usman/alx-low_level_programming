#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete a node at a specific index.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to delete (0-based).
 * Return: 1 if successful, -1 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;

	current = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0 && current->next == NULL)
	{
		*head = NULL;
		free(current);
		return (1);
	}

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		(*head)->next->prev = *head;
		free(tmp);
		return (1);
	}
	while (index > 1 && current != NULL)
	{
		current = current->next;
		index--;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	if (current->next->next == NULL)
	{
		free(current->next);
		current->next = NULL;
		return (1);
	}

	tmp = current->next;
	current->next->next->prev = current->next;
	current->next = current->next->next;
	free(tmp);
	return (1);
}
