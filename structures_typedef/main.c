#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *my_dog = new_dog("Snoopy", 3.5, "Charlie");

	if (my_dog == NULL)
	{
		printf("Failed to create dog\n");
		return (1);
	}

	printf("Dog's name: %s\n", my_dog->name);
	printf("Dog's age: %.1f\n", my_dog->age);
	printf("Dog's owner: %s\n", my_dog->owner);

	free_dog(my_dog);
	return (0);
}
