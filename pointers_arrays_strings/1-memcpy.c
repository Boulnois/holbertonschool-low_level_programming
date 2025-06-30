#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _memcpy - Copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 * Return: a pointer to the destination memory area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
