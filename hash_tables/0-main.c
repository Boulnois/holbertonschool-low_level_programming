#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Entry point to test the hash_table_create
 * and hash_table_delete functions
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	hash_table_delete(ht);

	return (EXIT_SUCCESS);
}
