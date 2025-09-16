#include "main.h"

/**
* rot13 - Encode une chaîne en ROT13
* @s: chaîne à encoder
*
* Return: pointeur vers la chaîne modifiée
*/
char *rot13(char *s)
{
	int i, j;
	char orig[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; orig[j] != '\0'; j++)
		{
			if (s[i] == orig[j])
			{
				s[i] = code[j];
				break;
			}
		}
	}
	return (s);
}
