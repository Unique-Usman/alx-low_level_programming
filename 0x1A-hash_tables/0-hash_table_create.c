#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hashtable
 * Return: null if error else hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hash->array[i] = NULL;
	}
	return (hash);
}
