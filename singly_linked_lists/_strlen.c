#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: La chaîne dont la longueur doit être mesurée
 *
 * Return: La longueur de la chaîne
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
