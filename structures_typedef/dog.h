#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type struct dog with elements
 *@name: name is the type char
 *@age: age is the type float
 *@owner: owner is the type char
 * Return:  new type struct dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
