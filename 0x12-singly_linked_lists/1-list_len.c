#include "lists.h"

/**
 * list_len - return the number of element in the linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
        size_t n;

        n = 0;
        while (h != NULL)
        {
                n++;
                h = h->next;
        }

        return (n);
}
