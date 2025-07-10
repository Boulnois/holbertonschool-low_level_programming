#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Returns: prints the dog's name, age, and owner; if name or owner is NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %.6f\n", d->age);
	if (d->owner != NULL)
	{
		printf("Owner %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
