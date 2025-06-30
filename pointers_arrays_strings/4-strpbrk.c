#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: char pointer
 * @accept: char pointer
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int n;

	for (; *s != '\0'; s++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
			return (s);
		}
	}
	return (0);
}
