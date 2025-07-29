#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strdup - creates a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the new string (malloc'ed), or NULL if it fails
 */

char *_strdup(char *str)
{
	unsigned int length, counterTwo;
	char *strCopy;

	length = 0;
	counterTwo = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	strCopy = malloc(sizeof(char) * (length + 1));

	if (strCopy == NULL)
	{
		return (NULL);
	}

	while (counterTwo < length)
	{
		strCopy[counterTwo] = str[counterTwo];
		counterTwo++;
	}
	strCopy[counterTwo] = '\0';
	return (strCopy);
}
