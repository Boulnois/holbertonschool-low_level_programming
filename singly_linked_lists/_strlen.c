#include "lists.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: La chaîne dont la longueur doit être mesurée
 *
 * Return: La longueur de la chaîne
*/

int _strlen(char *s)
{
	int chaine = 0;

	while (*(s + chaine) != '\0')
	{
	chaine++;
	}

	return (chaine);
}
