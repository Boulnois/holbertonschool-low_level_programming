#include "main.h"
#include <stdio.h>

/**
 * _strstr - Function that locates a substring
 * @needle: char pointer
 * @haystack: char pointer
 * Return:  a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int count;

	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)
		{
			if (!(needle[count]))
			return (haystack);
		}

	}
	return (0);
}

