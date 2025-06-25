#include "main.h"
/**
 * swap_int - values of two integers
 * the values a to b et b to a
 * @a: *a
 * @b: *b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
