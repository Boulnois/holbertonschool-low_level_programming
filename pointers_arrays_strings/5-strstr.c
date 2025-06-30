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
	unsigned int count;
	unsigned int haystack_len = strlen(haystack);
	unsigned int needle_len = strlen(needle);

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	if (needle_len == 0)
	{
		return (haystack);
	}

	for (; haystack[0]; haystack++)
	{
		if (haystack_len < needle_len)
		{
			return (NULL);
}
		for (count = 0; haystack[count] == needle[count]; count++)
		{
			if (count == needle_len - 1)
			{
				return (haystack);
			}
		}

	}
	return (NULL);
}

