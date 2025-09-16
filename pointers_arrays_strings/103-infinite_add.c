#include "main.h"
#include <stdio.h>

/**
 * _strlen - retourne la longueur d'une chaîne
 * @s: chaîne
 *
 * Return: longueur
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * infinite_add - additionne deux nombres sous forme de chaînes
 * @n1: premier nombre
 * @n2: deuxième nombre
 * @r: buffer pour stocker le résultat
 * @size_r: taille du buffer
 *
 * Return: pointeur vers le résultat, ou 0 si le résultat ne tient pas
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, sum, digit1, digit2;

	i = _strlen(n1) - 1;
	j = _strlen(n2) - 1;
	k = size_r - 1;
	carry = 0;

	r[k] = '\0';
	k--;

	while (i >= 0 || j >= 0 || carry != 0)
	{
		if (k < 0)
		{
			return (0);
		}

		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;

		r[k] = (sum % 10) + '0';

		i--;
		j--;
		k--;
	}
	return (r + k + 1);
}
