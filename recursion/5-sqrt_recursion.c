#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * finder_sqrt - returns the natural square root of a number.
 * @num: Number to find he natural square  root of
 * @root: Tfe root to be tested.
 * Return: if the number has a square root.
 */

int finder_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (finder_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (finder_sqrt(n, root));
}
