#include "lists.h"

/**
 *add_node - Adds a new node at the beginning
 *of a listint_t list
 *@head: A pointer to the address of the head of the listint_t list
 *@str: the string for the new node to contain
 *
 *Return: NULL if function fails
 *Or address of element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}else
	{
		tmp->str = str;
		tmp->next = *head;
		*head = tmp;
	}

	return (tmp);
}
