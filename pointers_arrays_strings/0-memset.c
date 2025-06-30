#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory area with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area @s.
 *
 * Description: The _memset() function fills the first n bytes of the memory
 * area pointed to by @s with the constant byte @b. This function is commonly
 * used to initialize or reset a memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n ; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
