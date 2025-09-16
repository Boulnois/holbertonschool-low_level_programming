#include "main.h"

/**
* main - Entry point
*
* Description: Creates an array, modifies its third element using a
* pointer, and prints the value of that element using _putchar.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a[5];
	int *p;

	a[2] = 1234;
	p = &a[2];

	*p = 98;
	_putchar('a');
	_putchar('[');
	_putchar('2');
	_putchar(']');
	_putchar(' ');
	_putchar('=');
	_putchar((*p / 10) + '0');
	_putchar((*p % 10) + '0');
	_putchar('\n');

return (0);
}
