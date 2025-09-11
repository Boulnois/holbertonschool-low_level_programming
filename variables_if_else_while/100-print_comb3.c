#include <stdio.h>

/**
 * main - affiche toutes les combinaisons possibles de deux chiffres
 *         en ordre croissant, séparées par une virgule et un espace.
 *         Les chiffres doivent être différents et chaque combinaison
 *         ne doit apparaître qu'une seule fois.
 *
 * Return: 0
 */
int main(void)
{
	int nbr_1, nbr_2;

	for (nbr_1 = 0; nbr_1 <=8; nbr_1++)
	{
		for (nbr_2 = nbr_1 + 1; nbr_2 <= 9; nbr_2++) 
		{
			putchar(nbr_1 + '0');
			putchar(nbr_2 + '0');
			
			if (nbr_1 != 8 || nbr_2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
