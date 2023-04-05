#include "lists.h"

/**
*free_listint - frees a linked list
*@head: head of the list
*
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
