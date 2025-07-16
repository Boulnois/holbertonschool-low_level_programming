#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts the second integer from the first.
 * @a: The integer from which to subtract.
 * @b: The integer to be subtracted.
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides the first integer by the second.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The quotient of a divided by b.
 *         Note: Should handle division by zero appropriately.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the modulus of the first integer by the second.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The remainder of a divided by b.
 *         Note: Should handle modulus by zero appropriately.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
