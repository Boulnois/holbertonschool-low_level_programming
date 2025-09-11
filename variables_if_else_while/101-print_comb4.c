#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int nbr_1, nbr_2, nbr_3;

	for (nbr_1 = 0; nbr_1 <= 7; nbr_1++)
	{
		for (nbr_2 = nbr_1 + 1; nbr_2 <= 8; nbr_2++)
		{
			for (nbr_3 = nbr_2 + 1; nbr_3 <= 9; nbr_3++)
			{
				putchar(nbr_1 + '0');
				putchar(nbr_2 + '0');
				putchar(nbr_3 + '0');

				if (nbr_1 != 7 || nbr_2 != 8 || nbr_3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
