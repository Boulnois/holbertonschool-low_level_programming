#include "main.h"
#include <stdio.h>

/**
 * _strncat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that will be concatenated to @des.
 * @n: copy up to poistion 'n'
 * Return: a pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int boxOne = 0;
	int boxTwo = 0;

	while (dest[boxOne] != '\0')
	{
		boxOne++;
	}
	while (boxTwo < n && src[boxTwo] != '\0')
	{
		dest[boxOne + boxTwo] = src[boxTwo];
		boxTwo++;
	}
	dest[boxOne + boxTwo] = '\0';
	return (dest);
}
