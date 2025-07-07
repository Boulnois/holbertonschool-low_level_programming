#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int i;
	char *s;
	i = 0;
	if (str == 0)
        {
                return (NULL);
	}

	while (*(str + i) != '\0')
	{
		i++;
	}

	i = 0;
	while (*(str + i) != '\0')
	{
		*(s + i) = *(str + i);
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	free(s);
	if (s == 0)
        {
                return (NULL);
        }
	*(s + i) = '\0';
	return (s);
}
