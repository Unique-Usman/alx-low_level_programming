#include "lists.h"

/**
 * poplistint - delete head and return headnode data 
 * @**head: the head pointer
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t* tmp;
	int data;

	tmp = *head;
	data = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return data;
}
