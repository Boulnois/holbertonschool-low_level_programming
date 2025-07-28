#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the linked list.
 * Description:
 * For each node, prints:
 * - [len] str     if str is not NULL
 * - [0] (nil)     if str is NULL
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	size++;
	h = h->next;
	}

	return (size);
}
