#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: the integer value of the string, or 0 if no numbers are found
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int num_started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		else if (s[i] != '+')
		{
			 if (num_started)
			 {
				 break;
			 }
		i++;
		}

	return (result * sign);
}
