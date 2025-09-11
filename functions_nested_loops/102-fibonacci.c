#include <stdio.h>
#include "main.h"

/**
* main - point d'entrée
* Return: Always 0
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
