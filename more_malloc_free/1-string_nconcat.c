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
	unsigned int i, j, count1, count2;
	char *temp;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	count1 = 0;
	while (s1[count1] != '\0')
	{
		count1++;
	}

	count2 = 0;
	while (s2[count2] != '\0')
	{
		count2++;
	}

	if (n >= count2)
	{
		n = count2;
	}
	temp = malloc(sizeof(char) * (count1 + n + 1));

	if (temp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count1; i++)
	{
		temp[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		temp[i + j] = s2[j];
	}
	temp[i + j] = '\0';
	return (temp);
}
