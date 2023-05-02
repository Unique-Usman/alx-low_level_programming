#include "lists.h"

/**
 * insert_nodeint_at_index - to insert node at index
 * @head: head of the node
 * @idx: index at which element will be added.
 * @n: element to be added
 *
 * Return: node at the index position
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t* tmp;
	listint_t* tmp1;

	tmp = malloc(sizeof(listint_t));
	if (*head == NULL || tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp1 = *head;
	if (idx == 0)
	{
		tmp->next = head;
		*head = tmp;
		return tmp;
	}

	for (i = 0; i < idx - 1 && tmp1; i++)
	{
		tmp1 = tmp1->next;
	}
	if(!tmp1)
	{
		free(tmp);
		return (NULL);
	}
	tmp->next = tmp1->next;
	tmp1->next = tmp;
	return (tmp);
}
