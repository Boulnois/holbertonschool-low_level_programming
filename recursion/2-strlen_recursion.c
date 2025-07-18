#include "main.h"
#include <stdio.h>
#include <math.h>
/* #include <ctype.h>  */
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of a string.
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
