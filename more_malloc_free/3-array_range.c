#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int nbr;
	int total_elements = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * total_elements);
	if (array == NULL)
	{
		return (NULL);
	}
	for (nbr = 0; nbr < total_elements; nbr++)
	{
		array[nbr] = min + nbr;
	}
	return (array);
}
