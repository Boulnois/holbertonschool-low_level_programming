#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: number in the string can be preceded by an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * Return: number and sign
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int numFound = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9') && s[i] != '-' && s[i] != '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			numFound = 1;
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}

	return (numFound ? result * sign : 0);
}
