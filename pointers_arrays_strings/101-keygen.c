#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
* main - generates a random password for 101-crackme
*
* Return: Always 0
*/
int main(void)
{
	char pass[16 + 1];
	size_t i;
	unsigned int seed;

	/* initialize random seed with current time */
	seed = (unsigned int)time(NULL);

	srand(seed);

	/* generate 16 random printable ASCII characters */
	for (i = 0; i < 16; i++)
	{
		pass[i] = 33 + (rand() % 94); /* ASCII from '!' to '~' */
	}
	pass[16] = '\0';

	/* print password using _putchar */
	for (i = 0; i < 16; i++)
	{
		_putchar(pass[i]);
	}
	_putchar('\n');

	return (0);
}
