#include <stdio.h>
#include "main.h"

/**
* main - prints the first 98 Fibonacci numbers
*
* Return: Always 0.
*/
int main(void)
{
	int i;
	unsigned long nbr_1_low = 1, nbr_2_low = 2;
	unsigned long nbr_1_high = 0, nbr_2_high = 0;
	unsigned long next_low, next_high;
	unsigned long billion = 1000000000;

	printf("1, 2");

	for (i = 3; i <= 98; i++)
	{
		next_low = nbr_1_low + nbr_2_low;
		next_high = nbr_1_high + nbr_2_high;

		if (next_low >= billion)
		{
			next_low -= billion;
			next_high += 1;
		}

		if (next_high > 0)
			printf(", %lu%09lu", next_high, next_low);
		else
			printf(", %lu", next_low);

		nbr_1_low = nbr_2_low;
		nbr_1_high = nbr_2_high;
		nbr_2_low = next_low;
		nbr_2_high = next_high;
	}
	printf("\n");
	return (0);
}
