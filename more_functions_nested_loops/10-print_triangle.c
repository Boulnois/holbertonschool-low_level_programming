#include "main.h"

/**
 * print_triangle - print a triangle at a give size.
 * size of triangle to print.
 * If size is 0 or -, the function print only a new line.
 * 1. Print the spaces
 * 2. Print the #
 * 3. Print a new line after each line of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, margin, toPrint;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (margin = 0; margin < (size - i - 1); margin++)
		{
			_putchar(' ');
		}

		for (toPrint = 0; toPrint < (i + 1); toPrint++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
