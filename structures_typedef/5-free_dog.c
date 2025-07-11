#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * free_dog - frees memory of a dog struct
 * @d: pointer to the dog struct to be freed
 * Return: a function that frees dogs
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
