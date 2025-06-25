#include "main.h"

/**
 * print_rev - minic the stdio version of puts
 * @s: the value to process to the stdout in reverse.
 */

void print_rev(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	while (n > 0)
	{
		_putchar(*(s + n - 1));
		n--;
	}

	_putchar('\n');
}
