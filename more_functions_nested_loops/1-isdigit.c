#include "main.h"

/**
 * _isdigit - Check if the given character is an uppercase letter.
 * @c: Checks for a digit (0 through 9)
 *
 * Return: 1 if c is a digit
 */

int _isdigit(int c)

{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
