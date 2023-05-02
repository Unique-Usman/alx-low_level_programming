#include "lists.h"

/**
 * delete_nodeint_at_index - return node at an index
 * @head: head of the node
 * @index: index of the element to be deleted
 *
 * Return: return 1 for success and -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t* tmp;
	listint_t* tmp1;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	tmp1 = tmp->next;
	if (tmp1 == NULL)
		return (-1);
	tmp->next = tmp->next->next;
	free(tmp1);
	return (1);
}
