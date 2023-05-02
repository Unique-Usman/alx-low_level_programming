#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: head of the list
*
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}
}
