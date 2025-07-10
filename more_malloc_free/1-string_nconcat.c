#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings up to n bytes of the second.
 * @s1: The first string. Treated as empty if NULL.
 * @s2: The second string. Treated as empty if NULL.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to new string or NULL if allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *temp;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		n++;
	}
	temp = malloc(sizeof(char) * (n + 1));

	if (temp == NULL)
	{
		return (NULL);
	}
	n = 0;
	for (i = 0; s1[i]; i++)
	{
		temp[n++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		temp[n++] = s2[i];
	}
	temp[n] = '\0';
	return (temp);
}
