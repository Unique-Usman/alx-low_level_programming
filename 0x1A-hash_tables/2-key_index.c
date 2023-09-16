#include "hash_tables.h"

/**
 * key_index - to compute the hash key
 * @key: key
 * @size: size of the array
 * Return: the computed hash key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
