#include "main.h"

/**
* print_number - Prints an integer value.
*
* This function takes an integer as input and prints it to the standard output.
*
* @n: The integer to be printed.
* Return: This function does not return a value (void).
*/

void print_number(int n)
{
	unsigned int num;

	int div = 1, digit;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	while (num / div >= 10) {
		div *= 10;
	}
	while (div > 0)
	{
		digit = num / div;
		_putchar('0' + digit);
		num = num % div;
		div /= 10;
	}
}
