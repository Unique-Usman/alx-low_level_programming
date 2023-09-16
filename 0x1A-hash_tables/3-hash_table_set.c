#include "hash_tables.h"

/**
 * hash_table_set - function that add element to the hashtable
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: value associated with the key
 * Return: 0 if success else 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int val;
	hash_node_t *tmp, *tmp1;

	tmp1 = malloc(sizeof(hash_node_t));
	if (tmp1 == NULL)
		return (0);

	tmp1->key = malloc(sizeof(char *));
	if (tmp1->key == NULL)
		return (0);

	tmp1->value = malloc(sizeof(char *));
	if (tmp1->value == NULL)
		return (0);
	strcpy(tmp1->key, key);
	strcpy(tmp1->value, value);

	val = key_index((const unsigned char *)key, ht->size);

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);
	tmp = (ht->array)[val];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			strcpy(tmp->value, value);
			return (1);
		}
		tmp = tmp->next;
	}
	tmp1->next = (ht->array)[val];
	(ht->array)[val] = tmp1;
	return (1);
}
