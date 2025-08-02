#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array in the hash table
 *
 * Description: Allocates memory for a hash table structure and
 * an array of pointers to hash_node_t. Initializes the array to NULL.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;

	ht->array = calloc(size, sizeof(hash_node_t *));

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
