#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Description: The numbers are separated by a comma followed by a space.
 *              The program uses a loop to generate the sequence and prints
 *              it using printf. Each number is stored in unsigned long to
 *              handle large values in the sequence.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long nbr_1 = 1;
	unsigned long nbr_2 = 2;
	unsigned long next;
	int i;

	printf("%lu, %lu", nbr_1, nbr_2);

	for (i = 3; i <= 50; i++)
	{
		next = nbr_1 + nbr_2;
		printf(", %lu", next);

		nbr_1 = nbr_2;
		nbr_2 = next;
	}
	printf("\n");
	return (0);
}
