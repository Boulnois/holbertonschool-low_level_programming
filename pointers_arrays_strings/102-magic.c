#include <stdio.h>
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
	int *pt;

	a[2] = 1234;
	pt = &a[2];

	*pt = 98;
	_putchar('a');
	_putchar('[');	
	_putchar('2');
	_putchar(']');
	_putchar(' ');
	_putchar('=');
	_putchar((*pt / 10) + '0');	
	_putchar((*pt % 10) + '0');	
	_putchar('\n');

return (0);
}
