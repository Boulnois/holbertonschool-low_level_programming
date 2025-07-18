#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to print between the strings
 * @n: The number of strings passed to the function
 * Return: Print a new line at the end of your function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *myString = va_arg(args, char*);

		if (myString == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", myString);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
