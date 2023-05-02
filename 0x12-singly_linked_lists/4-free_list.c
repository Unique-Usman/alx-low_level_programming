#include "lists.h"

/**
*free_list - frees a linked list
*@head: head of the list
*
*Return: void
*/
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
