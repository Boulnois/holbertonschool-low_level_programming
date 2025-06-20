#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Write a function that checks for lowercase character
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
