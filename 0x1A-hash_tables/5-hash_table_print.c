#include "hash_tables.h"

/**
 * hash_table_print - print the hash_table
 * @ht: the hash table to printed
 * Return: it return null
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	int i, printed;

	printed = 0;
	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < (int)ht->size; i++)
	{
		if ((ht->array)[i] == NULL)
			continue;
		if (printed == 1)
			printf(", ");
		tmp = (ht->array)[i];
		while (tmp != NULL)
		{
			printf("'%s'", tmp->key);
			printf(": ");
			printf("'%s'", tmp->value);
			tmp = tmp->next;
			if (tmp != NULL)
				printf(", ");
		}
		printed = 1;
	}
	printf("}\n");
}
