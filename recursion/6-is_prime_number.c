#include "main.h"
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Check if a number is divisible
 * @num: The number to check
 * @div: The divisor
 * Return: Return: 1 if num is prime, otherwise 0
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Determines if n is a prime number
 * @n: The number to evaluate
 *
 * Return: Return: 1 if n is prime, otherwise 0
*/

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
