#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * calloc - can do witj malloc like calloc
 * @nmemb: elements of size bytes each and
 * @size: the size of the memory to print
 *
 * Return: allocates memory for an array, using malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(total_size);
	if (p == NULL)
	{
		return (NULL);
	}

	memset(p, 0, total_size);
	return (p);
}
