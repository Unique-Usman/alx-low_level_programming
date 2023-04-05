#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of a linked list
 *@head: pointer to the head of the list
 *@n: number to be used as content
 *
 *
 *Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *tmp1;

	tmp1 = *head;
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (tmp1 == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	while (tmp1->next != NULL)
	{
		tmp1 = tmp1->next;
	}
	tmp1->next = tmp;
	return (tmp);
}
