#include <stdio.h>

/**
* main - affiche toutes les combinaisons possibles de deux chiffres
* Return: Always 0
*/
int main(void)
{
	int nbr_1, nbr_2;

	for (nbr_1 = 0; nbr_1 <= 98; nbr_1++)
	{
		for (nbr_2 = nbr_1 + 1; nbr_2 <= 99; nbr_2++)
		{
			putchar((nbr_1 / 10) + '0');
			putchar((nbr_1 % 10) + '0');
			putchar(' ');
			putchar((nbr_2 / 10) + '0');
			putchar((nbr_2 % 10) + '0');

			if (nbr_1 != 98 || nbr_2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
