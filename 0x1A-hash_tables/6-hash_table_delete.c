#include "hash_tables.h"

/**
 * hash_table_delete - delete the element in a table
 * @ht: the hashtable
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	hash_table_t *head;
	int i;

	head = ht;

	for (i = 0; i < (int)ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = (ht->array)[i];

			while (node != NULL)
			{
				tmp = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
