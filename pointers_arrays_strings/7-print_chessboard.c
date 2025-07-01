#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * print_chessboard - prints 2D array of chessboard
 * @a: chessboard array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int countRows;
	unsigned int countColumns;

	for (countRows = 0; countRows < 8; countRows++)
	{
		for (countColumns = 0; countColumns < 8; countColumns++)
		{
			_putchar(a[countRows][countColumns]);
		}
		_putchar('\n');
	}
}
