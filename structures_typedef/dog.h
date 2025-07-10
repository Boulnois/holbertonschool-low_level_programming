#ifndef DOG_H
#define DOG_H

/**
 * typedef struct dog - new type dog_t struct dog with elements
 * @name: name is the type char*
 * @age: age is the type float
 * @owner: owner is the type char*
 * @dog_t: a new type
 * Return: a new type dog_t as a new name for the type struct dog
 */

typedef struct dog
{
	char *name; /** Name of the dog */
	float age; /** age of the dog */
	char *owner; /** owner of the dog */
} dog_t;

#endif
