#include "main.h"

/**
* to_lower - Converts an uppercase letter to lowercase.
* @c: The character to convert.
*
* Return: The lowercase equivalent if c is uppercase, else c.
*/
char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/**
* find_end - Finds the last character of a string recursively.
* @s: The string to process.
*
* Return: Pointer to the last character of the string.
*/
char *find_end(char *s)
{
	if (*s == '\0')
		return (s - 1);
	return (find_end(s + 1));
}

/**
* check_palindrome - Recursively checks if a string is a palindrome.
* @start: Pointer to the start of the string segment.
* @end: Pointer to the end of the string segment.
*
* Return: 1 if palindrome, 0 otherwise.
*/
int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start == ' ')
		return (check_palindrome(start + 1, end));

	if (*end == ' ')
		return (check_palindrome(start, end - 1));

	if (to_lower(*start) != to_lower(*end))
		return (0);

	return (check_palindrome(start + 1, end - 1));
}

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to check.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
	if (!s || *s == '\0')
		return (1);

	return (check_palindrome(s, find_end(s)));
}
