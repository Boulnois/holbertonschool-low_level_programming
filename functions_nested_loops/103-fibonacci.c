#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints the sum of even Fibonacci numbers
 *        whose values do not exceed 4,000,000
 *
 * Description: The program generates Fibonacci numbers starting with 1 and 2.
 *              Each new term is the sum of the previous two. It adds only
 *              the even terms to a running total and prints the final sum.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long nbr_1 = 1;
	unsigned long nbr_2 = 2;
	unsigned long sum = 2;
	unsigned long next = 0;

		while(next <= 4000000)
		{
			next = nbr_1 + nbr_2;

			if (next % 2 == 0)
			{
				sum = sum + next;

			}
			nbr_1 = nbr_2;
			nbr_2 = next;
		}
	printf("%lu\n", sum);

	return (0);
}
