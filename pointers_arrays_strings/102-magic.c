#include "main.h"

/**
* main - Entry point
* Description: Creates an array and prints the value of that element.
* Return: Always 0 (Success)
*/
int main(void)
{
	int a[5];
	int *p;

	a[2] = 1024;
	p = &a[2];

	*p = 98;
	_putchar('a');
	_putchar('[');
	_putchar('2');
	_putchar(']');
	_putchar(' ');
	_putchar('=');
	_putchar(' ');
	_putchar((*p / 10) + '0');
	_putchar((*p % 10) + '0');
	_putchar('\n');

	return (0);
}
