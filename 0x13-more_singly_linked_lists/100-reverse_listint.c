#include "lists.h"

/*
 * reverse_listint - reverse a linked list
 * @head: head pointer
 *
 * Return pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t* next;
	listint_t* prev;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head =prev;
	return (prev);
}
