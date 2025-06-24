#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the Fizz-Buzz program
 * Prints numbers from 1 to 100
 * Prints multiples 3 with "Fizz", multiples of 5 with "Buzz"
 * Prints multiple 3 et 5 avec FizzBuzz
 * Return: Always 0 (success).
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n < 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
