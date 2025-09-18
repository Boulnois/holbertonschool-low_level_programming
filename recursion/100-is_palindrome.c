#include "main.h"

/* fonction auxiliaire pour calculer la longueur d'une chaîne */
int length(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/* fonction auxiliaire pour passer une lettre en minuscule */
char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* fonction auxiliaire récursive pour vérifier le palindrome */
int helper(char *start, char *end)
{
	while (*start == ' ' && start < end)
		start++;

	while (*end == ' ' && end > start)
		end--;

	if (start >= end)
		return (1);

	if (to_lower(*start) != to_lower(*end))
		return (0);

	return helper(start + 1, end - 1);
}

/* fonction principale */
int is_palindrome(char *s)
{
	int len;

	if (!s)
		return (0);

	len = length(s);
	return helper(s, s + len - 1);
}
