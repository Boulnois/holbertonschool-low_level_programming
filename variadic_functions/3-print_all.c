#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything, depending on the format provided.
 * @format: A list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char * (string)
 * Any other character is ignored.
 * Return: a function that prints everything
 */

void print_all(const char * const format, ...)
{
	int index;
	char *separator = "";
	va_list args;

	va_start(args, format);

	index = 0;
	while (format[index] != '\0')
	{
		char current = format[index];

		switch (current)
		{

		case 'c':
		{
			char c = va_arg(args, int);

			printf('%s%c', separator, c);
			separator = ", ";
			break;
		}

		case 'i':
		{
			int i = va_arg(args, int);

			printf('%s%d', separator, i);
			separator = ", ";
			break;
		}

		case 'f':
		{
			double f = va_arg(args, double);

			printf('%s%f', separator, f);
			separator = ", ";
			break;
		}

		case 's':
		{
			char *s = va_arg(args, char *);

			if (s == NULL)
			{
				printf('%s(nil)', separator);
			}

			if (s != NULL)
			{
				printf('%s%s', separator, s);
			}
			separator = ", ";

			break;
		}

		default:
			break;
		}
		index++;
	}
	va_end(args);
	printf("\n");
}
