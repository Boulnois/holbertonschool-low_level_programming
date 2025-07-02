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
 * @n: Number to return the square root.
 * @root: Tfe root to be tested.
 * Return: if n has a spuare roo≈t
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
