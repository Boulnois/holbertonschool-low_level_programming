#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - Adds node to end of linked list
*
* @str: Pointer to struct pointer
*
* Return: Length of string
*/

int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
