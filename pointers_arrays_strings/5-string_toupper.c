#include "main.h"

/**
 * string_toupper - uppercase all lower case letters in a string.
 * @s: string to process.
 * Return: a pointer
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
