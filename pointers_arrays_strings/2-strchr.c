#include "main.h"

/**
 * _strchr - set memory function
 * @s: pointer to array
 * @c: char type
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (s == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	i++;
	}

	return (NULL);
}
