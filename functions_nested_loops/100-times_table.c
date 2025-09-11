#include "main.h"

/**
* print_number - prints an integer using _putchar
* @n: number to print
*/
void print_number(int n)
{
	if (n >= 0)
	{
		_putchar(n /100 + '0');
		_putchar((n /10) % 10 + '0');
		_putchar (n % 10 + '0');
	}
	else if (n >= 10)
	{
		_putchar((n /10) % 10 + '0');
		_putchar (n % 10 + '0');
	}
	else
	{
		_putchar (n + '0');
	}
}
/**
* print_times_table - prints the n times table, starting with 0
* @n: the size of the times table
*/
void print_times_table(int n)
{
	int row, col, value;

	if (n < 0 || n > 15 )
	return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			value = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (value < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (value < 100)
				{
					_putchar(' ');
				}
			}
			print_number(value);
		}
		_putchar('\n');
	}
}
