#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog
 * @name: A pointer to a character string representing the dog's name.
 * @age: A floating-point number representing the dog's age.
 * @owner: A pointer to a character string representing the owner's name.
 *
 * This structure defines a dog with attributes such as its name, age,
 * and the name of its owner. A new type, dog_t, is created to help
 * simplify references to the struct dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
