#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to a pointer pointing to the head of the list.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node, or NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	if (!new_node)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	new_node->next->prev = new_node;
	*head = new_node;
	return (new_node);
}
