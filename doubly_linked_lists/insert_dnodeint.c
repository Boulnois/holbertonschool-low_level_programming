#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 *
 * This function inserts a new node with the given value `n`
 * at the specified position `idx` in a doubly linked list.
 *
 * @h: Double pointer to the head of the doubly linked list
 * @idx: Index where the new node should be inserted (starting at 0)
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (tmp && i < idx)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL && i == idx)
	{
		return (add_dnodeint_end(h, n));
	}

	if (tmp == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = tmp;
	new->prev = tmp->prev;

	if (tmp->prev)
	{
		tmp->prev->next = new;
	}
	else
	{
		*h = new;
	}

	tmp->prev = new;

	return (new);
}
