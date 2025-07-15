#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Applies a function to each element of an array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be applied to each element.
 *
 * Return: A parameter on each element of an array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
