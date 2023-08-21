#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: A pointer to the pointer of the head node.
 * @n: The integer value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if allocation fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_node->next = NULL;
	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}
