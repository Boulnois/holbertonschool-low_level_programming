#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare to strings
 * @s1: the string to compare agenst
 * @s2: the string to compare
 * Return: a int value
 */

int _strcmp(char *s1, char *s2)
{
	int box;

	box = 0;
	while (s1[box] != '\0' && s2[box] != '\0')
	{
		if (s1[box] != s2[box])
			return (s1[box] - s2[box]);
		box++;
	}

		return (s1[box] - s2[box]);
}
