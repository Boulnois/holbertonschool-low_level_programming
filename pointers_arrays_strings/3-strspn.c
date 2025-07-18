#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: char pointer
 * @accept: char pointer
 * Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int countOne;
	unsigned int countTwo;

	for (countOne = 0; s[countOne] != '\0'; countOne++)
	{
		for (countTwo = 0; accept[countTwo] != '\0'; countTwo++)
		{
			if (s[countOne] == accept[countTwo])
			{
				break;
			}
		}
			if (!(accept[countTwo]))
			{
				break;
			}
	}
	return (countOne);
}
