#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: ptr to new hash table, otherwise, NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL
	return (hash_table);
}
