#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string from source to destination
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * This function copies the string pointed to by src
 * terminating null byte, to the buffer pointed to by dest
 * Return: A pointer to the destination buffer (dest) or Null
*/

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	if (dest == 0 || src == 0)
	{
	return (NULL);
	}
	while (*(src + index) != '\0')
	{
		*(dest + index) = *(src + index);
		index++;
	}
	*(dest + index) = '\0';
	return (dest);
}
