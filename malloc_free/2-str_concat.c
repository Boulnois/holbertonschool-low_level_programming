#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer to strind or Null
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *strTemp;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		;
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		;
	}

	strTemp = malloc(i + j + 1);

	if (strTemp == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		strTemp[i] = *(s1 + i);
	}
	for (j = 0;  *(s2 + j) != '\0'; j++)
	{
		strTemp[i + j] =  *(s2 + j);
	}
	return (strTemp);
}
