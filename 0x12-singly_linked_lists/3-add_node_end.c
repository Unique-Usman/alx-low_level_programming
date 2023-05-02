#include "lists.h"

/**
 *add_node_end - adds a node to the end of a linked list
 *@head: pointer to the head of the list
 *@str: string to be used as content
 *
 *
 *Return: address of the newly added node
 */
list_t *add_node_end(listint_t **head, const char *str)
{
	list_t *tmp;
	list_t *tmp1;

	tmp1 = *head;
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = str;
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
