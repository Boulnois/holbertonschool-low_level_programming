#include <stdio.h>
#include "main.h"

/**
* main - prints the first 98 Fibonacci numbers
*
* Return: Always 0.
*/
int main(void)
{
int nbr_1 = 1, nbr_2 = 2, next, i;

for (i = 1; i <= 98; i++)
	{
		printf("%d", nbr_1);

		if (i != 98)
		{
			printf(", ");
		}
		next = nbr_1 + nbr_2;
		nbr_1 = nbr_2;
		nbr_2 = next;
	}
	printf("\n");
	return (0);
}
