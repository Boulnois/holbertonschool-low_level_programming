#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: A pointer to the string representing the name to be printed
 * @f: A pointer to a function
 * Return: This function does not return a value
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
