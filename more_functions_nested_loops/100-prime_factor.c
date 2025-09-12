#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int mainar
(void)
{
	long n = 612852475143;
	long largest_factor = -1;
	long i;
	long limit = sqrt(n);

	while (n % 2 == 0)
	{
		largest_factor = 2;
		n = n / 2;
	}

	for (i = 3; i <= limit; i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		largest_factor = n;
	}

	printf("%ld\n", largest_factor);
	return (0);
}
