#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number
 * @n: arg to be checked
 *
 * Return: 1 if n is greater than zero
 * Returns 0 if n is zero
 * Return -1  if n is less than zero
 */

int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
