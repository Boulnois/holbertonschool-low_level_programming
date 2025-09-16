#include "main.h"

/**
* print_buffer - prints a buffer 10 bytes per line in hex and ASCII
* @b: pointer to the buffer
* @size: size of the buffer
*/
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print offset in hex (8 chars) */
		int tmp = i, div, digit;

		char hex[] = "0123456789abcdef";

		for (div = 7; div >= 0; div--)
		{
			digit = (tmp >> (div * 4)) & 0xF;
			_putchar(hex[digit]);
		}
		_putchar(':');

		/* Print hex bytes */
		for (j = 0; j < 10; j++)
		{
			_putchar(' ');
			if (i + j < size)
			{
				int val = (unsigned char)b[i + j];

				_putchar(hex[val / 16]);
				_putchar(hex[val % 16]);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
		}

		/* Print ASCII chars */
		_putchar(' ');
		_putchar(' ');
		for (j = 0; j < 10 && i + j < size; j++)
		{
			char c = b[i + j];

			if (c >= 32 && c <= 126)
				_putchar(c);
			else
				_putchar('.');
		}
		_putchar('\n');
	}
}
