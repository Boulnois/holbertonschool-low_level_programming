#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_divisible - a prime number is divisible
 * @num: prime number
 * @div: divisible
 * Return: return 1 if the input integer is a prime number
 * Return: return 0 if it not a prime number
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - a prime number is divisible
 * @n: prime number
 * @div: divisible
 * Return: return 1 if the input integer is a prime number
 * Return: return 0 if it not a prime number
*/

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
