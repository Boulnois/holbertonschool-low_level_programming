#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements to allocate.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is
 * zero, or if malloc fails.
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
/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive) of the range.
 * @max: The maximum value (inclusive) of the range.
 *
 * Return: A pointer to the newly created array.
 *         If min > max, or if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = _calloc(size, sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; ++i)
	{
		array[i] = min + i;
	}
	return (array);
}
