#include "main.h"
#include <stdio.h>

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
		printf("%08x:", i);

		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
				printf(" %02x", (unsigned char)b[i + j]);

			else
				printf("   ");
		}

		printf("  ");

		for (j = 0; j < 10 && (i + j) < size; j++)
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
