#include "main.h"

/**
    * print_triangle - Prints a triangle of given size
    * @size: The size of the triangle
    *
    * If size is 0 or negative, print only a new line.
    *
    * This function performs the following:
    * 1. Prints the spaces necessary for triangle formatting
    * 2. Prints the '#' symbols to form the triangle
    * 3. Prints a new line after each line of the triangle
    */

void print_triangle(int size)
{
/*
 * int i: for iteration in for loop also use as a way to subtract.
 *
 * int margin: will recored the amount of whitesapce ill need to print.
 *
 * int toPrint: is used to tell how many '#' will need to be print per-line
 */

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
