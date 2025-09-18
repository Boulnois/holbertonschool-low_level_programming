#include "main.h"

/* Convertit un caractère en minuscule */
char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* Trouve récursivement le dernier caractère de la chaîne */
char *find_end(char *s)
{
	if (*s == '\0')
		return (s - 1);
	return find_end(s + 1);
}

/* Vérifie récursivement le palindrome entre start et end */
int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start == ' ')
		return check_palindrome(start + 1, end);

	if (*end == ' ')
		return check_palindrome(start, end - 1);

	if (to_lower(*start) != to_lower(*end))
		return (0);

	return check_palindrome(start + 1, end - 1);
}

/* Fonction principale */
int is_palindrome(char *s)
{
	if (!s || *s == '\0')
		return (1);

	return check_palindrome(s, find_end(s));
}
