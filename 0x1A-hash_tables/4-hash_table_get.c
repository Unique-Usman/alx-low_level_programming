#include "hash_tables.h"

/**
 * hash_table_get - get the value of a key from the hash table
 * @ht: the hash table
 * @key: the key of to the value that I want to get
 * Return: the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int val;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	val = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[val] == NULL)
		return (NULL);
	tmp = (ht->array)[val];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}

		tmp = tmp->next;
	}

	return (NULL);
}
