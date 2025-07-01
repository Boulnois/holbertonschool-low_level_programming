#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * _strstr - Function that locates a substring
 * @needle: char pointer
 * @haystack: char pointer
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
	char *h = haystack;
	char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
		return (haystack);
		}
	haystack++;
	}
	return (NULL);
}
