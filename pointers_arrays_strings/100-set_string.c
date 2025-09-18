#include "main.h"
#include <stdio.h>

/**
 * set_string - change la valeur d’un pointeur vers un char
 * @s: pointeur vers un pointeur de caractère
 * @to: adresse de la chaîne de caractères vers laquelle rediriger *s
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
