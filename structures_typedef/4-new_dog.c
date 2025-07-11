#include <stdio.h>
#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - frees a dog struct and its associated memory
 * @d: pointer to the dog struct to be freed
 *
 * Checks if the input pointer is NULL.
 *
 * This prevents memory leaks in the program when freeing dog
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

/**
 * new_dog - creates a new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: pointer to the new dog_t, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *name_copy;
	char *owner_copy;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(newdog);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(newdog);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	newdog->name = name_copy;
	newdog->age = age;
	newdog->owner = owner_copy;

	return (newdog);
}
